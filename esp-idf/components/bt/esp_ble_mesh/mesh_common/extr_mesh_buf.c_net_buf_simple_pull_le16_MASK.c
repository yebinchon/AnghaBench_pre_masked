
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u16_t ;
struct net_buf_simple {scalar_t__ data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_buf_simple*,int) ;
 int FUNC_2 (int ) ;

u16_t FUNC_3(struct net_buf_simple *VAR_0)
{
    u16_t VAR_1;

    VAR_1 = FUNC_0((u16_t *)VAR_0->data);
    FUNC_1(VAR_0, sizeof(VAR_1));

    return FUNC_2(VAR_1);
}
