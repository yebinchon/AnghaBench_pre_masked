
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct net_buf_simple {int dummy; } ;


 int FUNC_0 (char*,struct net_buf_simple*,int ) ;
 int * FUNC_1 (struct net_buf_simple*,int) ;

u8_t *FUNC_2(struct net_buf_simple *VAR_0, u8_t VAR_1)
{
    u8_t *VAR_2;

    FUNC_0("buf %p val 0x%02x", VAR_0, VAR_1);

    VAR_2 = FUNC_1(VAR_0, 1);
    *VAR_2 = VAR_1;

    return VAR_2;
}
