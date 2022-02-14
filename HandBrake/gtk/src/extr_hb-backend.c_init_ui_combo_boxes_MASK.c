
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t gint ;
struct TYPE_2__ {int * name; } ;
typedef int GtkBuilder ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(GtkBuilder *VAR_1)
{
    gint VAR_2;

    for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
    {
        FUNC_0(VAR_1, VAR_0[VAR_2].name);
    }
}
