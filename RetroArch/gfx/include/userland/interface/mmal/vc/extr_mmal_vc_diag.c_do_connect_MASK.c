
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{

   MMAL_STATUS_T VAR_2;
   if ((VAR_2 = FUNC_3()) != VAR_0)
   {
      FUNC_1(VAR_1, "failed to initialize mmal vc library (%i:%s)\n",
            VAR_2, FUNC_2(VAR_2));
      FUNC_0(1);
   }
}
