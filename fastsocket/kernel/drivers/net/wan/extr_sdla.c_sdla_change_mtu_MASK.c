
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct frad_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct frad_local* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct frad_local *VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_2))
  return(-VAR_0);


 return(-VAR_1);
}
