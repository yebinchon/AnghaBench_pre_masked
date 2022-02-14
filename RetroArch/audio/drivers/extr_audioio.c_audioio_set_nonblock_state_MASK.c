
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, bool VAR_4)
{
   int VAR_5;
   int *VAR_6 = (int*)VAR_3;

   if (VAR_4)
      VAR_5 = FUNC_1(*VAR_6, VAR_1, FUNC_1(*VAR_6, VAR_0) | VAR_2);
   else
      VAR_5 = FUNC_1(*VAR_6, VAR_1, FUNC_1(*VAR_6, VAR_0) & (~VAR_2));
   if (VAR_5 != 0)
      FUNC_0("Could not set nonblocking on audio file descriptor. Will not be able to fast-forward.\n");
}
