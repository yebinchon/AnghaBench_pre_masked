
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_3 = VAR_1;
    VAR_4 = VAR_1;
    for (VAR_2=0; VAR_2<10; VAR_2+=2){
        VAR_4 = (int)(((int64_t)VAR_4 * VAR_1 + 0x40000000) >> 31);
        VAR_5 = (int)(((int64_t)VAR_4 * VAR_0[VAR_2] + 0x40000000) >> 31);
        VAR_3 -= VAR_5;

        VAR_4 = (int)(((int64_t)VAR_4 * VAR_1 + 0x40000000) >> 31);
        VAR_5 = (int)(((int64_t)VAR_4 * VAR_0[VAR_2+1] + 0x40000000) >> 31);
        VAR_3 += VAR_5;
    }

    return VAR_3;
}
