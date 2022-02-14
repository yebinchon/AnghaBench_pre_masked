
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iso_skip_count; int iso_err_count; } ;
struct uvd {int debug; int dp; TYPE_2__ stats; } ;
struct urb {int number_of_packets; char* transfer_buffer; TYPE_1__* iso_frame_desc; } ;
struct TYPE_3__ {int actual_length; int status; int offset; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct uvd *VAR_0, struct urb *VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->number_of_packets; VAR_3++) {
  int VAR_5 = VAR_1->iso_frame_desc[VAR_3].actual_length;
  int VAR_6 = VAR_1->iso_frame_desc[VAR_3].status;

  VAR_2 = VAR_1->transfer_buffer + VAR_1->iso_frame_desc[VAR_3].offset;


  if (VAR_6 < 0) {
   if (VAR_0->debug >= 1)
    FUNC_1("Data error: packet=%d. len=%d. status=%d.", VAR_3, VAR_5, VAR_6);
   VAR_0->stats.iso_err_count++;
   continue;
  }


  if (VAR_5 <= 0) {
   VAR_0->stats.iso_skip_count++;
   continue;
  }
  VAR_4 += VAR_5;
  FUNC_0(&VAR_0->dp, VAR_2, VAR_5);
 }
 return VAR_4;
}
