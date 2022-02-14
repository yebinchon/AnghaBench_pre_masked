
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int*,int,size_t*,int) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int,int,int) ;
 double FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(int VAR_4)
{
    int *VAR_5 = FUNC_4(((VAR_4+8)/16)*VAR_2*4);
    unsigned int VAR_6, VAR_7;
    double VAR_8, VAR_9, VAR_10 = (double) FUNC_5(2, VAR_4) / VAR_2;
    size_t VAR_11 = 0;

    FUNC_6("\r\nTest bits=%d free mem=%d, written data=%d\n", VAR_4, FUNC_0(), ((VAR_4+8)/16)*VAR_2*4);

    VAR_9 = -(FUNC_5(2, VAR_4)/2 - 1);

    for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        VAR_8 = FUNC_7(VAR_6 * VAR_1 / 180.0);
        if(VAR_8 >= 0)
            VAR_9 += VAR_10;
        else
            VAR_9 -= VAR_10;

        VAR_8 *= (FUNC_5(2, VAR_4)/2 - 1);

        if (VAR_4 == 16) {
            VAR_7 = 0;
            VAR_7 += (short)VAR_9;
            VAR_7 = VAR_7 << 16;
            VAR_7 += (short) VAR_8;
            VAR_5[VAR_6] = VAR_7;
        } else if (VAR_4 == 24) {
            VAR_5[VAR_6*2] = ((int) VAR_9) << 8;
            VAR_5[VAR_6*2 + 1] = ((int) VAR_8) << 8;
        } else {
            VAR_5[VAR_6*2] = ((int) VAR_9);
            VAR_5[VAR_6*2 + 1] = ((int) VAR_8);
        }

    }

    FUNC_2(VAR_0, VAR_3, VAR_4, 2);
    FUNC_3(VAR_0, VAR_5, ((VAR_4+8)/16)*VAR_2*4, &VAR_11, 100);

    FUNC_1(VAR_5);
}
