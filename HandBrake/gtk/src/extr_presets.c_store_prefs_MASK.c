
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GSourceFunc ;
typedef int GSource ;
typedef int GMainContext ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
    if (VAR_1 != 0)
    {
        GMainContext *VAR_2;
        GSource *VAR_3;

        VAR_2 = FUNC_0();
        VAR_3 = FUNC_1(VAR_2, VAR_1);
        if (VAR_3 != ((void*)0))
            FUNC_2(VAR_3);
    }
    VAR_1 = FUNC_3(1, (GSourceFunc)VAR_0, ((void*)0));
}
