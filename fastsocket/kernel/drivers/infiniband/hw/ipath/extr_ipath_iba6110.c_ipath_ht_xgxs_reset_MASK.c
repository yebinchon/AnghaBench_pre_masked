
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_control; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_control; int kr_xgxsconfig; int kr_scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int ) ;
 int FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ipath_devdata *VAR_2)
{
 u64 VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_2->ipath_kregs->kr_xgxsconfig);
 VAR_3 = VAR_4 | VAR_1;
 VAR_4 &= ~VAR_1;
 FUNC_2(VAR_2, VAR_2->ipath_kregs->kr_control,
    VAR_2->ipath_control & ~VAR_0);
 FUNC_2(VAR_2, VAR_2->ipath_kregs->kr_xgxsconfig, VAR_3);
 FUNC_0(VAR_2, VAR_2->ipath_kregs->kr_scratch);
 FUNC_2(VAR_2, VAR_2->ipath_kregs->kr_xgxsconfig, VAR_4);
 FUNC_2(VAR_2, VAR_2->ipath_kregs->kr_control,
    VAR_2->ipath_control);
}
