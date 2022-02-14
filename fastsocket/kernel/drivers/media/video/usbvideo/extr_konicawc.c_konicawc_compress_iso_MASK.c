
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iso_skip_count; int iso_err_count; } ;
struct uvd {int dp; TYPE_3__* dev; TYPE_1__ stats; scalar_t__ user_data; } ;
struct urb {unsigned char* transfer_buffer; int number_of_packets; TYPE_2__* iso_frame_desc; } ;
struct konicawc {int buttonsts; int lastframe; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int actual_length; int status; int offset; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *,...) ;
 int FUNC_2 (int *,char*,unsigned char) ;
 int FUNC_3 (struct konicawc*) ;

__attribute__((used)) static int FUNC_4(struct uvd *VAR_0, struct urb *VAR_1, struct urb *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5 = 0;
 unsigned char *VAR_6 = VAR_2->transfer_buffer;
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 struct konicawc *VAR_10 = (struct konicawc *)VAR_0->user_data;

 for (VAR_4 = 0; VAR_4 < VAR_1->number_of_packets; VAR_4++) {
  int VAR_11 = VAR_10->buttonsts;
  unsigned char VAR_12;
  int VAR_13 = VAR_1->iso_frame_desc[VAR_4].actual_length;
  int VAR_14 = VAR_1->iso_frame_desc[VAR_4].status;
  VAR_3 = VAR_1->transfer_buffer +
   VAR_1->iso_frame_desc[VAR_4].offset;


  if (VAR_14 < 0) {
   FUNC_0(1, "Data error: packet=%d. len=%d. status=%d.",
         VAR_4, VAR_13, VAR_14);
   VAR_0->stats.iso_err_count++;
   continue;
  }


  if (VAR_13 <= 0) {
   VAR_0->stats.iso_skip_count++;
   continue;
  }


  VAR_12 = *(VAR_6+VAR_2->iso_frame_desc[VAR_4].offset);
  if(VAR_12 < 0x80) {
   VAR_11 = !!(VAR_12 & 0x40);
   VAR_12 &= ~0x40;
  }




  if(VAR_11 != VAR_10->buttonsts) {
   FUNC_0(2, "button: %sclicked", VAR_11 ? "" : "un");
   VAR_10->buttonsts = VAR_11;
   FUNC_3(VAR_10);
  }

  if(VAR_12 == 0x01) {
   VAR_8++;
   continue;
  }

  if((VAR_12 > 0x01) && (VAR_12 < 0x80)) {
   FUNC_2(&VAR_0->dev->dev, "unknown status %2.2x\n",
     VAR_12);
   VAR_9++;
   continue;
  }
  if(!VAR_12 && VAR_10->lastframe == -2) {
   FUNC_0(2, "dropping frame looking for image start");
   continue;
  }

  VAR_7++;
  if(VAR_12 & 0x80) {
   unsigned char VAR_15[] = { 0, 0xff, 0, 0x00 };

   if(VAR_10->lastframe == -2) {
    FUNC_0(2, "found initial image");
    VAR_10->lastframe = -1;
   }

   VAR_15[3] = VAR_12 & 0x7F;
   FUNC_1(&VAR_0->dp, VAR_15, 4);
   VAR_5 += 4;
  }

  VAR_5 += VAR_13;
  FUNC_1(&VAR_0->dp, VAR_3, VAR_13);
 }
 FUNC_0(8, "finished: keep = %d discard = %d bad = %d added %d bytes",
      VAR_7, VAR_8, VAR_9, VAR_5);
 return VAR_5;
}
