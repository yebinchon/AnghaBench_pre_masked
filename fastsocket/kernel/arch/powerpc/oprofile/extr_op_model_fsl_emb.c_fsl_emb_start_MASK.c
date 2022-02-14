
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_counter_config {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int ) ;
 int * VAR_4 ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct op_counter_config *VAR_5)
{
 int VAR_6;

 FUNC_3(FUNC_1() | VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  if (VAR_5[VAR_6].enabled) {
   FUNC_0(VAR_6, VAR_4[VAR_6]);


   FUNC_7(VAR_6, 1, 0);
   FUNC_4(VAR_6, 1);
  } else {
   FUNC_0(VAR_6, 0);


   FUNC_4(VAR_6, 0);
  }
 }




 FUNC_5(1);

 VAR_3 = 1;

 FUNC_6("start on cpu %d, pmgc0 %x\n", FUNC_8(),
   FUNC_2(VAR_1));

 return 0;
}
