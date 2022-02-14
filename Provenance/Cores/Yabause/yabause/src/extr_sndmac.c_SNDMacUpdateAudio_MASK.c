
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(u32 *VAR_4, u32 *VAR_5, u32 VAR_6) {
    u32 VAR_7=0, VAR_8=0;

    FUNC_1(&VAR_2);

    if((VAR_0 - VAR_3) < (VAR_6 << 2)) {
        VAR_7 = (VAR_0 - VAR_3);
        VAR_8 = (VAR_6 << 2) - VAR_7;
    }
    else {
        VAR_7 = (VAR_6 << 2);
        VAR_8 = 0;
    }

    FUNC_0((s32 *)VAR_4, (s32 *)VAR_5,
                       (s16 *)(((u8 *)VAR_1) + VAR_3),
                       VAR_7 >> 2);

    if(VAR_8) {
        FUNC_0((s32 *)VAR_4 + (VAR_7 >> 2),
                           (s32 *)VAR_5 + (VAR_7 >> 2),
                           (s16 *)VAR_1, VAR_8 >> 2);
    }

    VAR_3 += VAR_7 + VAR_8;
    VAR_3 %= (VAR_0);

    FUNC_2(&VAR_2);
}
