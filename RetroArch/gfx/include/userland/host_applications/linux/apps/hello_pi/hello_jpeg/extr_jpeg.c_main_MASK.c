
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPENMAX_JPEG_DECODER ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,size_t,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,long,int ) ;
 size_t FUNC_9 (int *) ;
 char* FUNC_10 (size_t) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int **) ;

int
FUNC_13(int VAR_2, char *VAR_3[])
{
    OPENMAX_JPEG_DECODER *VAR_4;
    char *VAR_5;
    size_t VAR_6;
    int VAR_7;
    if (VAR_2 < 2) {
 FUNC_11("Usage: %s <filename>\n", VAR_3[0]);
 return -1;
    }
    FILE *VAR_8 = FUNC_5(VAR_3[1], "rb");
    if (!VAR_8) {
 FUNC_11("File %s not found.\n", VAR_3[1]);
    }
    FUNC_8(VAR_8, 0L, VAR_0);
    VAR_6 = FUNC_9(VAR_8);
    FUNC_8(VAR_8, 0L, VAR_1);
    VAR_5 = FUNC_10(VAR_6);
    FUNC_0(VAR_5 != ((void*)0));
    VAR_7 = FUNC_6(VAR_5, 1, VAR_6, VAR_8);
    FUNC_0(VAR_7 == VAR_6);
    FUNC_4(VAR_8);
    FUNC_1();
    VAR_7 = FUNC_12(&VAR_4);
    FUNC_0(VAR_7 == 0);
    VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6);
    FUNC_0(VAR_7 == 0);
    FUNC_2(VAR_4);
    FUNC_7(VAR_5);
    return 0;
}
