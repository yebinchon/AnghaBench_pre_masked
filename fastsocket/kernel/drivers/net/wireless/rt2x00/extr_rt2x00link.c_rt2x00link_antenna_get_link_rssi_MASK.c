
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rx_success; } ;
struct TYPE_6__ {int avg; } ;
struct link_ant {TYPE_3__ rssi_ant; } ;
struct TYPE_5__ {TYPE_1__ qual; struct link_ant ant; } ;
struct rt2x00_dev {TYPE_2__ link; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rt2x00_dev *VAR_1)
{
 struct link_ant *VAR_2 = &VAR_1->link.ant;

 if (VAR_2->rssi_ant.avg && VAR_1->link.qual.rx_success)
  return VAR_2->rssi_ant.avg;
 return VAR_0;
}
