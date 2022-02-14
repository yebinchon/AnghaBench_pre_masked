
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*) ;
 int FUNC_2 (struct qib_devdata*,int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 1;
 if (VAR_4 & VAR_0)
  FUNC_0(VAR_2);

 VAR_5 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4 & VAR_1)
  FUNC_1(VAR_2);
 return VAR_5;
}
