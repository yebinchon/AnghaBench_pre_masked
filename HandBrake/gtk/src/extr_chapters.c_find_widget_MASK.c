
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_4__ {struct TYPE_4__* next; int data; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GList ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;

__attribute__((used)) static GtkWidget *FUNC_7(GtkWidget *VAR_0, gchar *VAR_1)
{
    const char *VAR_2;
    GtkWidget *VAR_3 = ((void*)0);

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_2 = FUNC_5(VAR_0);
    if (VAR_2 != ((void*)0) && !FUNC_6(VAR_2, VAR_1, 80))
    {
        return VAR_0;
    }
    if (FUNC_1(VAR_0))
    {
        GList *VAR_4, *VAR_5;
        VAR_5 = VAR_4 = FUNC_4(FUNC_0(VAR_0));
        while (VAR_5)
        {
            VAR_3 = FUNC_7(FUNC_2(VAR_5->data), VAR_1);
            if (VAR_3 != ((void*)0))
                break;
            VAR_5 = VAR_5->next;
        }
        FUNC_3(VAR_4);
    }
    return VAR_3;
}
