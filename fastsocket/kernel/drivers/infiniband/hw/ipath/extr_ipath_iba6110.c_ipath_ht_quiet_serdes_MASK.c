
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ipath_devdata {TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_serdesconfig0; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned long long) ;
 scalar_t__ FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ipath_devdata *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_serdesconfig0);

 VAR_2 |= VAR_0;
 FUNC_0("Setting TxIdleEn on serdes (config0 = %llx)\n",
    (unsigned long long) VAR_2);
 FUNC_2(VAR_1, VAR_1->ipath_kregs->kr_serdesconfig0, VAR_2);
}
