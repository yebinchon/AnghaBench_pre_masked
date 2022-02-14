
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(gzFile *VAR_1)
{

    int VAR_2 = 0, VAR_3 = 0;
    unsigned char VAR_4[(0x10000)];
    FUNC_2(VAR_1);
    do {
        VAR_2 = FUNC_1(VAR_1, VAR_4, (0x10000));
        if(VAR_2 <= 0) break;
        VAR_3 += VAR_2;
    } while (!FUNC_0(VAR_1));
    FUNC_2(VAR_1);
    return (VAR_3);

}
