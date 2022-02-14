
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gsize ;
typedef int gpointer ;
typedef int gchar ;
struct TYPE_3__ {char* str; int len; } ;
typedef TYPE_1__ GString ;
typedef int GHashTable ;


 int FUNC_0 (int *,TYPE_1__*) ;

gpointer FUNC_1(GHashTable *VAR_0, const gchar *VAR_1, gsize VAR_2) {
 GString VAR_3;

 VAR_3.str = (char *)VAR_1;
 VAR_3.len = VAR_2;

 return FUNC_0(VAR_0, &VAR_3);
}
