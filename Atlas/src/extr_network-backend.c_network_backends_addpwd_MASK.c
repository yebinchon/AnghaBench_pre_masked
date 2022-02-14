
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* pwd_table_index; int ** pwd_table; int raw_pwds; } ;
typedef TYPE_1__ network_backends_t ;
typedef size_t gint ;
typedef int gchar ;
typedef scalar_t__ gboolean ;
typedef int GString ;
typedef int GHashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (size_t*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int *,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (char*,int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int *) ;

int FUNC_14(network_backends_t *VAR_4, gchar *VAR_5, gchar *VAR_6, gboolean VAR_7) {
 GString *VAR_8 = FUNC_10(((void*)0));
 if (VAR_7) {
  gchar *VAR_9 = FUNC_0(VAR_6);
  if (VAR_9 == ((void*)0)) {
   FUNC_11("failed to decrypt %s\n", VAR_6);
   return VAR_0;
  }
  FUNC_12(VAR_8, VAR_9, FUNC_13(VAR_9));
  FUNC_3(VAR_9);
  FUNC_7(VAR_4->raw_pwds, FUNC_9("%s:%s", VAR_5, VAR_6));
 } else {
  gchar *VAR_10 = FUNC_1(VAR_6);
  if (VAR_10 == ((void*)0)) {
   FUNC_11("failed to encrypt %s\n", VAR_6);
   return VAR_1;
  }
  FUNC_7(VAR_4->raw_pwds, FUNC_9("%s:%s", VAR_5, VAR_10));
  FUNC_3(VAR_10);
  FUNC_12(VAR_8, VAR_6, FUNC_13(VAR_6));
 }


 gint VAR_11 = *(VAR_4->pwd_table_index);
 GHashTable *VAR_12 = VAR_4->pwd_table[VAR_11];
 GHashTable *VAR_13 = VAR_4->pwd_table[1-VAR_11];
 FUNC_6(VAR_13);
 FUNC_4(VAR_12, VAR_3, VAR_13);
 FUNC_5(VAR_13, FUNC_8(VAR_5), VAR_8);
 FUNC_2(VAR_4->pwd_table_index, 1-VAR_11);

 return VAR_2;
}
