
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av7110 {int (* recover ) (struct av7110*) ;} ;


 int FUNC_0 (struct av7110*) ;
 int FUNC_1 (struct av7110*,int) ;
 int FUNC_2 (int,char*,struct av7110*) ;
 int FUNC_3 (struct av7110*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct av7110*) ;
 int FUNC_6 (struct av7110*) ;

__attribute__((used)) static void FUNC_7(struct av7110 *VAR_0)
{
 FUNC_2(4, "%p\n",VAR_0);

 FUNC_0(VAR_0);
 FUNC_4(100);

 FUNC_3(VAR_0);


 if (VAR_0->recover)
  VAR_0->recover(VAR_0);

 FUNC_5(VAR_0);




}
