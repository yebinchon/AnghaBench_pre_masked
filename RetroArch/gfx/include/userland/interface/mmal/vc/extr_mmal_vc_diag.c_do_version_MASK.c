
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ MMAL_STATUS_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (char*,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3, const char **VAR_4)
{
   uint32_t VAR_5 = VAR_1, VAR_6 = VAR_1, VAR_7;
   MMAL_STATUS_T VAR_8 = FUNC_2(&VAR_5, &VAR_6, &VAR_7);
   (void)VAR_3; (void)VAR_4;
   if (VAR_8 == VAR_0)
   {
      FUNC_3("version %d.%02d (min %d)\n", VAR_5, VAR_6, VAR_7);
      return 0;
   }
   else
   {
      FUNC_0(VAR_2, "error getting version (%li:%s)\n", VAR_8, FUNC_1(VAR_8));
      return -1;
   }
}
