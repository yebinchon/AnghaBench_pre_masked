
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {int dummy; } ;


 int FUNC_0 (char*,struct net_buf_simple*,size_t) ;
 void* FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (struct net_buf_simple*,size_t) ;

void *FUNC_3(struct net_buf_simple *VAR_0, const void *VAR_1,
                             size_t VAR_2)
{
    FUNC_0("buf %p len %u", VAR_0, VAR_2);

    return FUNC_1(FUNC_2(VAR_0, VAR_2), VAR_1, VAR_2);
}
