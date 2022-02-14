
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_flags; TYPE_1__* ipath_cregs; } ;
struct TYPE_2__ {int cr_sendstallcnt; int cr_pktrcvcnt; int cr_pktsendcnt; int cr_wordrcvcnt; int cr_wordsendcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int ) ;

int FUNC_1(struct ipath_devdata *VAR_2, u64 *VAR_3,
       u64 *VAR_4, u64 *VAR_5, u64 *VAR_6,
       u64 *VAR_7)
{
 int VAR_8;

 if (!(VAR_2->ipath_flags & VAR_1)) {

  VAR_8 = -VAR_0;
  goto bail;
 }
 *VAR_3 = FUNC_0(VAR_2, VAR_2->ipath_cregs->cr_wordsendcnt);
 *VAR_4 = FUNC_0(VAR_2, VAR_2->ipath_cregs->cr_wordrcvcnt);
 *VAR_5 = FUNC_0(VAR_2, VAR_2->ipath_cregs->cr_pktsendcnt);
 *VAR_6 = FUNC_0(VAR_2, VAR_2->ipath_cregs->cr_pktrcvcnt);
 *VAR_7 = FUNC_0(VAR_2, VAR_2->ipath_cregs->cr_sendstallcnt);

 VAR_8 = 0;

bail:
 return VAR_8;
}
