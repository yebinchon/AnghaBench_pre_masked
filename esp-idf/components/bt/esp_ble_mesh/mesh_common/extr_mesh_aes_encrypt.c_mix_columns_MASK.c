
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(uint8_t *VAR_2)
{
    uint8_t VAR_3[VAR_0 * VAR_1];

    FUNC_1(VAR_3, VAR_2);
    FUNC_1(&VAR_3[VAR_0], VAR_2 + VAR_0);
    FUNC_1(&VAR_3[2 * VAR_0], VAR_2 + (2 * VAR_0));
    FUNC_1(&VAR_3[3 * VAR_0], VAR_2 + (3 * VAR_0));
    (void) FUNC_0(VAR_2, sizeof(VAR_3), VAR_3, sizeof(VAR_3));
}
