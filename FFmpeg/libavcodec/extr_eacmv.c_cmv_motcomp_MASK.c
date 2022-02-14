
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, ptrdiff_t VAR_1,
                        const unsigned char *VAR_2, ptrdiff_t VAR_3,
                        int VAR_4, int VAR_5,
                        int VAR_6, int VAR_7,
                        int VAR_8, int VAR_9){
    int VAR_10,VAR_11;

    for(VAR_11=VAR_5;VAR_11<VAR_5+4;VAR_11++)
    for(VAR_10=VAR_4;VAR_10<VAR_4+4;VAR_10++)
    {
        if (VAR_10+VAR_6>=0 && VAR_10+VAR_6<VAR_8 &&
            VAR_11+VAR_7>=0 && VAR_11+VAR_7<VAR_9) {
            VAR_0[VAR_11*VAR_1 + VAR_10] = VAR_2[(VAR_11+VAR_7)*VAR_3 + VAR_10+VAR_6];
        }else{
            VAR_0[VAR_11*VAR_1 + VAR_10] = 0;
        }
    }
}
