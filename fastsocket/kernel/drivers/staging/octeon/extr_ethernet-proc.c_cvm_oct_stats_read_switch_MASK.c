
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ (* mdio_read ) (struct net_device*,int,int) ;int (* mdio_write ) (struct net_device*,int,int,int) ;} ;
struct octeon_ethernet {TYPE_1__ mii_info; } ;
struct net_device {int dummy; } ;


 struct octeon_ethernet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int,int) ;
 scalar_t__ FUNC_2 (struct net_device*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*,int,int) ;

__attribute__((used)) static unsigned long long FUNC_4(struct net_device *VAR_0,
          int VAR_1, int VAR_2)
{
 struct octeon_ethernet *VAR_3 = FUNC_0(VAR_0);

 VAR_3->mii_info.mdio_write(VAR_0, VAR_1, 0x1d, 0xcc00 | VAR_2);
 return ((uint64_t) VAR_3->mii_info.
  mdio_read(VAR_0, VAR_1,
     0x1e) << 16) | (uint64_t) VAR_3->mii_info.
     mdio_read(VAR_0, VAR_1, 0x1f);
}
