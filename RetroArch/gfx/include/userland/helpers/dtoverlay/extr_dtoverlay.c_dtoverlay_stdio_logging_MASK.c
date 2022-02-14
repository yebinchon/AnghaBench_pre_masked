
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int dtoverlay_logging_type_t ;




 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_2(dtoverlay_logging_type_t VAR_1,
                                    const char *VAR_2, va_list VAR_3)
{
   const char *VAR_4;

   switch (VAR_1)
   {
   case 128:
      VAR_4 = "error";
      break;

   case 129:
      VAR_4 = "debug";
      break;

   default:
      VAR_4 = "?";
   }

   FUNC_0(VAR_0, "DTOVERLAY[%s]: ", VAR_4);
   FUNC_1(VAR_0, VAR_2, VAR_3);
   FUNC_0(VAR_0, "\n");
}
