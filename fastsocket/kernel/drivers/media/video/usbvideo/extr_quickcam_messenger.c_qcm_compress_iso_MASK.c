
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int iso_err_count; } ;
struct uvd {TYPE_3__ stats; TYPE_2__* dev; } ;
struct urb {int number_of_packets; unsigned char* transfer_buffer; TYPE_1__* iso_frame_desc; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int actual_length; int status; int offset; } ;


 int FUNC_0 (int *,char*,int,int,int) ;
 scalar_t__ FUNC_1 (struct uvd*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct uvd *VAR_0, struct urb *VAR_1)
{
 int VAR_2;
 int VAR_3;
 unsigned char *VAR_4;

 VAR_2=0;
 for (VAR_3 = 0; VAR_3 < VAR_1->number_of_packets; VAR_3++) {
  int VAR_5 = VAR_1->iso_frame_desc[VAR_3].actual_length;
  int VAR_6 = VAR_1->iso_frame_desc[VAR_3].status;

  VAR_4 = VAR_1->transfer_buffer +
   VAR_1->iso_frame_desc[VAR_3].offset;

  if (VAR_6 < 0) {
   FUNC_0(&VAR_0->dev->dev,
     "Data error: packet=%d. len=%d. status=%d.\n",
     VAR_3, VAR_5, VAR_6);
   VAR_0->stats.iso_err_count++;
   continue;
  }
  if (!VAR_5)
   continue;

  VAR_2 += FUNC_1(VAR_0, VAR_4, VAR_5);
 }
 return VAR_2;
}
