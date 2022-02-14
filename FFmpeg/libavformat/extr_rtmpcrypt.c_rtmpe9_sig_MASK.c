
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct AVBlowfish {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct AVBlowfish*,int *,int *,int ) ;
 int FUNC_3 (struct AVBlowfish*,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_4(const uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    struct AVBlowfish VAR_4;
    uint32_t VAR_5, VAR_6;

    VAR_5 = FUNC_0(VAR_1);
    VAR_6 = FUNC_0(VAR_1 + 4);

    FUNC_3(&VAR_4, VAR_0[VAR_3], 24);
    FUNC_2(&VAR_4, &VAR_5, &VAR_6, 0);

    FUNC_1(VAR_2, VAR_5);
    FUNC_1(VAR_2 + 4, VAR_6);
}
