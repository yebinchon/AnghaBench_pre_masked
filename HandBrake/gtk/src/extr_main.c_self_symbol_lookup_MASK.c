
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gpointer ;
typedef int gchar ;
typedef int GModule ;
typedef int GCallback ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int const*,int **) ;

__attribute__((used)) static GCallback
FUNC_2(const gchar * VAR_0)
{
    static GModule *VAR_1 = ((void*)0);
    gpointer VAR_2 = ((void*)0);

    if (!VAR_1)
        VAR_1 = FUNC_0(((void*)0), 0);

    FUNC_1(VAR_1, VAR_0, &VAR_2);
    return (GCallback) VAR_2;
}
