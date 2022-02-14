
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int lock; scalar_t__ rx_csum; scalar_t__ can_csum; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, uint32_t VAR_4)
{
 board_info_t *VAR_5 = FUNC_3(VAR_3);
 unsigned long VAR_6;

 if (VAR_5->can_csum) {
  VAR_5->rx_csum = VAR_4;

  FUNC_1(&VAR_5->lock, VAR_6);
  FUNC_0(VAR_5, VAR_0, VAR_5->rx_csum ? VAR_2 : 0);
  FUNC_2(&VAR_5->lock, VAR_6);

  return 0;
 }

 return -VAR_1;
}
