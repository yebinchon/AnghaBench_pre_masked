
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8_t ;
struct net_buf_simple {size_t len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct net_buf_simple*,size_t) ;
 void* FUNC_2 (struct net_buf_simple*) ;
 size_t FUNC_3 (struct net_buf_simple*) ;

void *FUNC_4(struct net_buf_simple *VAR_0, size_t VAR_1)
{
    u8_t *VAR_2 = FUNC_2(VAR_0);

    FUNC_1("buf %p len %u", VAR_0, VAR_1);

    FUNC_0(FUNC_3(VAR_0) >= VAR_1);

    VAR_0->len += VAR_1;
    return VAR_2;
}
