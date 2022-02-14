
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef TYPE_1__* purbb_t ;
typedef int VOID ;
struct TYPE_11__ {unsigned long data; } ;
struct TYPE_10__ {TYPE_5__ null_frame_complete_task; } ;
struct TYPE_9__ {scalar_t__ OS_Cookie; } ;
struct TYPE_8__ {TYPE_3__* pAd; } ;
struct TYPE_7__ {int status; scalar_t__ context; } ;
typedef TYPE_2__* PTX_CONTEXT ;
typedef TYPE_3__* PRTMP_ADAPTER ;
typedef TYPE_4__* POS_COOKIE ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_5__*) ;

VOID FUNC_1(purbb_t VAR_0, struct pt_regs *VAR_1)
{
 PRTMP_ADAPTER VAR_2;
 PTX_CONTEXT VAR_3;
 NTSTATUS VAR_4;
 POS_COOKIE VAR_5;


 VAR_3 = (PTX_CONTEXT)VAR_0->context;
 VAR_2 = VAR_3->pAd;
 VAR_4 = VAR_0->status;

 VAR_5 = (POS_COOKIE) VAR_2->OS_Cookie;
 VAR_5->null_frame_complete_task.data = (unsigned long)VAR_0;
 FUNC_0(&VAR_5->null_frame_complete_task);
}
