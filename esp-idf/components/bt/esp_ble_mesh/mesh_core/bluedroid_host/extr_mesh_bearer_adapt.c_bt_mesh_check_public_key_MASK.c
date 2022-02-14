
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int Point ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;

bool FUNC_2(const u8_t VAR_0[64])
{
    struct p256_pub_key {
        u8_t x[32];
        u8_t y[32];
    } VAR_1 = {0};

    FUNC_1(VAR_1.x, VAR_0, 32);
    FUNC_1(VAR_1.y, VAR_0 + 32, 32);

    return FUNC_0((Point *)&VAR_1);
}
