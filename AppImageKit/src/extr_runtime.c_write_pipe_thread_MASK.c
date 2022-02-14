
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void *
FUNC_3 (void *VAR_3)
{
    char VAR_4[32];
    int VAR_5;

    FUNC_1 (VAR_4, 'x', sizeof (VAR_4));
    while (1) {

        VAR_5 = FUNC_2 (VAR_2[1], VAR_4, sizeof (VAR_4));
        if (VAR_5 == -1) {
            FUNC_0 (VAR_1, VAR_0);
            break;
        }
    }
    return ((void*)0);
}
