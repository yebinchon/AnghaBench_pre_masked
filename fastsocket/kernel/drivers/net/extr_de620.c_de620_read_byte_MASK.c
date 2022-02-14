
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int byte ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline byte
FUNC_2(struct net_device *VAR_0)
{
 byte VAR_1;


 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 VAR_1 |= FUNC_1(VAR_0) >> 4;
 return VAR_1;
}
