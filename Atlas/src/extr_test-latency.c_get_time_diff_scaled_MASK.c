
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_4__ {int * str; } ;
typedef int GTimeVal ;
typedef TYPE_1__ GString ;


 double FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,char*,double) ;

gchar * FUNC_2(GTimeVal *VAR_0, GTimeVal *VAR_1, GString *VAR_2) {
 double VAR_3;
 double VAR_4;
 char *VAR_5 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 VAR_4 = VAR_3 / 1000.0;
 VAR_5 = "%0.3f";

 FUNC_1(VAR_2, VAR_5, VAR_4);

 return VAR_2->str;
}
