
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* raw_pwds; } ;
typedef TYPE_1__ network_backends_t ;
typedef scalar_t__ guint ;
typedef char gchar ;
typedef int gboolean ;
struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_2__ GPtrArray ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*,scalar_t__) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static gboolean FUNC_4(network_backends_t *VAR_2, gchar *VAR_3) {
 GPtrArray *VAR_4 = VAR_2->raw_pwds;

 guint VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4->len; ++VAR_5) {
  gchar *VAR_6 = FUNC_1(VAR_4, VAR_5);
  gchar *VAR_7 = FUNC_2(VAR_6, ':');
  FUNC_0(VAR_7);
  *VAR_7 = '\0';
  if (FUNC_3(VAR_3, VAR_6) == 0) {
   *VAR_7 = ':';
   return VAR_1;
  }
  *VAR_7 = ':';
 }

 return VAR_0;
}
