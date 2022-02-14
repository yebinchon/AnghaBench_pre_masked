
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int64_t FUNC_1(GetByteContext *VAR_0)
{
    uint64_t VAR_1 = 0;
    int VAR_2 = 0;
    int VAR_3;

    do {
        VAR_3 = FUNC_0(VAR_0);
        VAR_1 |= (VAR_3 & 127) << VAR_2;
        VAR_2 += 7;
    } while (VAR_3 & 128);

    return VAR_1;
}
