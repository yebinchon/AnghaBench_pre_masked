
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4(int VAR_5, qboolean VAR_6, void(*VAR_7)(int))
{
 int VAR_8, VAR_9;

 FUNC_1("no multi-threading\n");
 VAR_0 = 0;
 VAR_4 = VAR_5;
 VAR_1 = -1;
 VAR_2 = VAR_6;
 VAR_8 = FUNC_0 ();




 VAR_7(0);

 VAR_9 = FUNC_0 ();
 if (VAR_2)
  FUNC_2 (" (%i)\n", VAR_9-VAR_8);
}
