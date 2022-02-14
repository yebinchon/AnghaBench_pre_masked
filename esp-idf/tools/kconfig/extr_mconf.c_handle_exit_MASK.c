
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_7;

 VAR_2 = 1;
 FUNC_9();
 FUNC_3();
 if (FUNC_1())
  VAR_7 = FUNC_4(((void*)0),
       FUNC_0("Do you wish to save your new configuration?\n"
         "(Press <ESC><ESC> to continue kernel configuration.)"),
       6, 60);
 else
  VAR_7 = -1;

 FUNC_5(VAR_3, VAR_4);

 switch (VAR_7) {
 case 0:
  if (FUNC_2(VAR_1)) {
   FUNC_6(VAR_6, "%s", FUNC_0("\n\n"
       "Error while writing of the configuration.\n"
       "Your configuration changes were NOT saved."
       "\n\n"));
   return 1;
  }

 case -1:
  if (!VAR_5) {
   const char *VAR_8 = FUNC_7("IDF_CMAKE");
   const char *VAR_9;
   if (VAR_8 && VAR_8[0] == 'y')
    VAR_9 = FUNC_0("Ready to use CMake (or 'idf.py build') to build the project.");
   else
    VAR_9 = FUNC_0("Execute 'make' to start the build or try 'make help'.");
   FUNC_8(FUNC_0("\n\n"
      "*** End of the configuration.\n"
      "*** %s\n\n"), VAR_9);
  }
  VAR_7 = 0;
  break;
 default:
  if (!VAR_5)
   FUNC_6(VAR_6, "%s", FUNC_0("\n\n"
       "Your configuration changes were NOT saved."
       "\n\n"));
  if (VAR_7 != VAR_0)
   VAR_7 = 0;
 }

 return VAR_7;
}
