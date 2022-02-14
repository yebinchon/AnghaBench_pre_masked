
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_1(struct qib_devdata *VAR_3)
{
 u64 VAR_4;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < 100 ; ++VAR_5) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  if (VAR_4 & VAR_0)
   return (VAR_4 >> VAR_1) & 1;
 }
 return -1;
}
