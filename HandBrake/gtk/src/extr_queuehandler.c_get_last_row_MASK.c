
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkListBoxRow ;
typedef int GtkListBox ;


 int * FUNC_0 (int *,int) ;

__attribute__((used)) static GtkListBoxRow *
FUNC_1(GtkListBox * VAR_0)
{
    int VAR_1;
    GtkListBoxRow * VAR_2;

    VAR_2 = ((void*)0);
    for (VAR_1 = 0; ; VAR_1++)
    {
        GtkListBoxRow * VAR_3;
        VAR_3 = FUNC_0(VAR_0, VAR_1);
        if (VAR_3 == ((void*)0))
            return VAR_2;
        VAR_2 = VAR_3;
    }
    return VAR_2;
}
