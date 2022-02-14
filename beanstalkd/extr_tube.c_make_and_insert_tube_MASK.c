
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tube ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static Tube *
FUNC_3(const char *VAR_1)
{
    int VAR_2;
    Tube *VAR_3 = ((void*)0);

    VAR_3 = FUNC_0(VAR_1);
    if (!VAR_3)
        return ((void*)0);



    VAR_2 = FUNC_1(&VAR_0, VAR_3);
    if (!VAR_2)
        return FUNC_2(VAR_3), (Tube *) 0;

    return VAR_3;
}
