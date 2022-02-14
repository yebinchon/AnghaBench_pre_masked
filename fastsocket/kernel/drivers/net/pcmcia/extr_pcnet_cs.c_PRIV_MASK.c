
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int dummy; } ;
typedef int pcnet_dev_t ;


 char* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline pcnet_dev_t *FUNC_1(struct net_device *VAR_0)
{
 char *VAR_1 = FUNC_0(VAR_0);
 return (pcnet_dev_t *)(VAR_1 + sizeof(struct ei_device));
}
