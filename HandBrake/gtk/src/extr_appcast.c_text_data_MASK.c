
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int description; int item; int tag_stack; } ;
typedef TYPE_1__ parse_data_t ;
typedef int gsize ;
typedef scalar_t__ gpointer ;
typedef int gint ;
typedef int gchar ;
typedef int GMarkupParseContext ;
typedef int GError ;



 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int const*) ;

__attribute__((used)) static void
FUNC_4(
    GMarkupParseContext *VAR_0,
    const gchar *VAR_1,
    gsize VAR_2,
    gpointer VAR_3,
    GError **VAR_4)
{
    parse_data_t *VAR_5 = (parse_data_t*)VAR_3;
    union
    {
        gint id;
        gpointer pid;
    } VAR_6;

    VAR_6.pid = FUNC_1(VAR_5->tag_stack);
    switch (VAR_6.id)
    {
        case 128:
        {
            if (VAR_5->item)
            {
                FUNC_3(VAR_5->description, VAR_1);
            }
        } break;
        default:
        {
            if (VAR_5->value) FUNC_0(VAR_5->value);
            VAR_5->value = FUNC_2(VAR_1);
        } break;
    }
}
