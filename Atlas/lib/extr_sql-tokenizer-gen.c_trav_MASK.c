
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* gpointer ;
typedef int gint ;
typedef scalar_t__ gboolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,...) ;

gboolean FUNC_2(gpointer VAR_1, gpointer VAR_2, gpointer VAR_3) {
 gboolean *VAR_4 = VAR_3;
 const char *VAR_5 = VAR_1;
 gint VAR_6 = FUNC_0(VAR_2);

 if (!*VAR_4) {
  FUNC_1(",");
 }
 FUNC_1("\n\t%d /* %s */", VAR_6, VAR_5);

 *VAR_4 = VAR_0;
 return VAR_0;
}
