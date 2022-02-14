
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*,int,size_t,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 size_t FUNC_5 (int *) ;

unsigned char *FUNC_6(char *VAR_2)
{
    FILE *VAR_3 = FUNC_2(VAR_2, "rb");
    size_t VAR_4;

    FUNC_4(VAR_3, 0, VAR_0);
    VAR_4 = FUNC_5(VAR_3);
    FUNC_4(VAR_3, 0, VAR_1);

    unsigned char *VAR_5 = FUNC_0(VAR_4+1, sizeof(char));
    FUNC_3(VAR_5, 1, VAR_4, VAR_3);
    FUNC_1(VAR_3);
    return VAR_5;
}
