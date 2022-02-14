
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VLC_TYPE ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_0, int VAR_1, int *VAR_2, int *VAR_3,
                          VLC_TYPE (*VAR_4)[2])
{
    unsigned VAR_5;

    *VAR_3 = -*VAR_2;
    VAR_5 = FUNC_0(VAR_0, *VAR_3) + VAR_1;
    *VAR_2 = VAR_4[VAR_5][1];

    return VAR_4[VAR_5][0];
}
