
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_devdata {int dummy; } ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int FUNC_2 (struct qib_devdata*,int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_0, u8 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 for (VAR_2 = 7; VAR_2 >= 0; VAR_2--) {
  VAR_3 = (VAR_1 >> VAR_2) & 1;
  FUNC_2(VAR_0, VAR_3);
  FUNC_1(VAR_0, 1);
  FUNC_1(VAR_0, 0);
 }
 return (!FUNC_0(VAR_0)) ? 1 : 0;
}
