
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {size_t data; size_t len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct net_buf_simple*,size_t) ;
 size_t FUNC_2 (struct net_buf_simple*) ;

void *FUNC_3(struct net_buf_simple *VAR_0, size_t VAR_1)
{
    FUNC_1("buf %p len %u", VAR_0, VAR_1);

    FUNC_0(FUNC_2(VAR_0) >= VAR_1);

    VAR_0->data -= VAR_1;
    VAR_0->len += VAR_1;
    return VAR_0->data;
}
