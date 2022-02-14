
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; void* priv; } ;
typedef int INT ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (int ,char const*) ;

struct net_device *FUNC_4(
 int VAR_2,
 const char *VAR_3,
 void (*VAR_4)(struct net_device *))
{
    struct net_device *VAR_5;
    INT VAR_6;



    VAR_6 = sizeof (*VAR_5) + VAR_2 + 31;

    VAR_5 = (struct net_device *) FUNC_1(VAR_6, VAR_0);
    if (VAR_5 == ((void*)0))
    {
        FUNC_0(VAR_1,
    ("alloc_netdev: Unable to allocate device memory.\n"));
        return ((void*)0);
    }

    FUNC_2(VAR_5, 0, VAR_6);

    if (VAR_2)
        VAR_5->priv = (void *) (((long)(VAR_5 + 1) + 31) & ~31);

    VAR_4(VAR_5);
    FUNC_3(VAR_5->name, VAR_3);

    return VAR_5;
}
