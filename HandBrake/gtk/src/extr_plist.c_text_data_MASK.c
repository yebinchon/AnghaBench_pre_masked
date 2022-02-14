
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
typedef TYPE_1__ parse_data_t ;
typedef int gsize ;
typedef scalar_t__ gpointer ;
typedef int gchar ;
typedef int GMarkupParseContext ;
typedef int GError ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static void
FUNC_2(
    GMarkupParseContext *VAR_0,
    const gchar *VAR_1,
    gsize VAR_2,
    gpointer VAR_3,
    GError **VAR_4)
{
    parse_data_t *VAR_5 = (parse_data_t*)VAR_3;
    if (VAR_5->value) FUNC_0(VAR_5->value);
    VAR_5->value = FUNC_1(VAR_1);
}
