
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ethernet {int port; int poll; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct octeon_ethernet* FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__*) ;

int FUNC_5(struct net_device *VAR_5)
{
 int VAR_6;
 struct octeon_ethernet *VAR_7 = FUNC_3(VAR_5);

 if (VAR_4 == 0) {
  VAR_6 = FUNC_4(VAR_1, VAR_3,
    VAR_0, "SPI", &VAR_4);
 }
 VAR_4++;

 if ((VAR_7->port == 0) || (VAR_7->port == 16)) {
  FUNC_2(FUNC_0(VAR_7->port));
  VAR_7->poll = VAR_2;
 }
 FUNC_1(VAR_5);
 return 0;
}
