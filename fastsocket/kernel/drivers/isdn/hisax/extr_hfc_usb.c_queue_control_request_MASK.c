
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctrl_cnt; size_t ctrl_in_idx; TYPE_2__* ctrl_buff; } ;
typedef TYPE_1__ hfcusb_data ;
struct TYPE_6__ {int action; void* reg_val; void* hfc_reg; } ;
typedef TYPE_2__ ctrl_buft ;
typedef void* __u8 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(hfcusb_data * VAR_1, __u8 VAR_2, __u8 VAR_3, int VAR_4)
{
 ctrl_buft *VAR_5;

 if (VAR_1->ctrl_cnt >= VAR_0)
  return (1);
 VAR_5 = &VAR_1->ctrl_buff[VAR_1->ctrl_in_idx];
 VAR_5->hfc_reg = VAR_2;
 VAR_5->reg_val = VAR_3;
 VAR_5->action = VAR_4;
 if (++VAR_1->ctrl_in_idx >= VAR_0)
  VAR_1->ctrl_in_idx = 0;
 if (++VAR_1->ctrl_cnt == 1)
  FUNC_0(VAR_1);
 return (0);
}
