
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,int *****,void**,int *) ;
 int FUNC_1 (int *) ;
 int **** VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;

bool FUNC_4(void)
{
   if (VAR_2)
      return 1;
      if (!(FUNC_3(FUNC_0(
                     FUNC_1(((void*)0)), VAR_0,
                     &VAR_1,
                     (void**)&VAR_2, ((void*)0)))))

      goto error;

   return 1;

error:
   FUNC_2("[DINPUT]: Failed to initialize DirectInput.\n");
   return 0;
}
