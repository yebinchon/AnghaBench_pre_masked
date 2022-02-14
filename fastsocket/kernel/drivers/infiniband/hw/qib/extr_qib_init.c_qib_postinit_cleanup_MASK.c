
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int (* f_cleanup ) (struct qib_devdata*) ;} ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_4(struct qib_devdata *VAR_0)
{







 if (VAR_0->f_cleanup)
  VAR_0->f_cleanup(VAR_0);

 FUNC_2(VAR_0);

 FUNC_0(VAR_0);

 FUNC_1(VAR_0);
}
