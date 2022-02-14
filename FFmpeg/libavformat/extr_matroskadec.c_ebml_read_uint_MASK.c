
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVIOContext *VAR_1, int VAR_2, uint64_t *VAR_3)
{
    int VAR_4 = 0;


    *VAR_3 = 0;
    while (VAR_4++ < VAR_2)
        *VAR_3 = (*VAR_3 << 8) | FUNC_0(VAR_1);

    return VAR_0;
}
