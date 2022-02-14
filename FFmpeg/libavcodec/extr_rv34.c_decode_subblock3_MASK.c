
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int VLC ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int,int,int *,int *,int) ;
 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(int16_t *VAR_1, int VAR_2, GetBitContext *VAR_3, VLC *VAR_4,
                                    int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = VAR_0[VAR_2];

    FUNC_0(VAR_1+0*4+0, (VAR_8 >> 6) , 3, VAR_3, VAR_4, VAR_5);
    FUNC_0(VAR_1+0*4+1, (VAR_8 >> 4) & 3, 2, VAR_3, VAR_4, VAR_6);
    FUNC_0(VAR_1+1*4+0, (VAR_8 >> 2) & 3, 2, VAR_3, VAR_4, VAR_6);
    FUNC_0(VAR_1+1*4+1, (VAR_8 >> 0) & 3, 2, VAR_3, VAR_4, VAR_7);
}
