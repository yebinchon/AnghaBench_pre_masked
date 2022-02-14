
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dev; scalar_t__ context; } ;
struct TYPE_3__ {size_t ctrl_out_idx; scalar_t__ ctrl_cnt; int * ctrl_buff; int dev; } ;
typedef TYPE_1__ hfcusb_data ;
typedef int ctrl_buft ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct urb *VAR_1)
{
 hfcusb_data *VAR_2 = (hfcusb_data *) VAR_1->context;
 ctrl_buft *VAR_3;

 VAR_1->dev = VAR_2->dev;
 if (VAR_2->ctrl_cnt) {
  VAR_3 = &VAR_2->ctrl_buff[VAR_2->ctrl_out_idx];
  VAR_2->ctrl_cnt--;
  if (++VAR_2->ctrl_out_idx >= VAR_0)
   VAR_2->ctrl_out_idx = 0;

  FUNC_0(VAR_2);
 }
}
