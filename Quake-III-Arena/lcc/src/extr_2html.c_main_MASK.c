
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int rcc_program_ty ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 float FUNC_2 (int) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int * FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(int VAR_7, char *VAR_8[]) {
 int VAR_9, VAR_10;
 float VAR_11 = (FUNC_2(FUNC_12(VAR_3, ",v")), FUNC_13(FUNC_12(VAR_3, ",v")+2, ((void*)0)))
;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 rcc_program_ty VAR_14;

 for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++)
  if (*VAR_8[VAR_9] != '-' || FUNC_11(VAR_8[VAR_9], "-") == 0) {
   if (VAR_12 == ((void*)0))
    VAR_12 = VAR_8[VAR_9];
   else if (VAR_13 == ((void*)0))
    VAR_13 = VAR_8[VAR_9];
  }
 if (VAR_12 != ((void*)0) && FUNC_11(VAR_12, "-") != 0
 && FUNC_7(VAR_12, "rb", VAR_5) == ((void*)0)) {
  FUNC_6(VAR_4, "%s: can't read `%s'\n", VAR_8[0], VAR_12);
  FUNC_5(VAR_0);
 }
 if (VAR_12 == ((void*)0) || FUNC_11(VAR_12, "-") == 0)
  VAR_12 = "Standard Input";




 if (VAR_13 != ((void*)0) && FUNC_11(VAR_13, "-") != 0
 && FUNC_7(VAR_13, "w", VAR_6) == ((void*)0)) {
  FUNC_6(VAR_4, "%s: can't write `%s'\n", VAR_8[0], VAR_13);
  FUNC_5(VAR_0);
 }
 VAR_10 = FUNC_10(VAR_5);
 FUNC_2(VAR_10/100 == (int)VAR_11);
 VAR_14 = FUNC_9(VAR_5);
 FUNC_8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 3.2 Final//EN\"\n");
 FUNC_8("<html><head><title>%s</title>\n"
 "<link rev=made href=\"mailto:drh@microsoft.com\">\n"
 "</head><body>\n<h1>%s</h1>\n", VAR_12, VAR_12);
 FUNC_8("<p>version = %d.%d</p>", VAR_10/100, VAR_10%100);
 FUNC_4(VAR_14);
 {
  time_t VAR_15;
  FUNC_14(&VAR_15);
  FUNC_8("<hr><address>%s</address>\n", FUNC_3(&VAR_15));
 }
 FUNC_8("</body></html>\n");
 return VAR_1;
}
