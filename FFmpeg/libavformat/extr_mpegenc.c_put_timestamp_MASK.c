
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int timestamp ;
typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(AVIOContext *VAR_0, int VAR_1, int64_t VAR_2)
{
    FUNC_0(VAR_0, (VAR_1 << 4) | (((VAR_2 >> 30) & 0x07) << 1) | 1);
    FUNC_1(VAR_0, (uint16_t)((((VAR_2 >> 15) & 0x7fff) << 1) | 1));
    FUNC_1(VAR_0, (uint16_t)((((VAR_2) & 0x7fff) << 1) | 1));
}
