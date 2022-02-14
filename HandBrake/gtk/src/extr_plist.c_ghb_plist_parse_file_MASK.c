
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gssize ;
typedef scalar_t__ gchar ;
typedef int GhbValue ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (scalar_t__*,int,size_t,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__ const*,char*) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (size_t) ;
 int FUNC_7 (char*,scalar_t__ const*) ;
 int * FUNC_8 (scalar_t__*,int ) ;

GhbValue*
FUNC_9(const gchar *VAR_2)
{
    gchar *VAR_3;
    size_t VAR_4;
    GhbValue *VAR_5;
    FILE *VAR_6;

    VAR_6 = FUNC_4(VAR_2, "r");
    if (VAR_6 == ((void*)0))
    {
        FUNC_7("Plist parse: failed to open %s", VAR_2);
        return ((void*)0);
    }
    FUNC_2(VAR_6, 0, VAR_0);
    VAR_4 = FUNC_3(VAR_6);
    FUNC_2(VAR_6, 0, VAR_1);
    VAR_3 = FUNC_6(VAR_4+1);
    VAR_4 = FUNC_1(VAR_3, 1, VAR_4, VAR_6);
    VAR_3[VAR_4] = 0;
    VAR_5 = FUNC_8(VAR_3, (gssize)VAR_4);
    FUNC_5(VAR_3);
    FUNC_0(VAR_6);
    return VAR_5;
}
