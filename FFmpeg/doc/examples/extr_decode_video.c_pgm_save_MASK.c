
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int,int,int) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;

__attribute__((used)) static void FUNC_4(unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                     char *VAR_4)
{
    FILE *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1(VAR_4,"w");
    FUNC_2(VAR_5, "P5\n%d %d\n%d\n", VAR_2, VAR_3, 255);
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        FUNC_3(VAR_0 + VAR_6 * VAR_1, 1, VAR_2, VAR_5);
    FUNC_0(VAR_5);
}
