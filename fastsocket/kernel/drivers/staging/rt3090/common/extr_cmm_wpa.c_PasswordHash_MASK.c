
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PUCHAR ;
typedef int PSTRING ;
typedef int INT ;


 int FUNC_0 (int ,int *,int,int,int,int *) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;

int FUNC_2(PSTRING VAR_1, PUCHAR VAR_2, INT VAR_3, PUCHAR VAR_4)
{
    if ((FUNC_1(VAR_1) > 63) || (VAR_3 > 32))
        return 0;

    FUNC_0(VAR_1, VAR_2, VAR_3, 4096, 1, VAR_4);
    FUNC_0(VAR_1, VAR_2, VAR_3, 4096, 2, &VAR_4[VAR_0]);
    return 1;
}
