
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {size_t len; void* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct net_buf_simple*,size_t) ;

void *FUNC_2(struct net_buf_simple *VAR_0, size_t VAR_1)
{
    void *VAR_2 = VAR_0->data;

    FUNC_1("buf %p len %zu", VAR_0, VAR_1);

    FUNC_0(VAR_0->len >= VAR_1);

    VAR_0->len -= VAR_1;
    VAR_0->data += VAR_1;

    return VAR_2;
}
