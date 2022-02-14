
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int _file; } ;
typedef int FILE ;


 int FUNC_0 (int,int) ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_5(void * VAR_1)
{
    int VAR_2[2];
    if (FUNC_4(VAR_2))
       return;




    FUNC_0(VAR_2[1], 2);

    FILE * VAR_3 = FUNC_1(VAR_2[0], "rb");

    char VAR_4[500];
    while(FUNC_2(VAR_4, 500, VAR_3) != ((void*)0))
    {
        FUNC_3(VAR_4);
    }
}
