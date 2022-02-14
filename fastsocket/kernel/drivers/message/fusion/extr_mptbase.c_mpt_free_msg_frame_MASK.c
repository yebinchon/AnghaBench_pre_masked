
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int FreeQlock; int mfcnt; int FreeQ; } ;
struct TYPE_10__ {int arg1; int list; } ;
struct TYPE_8__ {TYPE_3__ linkage; } ;
struct TYPE_9__ {TYPE_1__ frame; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_4__ MPT_FRAME_HDR ;
typedef TYPE_5__ MPT_ADAPTER ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(MPT_ADAPTER *VAR_0, MPT_FRAME_HDR *VAR_1)
{
 unsigned long VAR_2;


 FUNC_2(&VAR_0->FreeQlock, VAR_2);
 if (FUNC_0(VAR_1->u.frame.linkage.arg1) == 0xdeadbeaf)
  goto out;

 VAR_1->u.frame.linkage.arg1 = FUNC_0(0xdeadbeaf);
 FUNC_1(&VAR_1->u.frame.linkage.list, &VAR_0->FreeQ);



 out:
 FUNC_3(&VAR_0->FreeQlock, VAR_2);
}
