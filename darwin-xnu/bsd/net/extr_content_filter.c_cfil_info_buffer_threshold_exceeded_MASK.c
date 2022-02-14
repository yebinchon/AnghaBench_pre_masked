
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cfi_tail_drop_cnt; } ;
struct TYPE_3__ {scalar_t__ cfi_tail_drop_cnt; } ;
struct cfil_info {TYPE_2__ cfi_rcv; TYPE_1__ cfi_snd; } ;


 int FUNC_0 (int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct cfil_info*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

bool
FUNC_2(struct cfil_info *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return 0;




 if (VAR_3->cfi_snd.cfi_tail_drop_cnt ||
  VAR_3->cfi_rcv.cfi_tail_drop_cnt) {
  return 1;
 }

 return 0;
}
