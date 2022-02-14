
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf {int ref; int pool; } ;


 int FUNC_0 (struct net_buf*) ;
 int FUNC_1 (char*,struct net_buf*,int ,int ) ;

struct net_buf *FUNC_2(struct net_buf *VAR_0)
{
    FUNC_0(VAR_0);

    FUNC_1("buf %p (old) ref %u pool %p", VAR_0, VAR_0->ref, VAR_0->pool);

    VAR_0->ref++;
    return VAR_0;
}
