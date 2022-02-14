
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
struct net_buf_simple {int dummy; } ;


 int FUNC_0 (struct net_buf_simple*,int) ;
 int FUNC_1 (struct net_buf_simple*,int) ;
 int FUNC_2 (struct net_buf_simple*,int) ;
 int FUNC_3 (struct net_buf_simple*,int ) ;

void FUNC_4(struct net_buf_simple *VAR_0, u32_t VAR_1)
{
    FUNC_3(VAR_0, 0);

    if (VAR_1 < 0x100) {

        FUNC_2(VAR_0, VAR_1);
        return;
    }

    if (VAR_1 < 0x10000) {

        FUNC_0(VAR_0, VAR_1);
        return;
    }


    FUNC_2(VAR_0, ((VAR_1 >> 16) & 0xff));
    FUNC_1(VAR_0, VAR_1 & 0xffff);
}
