
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ethernet {int mii_info; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct octeon_ethernet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct octeon_ethernet *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_0);
 VAR_3 = FUNC_1(&VAR_2->mii_info);
 FUNC_3(&VAR_0);

 return VAR_3;
}
