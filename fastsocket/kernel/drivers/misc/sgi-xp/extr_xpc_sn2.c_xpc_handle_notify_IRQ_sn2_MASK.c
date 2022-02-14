
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct xpc_partition {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 short VAR_1 ;
 int FUNC_1 (struct xpc_partition*) ;
 int FUNC_2 (struct xpc_partition*) ;
 scalar_t__ FUNC_3 (struct xpc_partition*) ;
 struct xpc_partition* VAR_2 ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_3, void *VAR_4)
{
 short VAR_5 = (short)(u64)VAR_4;
 struct xpc_partition *VAR_6 = &VAR_2[VAR_5];

 FUNC_0(VAR_5 < 0 || VAR_5 >= VAR_1);

 if (FUNC_3(VAR_6)) {
  FUNC_1(VAR_6);

  FUNC_2(VAR_6);
 }
 return VAR_0;
}
