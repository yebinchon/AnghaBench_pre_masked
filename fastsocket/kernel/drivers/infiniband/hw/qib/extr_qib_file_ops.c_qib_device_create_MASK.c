
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*) ;

int FUNC_2(struct qib_devdata *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_1 && !VAR_2)
  VAR_2 = VAR_1;
 return VAR_2;
}
