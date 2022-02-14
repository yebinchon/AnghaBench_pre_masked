
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_state {scalar_t__* stack; scalar_t__ i; } ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,struct stub_state*) ;
 int VAR_2 ;

int FUNC_4(void)
{
   struct stub_state VAR_3;
   RFILE *VAR_4 = FUNC_1("test.msgpack",
         VAR_1,
         VAR_0);

   VAR_3.i = 0;
   VAR_3.stack[0] = 0;

   FUNC_3(VAR_4, &VAR_2, &VAR_3);

   FUNC_2("Test succeeded.\n");
   FUNC_0(VAR_4);

   return 0;
}
