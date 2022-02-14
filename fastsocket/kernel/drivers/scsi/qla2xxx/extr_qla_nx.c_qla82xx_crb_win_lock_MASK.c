
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 int FUNC_4 (struct qla_hw_data*,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct qla_hw_data *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0, VAR_6 = 0;

 while (!VAR_5) {

  VAR_5 = FUNC_3(VAR_3, FUNC_0(VAR_1));
  if (VAR_5 == 1)
   break;
  if (VAR_6 >= VAR_0)
   return -1;
  VAR_6++;


  if (!FUNC_2())
   FUNC_5();
  else {
   for (VAR_4 = 0; VAR_4 < 20; VAR_4++)
    FUNC_1();
  }
 }
 FUNC_4(VAR_3, VAR_2, VAR_3->portnum);
 return 0;
}
