
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8_t ;
struct seg_rx {scalar_t__ ttl; unsigned int seg_n; int block; } ;
typedef int s32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static inline s32_t FUNC_4(struct seg_rx *VAR_1)
{
    s32_t VAR_2;
    u8_t VAR_3;

    if (VAR_1->ttl == VAR_0) {
        VAR_3 = FUNC_2();
    } else {
        VAR_3 = VAR_1->ttl;
    }




    VAR_2 = FUNC_0(150 + (VAR_3 * 50U));


    VAR_2 += FUNC_0(((VAR_1->seg_n + 1) - FUNC_3(VAR_1->block)) * 100U);




    return FUNC_1(VAR_2, FUNC_0(400));
}
