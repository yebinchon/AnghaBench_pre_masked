
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_2 (int VAR_4, qboolean VAR_5, void(*VAR_6)(int))
{
 int VAR_7;
 int VAR_8, VAR_9;

 VAR_0 = 0;
 VAR_3 = VAR_4;
 VAR_1 = -1;
 VAR_2 = VAR_5;
 VAR_8 = FUNC_0 ();
 VAR_6(0);

 VAR_9 = FUNC_0 ();
 if (VAR_2)
  FUNC_1 (" (%i)\n", VAR_9-VAR_8);
}
