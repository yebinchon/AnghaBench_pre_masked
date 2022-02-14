
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RV34VLC ;


 size_t FUNC_0 (int,int ,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 size_t** VAR_2 ;

__attribute__((used)) static inline RV34VLC* FUNC_1(int VAR_3, int VAR_4, int VAR_5)
{
    if(VAR_4 == 2 && VAR_3 < 19) VAR_3 += 10;
    else if(VAR_4 && VAR_3 < 26) VAR_3 += 5;
    return VAR_5 ? &VAR_0[VAR_2[1][FUNC_0(VAR_3, 0, 30)]]
                : &VAR_1[VAR_2[0][FUNC_0(VAR_3, 0, 30)]];
}
