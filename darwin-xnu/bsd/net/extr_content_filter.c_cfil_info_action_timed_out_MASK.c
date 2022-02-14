
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct TYPE_7__ {scalar_t__ cfi_pending_last; scalar_t__ cfi_pass_offset; } ;
struct TYPE_5__ {scalar_t__ cfi_pending_last; scalar_t__ cfi_pass_offset; } ;
struct cfil_info {TYPE_3__ cfi_rcv; TYPE_1__ cfi_snd; struct cfil_entry* cfi_entries; } ;
struct TYPE_8__ {scalar_t__ cfe_pass_offset; } ;
struct TYPE_6__ {scalar_t__ cfe_pass_offset; } ;
struct cfil_entry {int cfe_last_action; TYPE_4__ cfe_rcv; TYPE_2__ cfe_snd; int * cfe_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cfil_info*,char*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (struct timeval*,int *,struct timeval*) ;

bool
FUNC_3(struct cfil_info *VAR_2, int VAR_3)
{
 struct cfil_entry *VAR_4;
 struct timeval VAR_5;
 struct timeval VAR_6;

 if (VAR_2 == ((void*)0))
  return 0;






 if (VAR_2->cfi_snd.cfi_pending_last > VAR_2->cfi_snd.cfi_pass_offset ||
  VAR_2->cfi_rcv.cfi_pending_last > VAR_2->cfi_rcv.cfi_pass_offset) {

  FUNC_1(&VAR_5);

  for (int VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
   VAR_4 = &VAR_2->cfi_entries[VAR_7 - 1];

   if (VAR_4->cfe_filter == ((void*)0))
    continue;

   if (VAR_2->cfi_snd.cfi_pending_last > VAR_4->cfe_snd.cfe_pass_offset ||
    VAR_2->cfi_rcv.cfi_pending_last > VAR_4->cfe_rcv.cfe_pass_offset) {

    FUNC_2(&VAR_5, &VAR_4->cfe_last_action, &VAR_6);
    if (VAR_6.tv_sec >= VAR_3) {



     return 1;
    }
   }
  }
 }
 return 0;
}
