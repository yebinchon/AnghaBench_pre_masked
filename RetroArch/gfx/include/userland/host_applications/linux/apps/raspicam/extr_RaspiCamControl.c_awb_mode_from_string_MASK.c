
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_PARAM_AWBMODE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static MMAL_PARAM_AWBMODE_T FUNC_2(const char *VAR_3)
{
   int VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);

   if( VAR_4 != -1)
      return (MMAL_PARAM_AWBMODE_T)VAR_4;

   FUNC_1("Unknown awb mode: %s", VAR_3);
   return VAR_0;
}
