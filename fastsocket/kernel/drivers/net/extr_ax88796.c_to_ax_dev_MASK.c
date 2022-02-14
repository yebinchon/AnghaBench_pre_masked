
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int dummy; } ;
struct ax_device {int dummy; } ;


 struct ei_device* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct ax_device *FUNC_1(struct net_device *VAR_0)
{
 struct ei_device *VAR_1 = FUNC_0(VAR_0);
 return (struct ax_device *)(VAR_1+1);
}
