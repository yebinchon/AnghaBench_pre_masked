
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct net_buf_simple {int * data; } ;


 int FUNC_0 (struct net_buf_simple*,int) ;

u8_t FUNC_1(struct net_buf_simple *VAR_0)
{
    u8_t VAR_1;

    VAR_1 = VAR_0->data[0];
    FUNC_0(VAR_0, 1);

    return VAR_1;
}
