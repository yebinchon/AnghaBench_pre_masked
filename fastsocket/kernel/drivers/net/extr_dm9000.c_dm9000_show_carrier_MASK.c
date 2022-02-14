
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_4__ {int dev; struct net_device* ndev; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 unsigned int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(board_info_t *VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 struct net_device *VAR_6 = VAR_3->ndev;
 unsigned VAR_7 = FUNC_1(VAR_3, VAR_0);

 if (VAR_4)
  FUNC_0(VAR_3->dev, "%s: link up, %dMbps, %s-duplex, no LPA\n",
    VAR_6->name, (VAR_5 & VAR_2) ? 10 : 100,
    (VAR_7 & VAR_1) ? "full" : "half");
 else
  FUNC_0(VAR_3->dev, "%s: link down\n", VAR_6->name);
}
