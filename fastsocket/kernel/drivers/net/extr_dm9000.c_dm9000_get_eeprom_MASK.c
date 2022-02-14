
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int *) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
        struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 board_info_t *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = VAR_5->offset;
 int VAR_9 = VAR_5->len;
 int VAR_10;



 if ((VAR_9 & 1) != 0 || (VAR_8 & 1) != 0)
  return -VAR_2;

 if (VAR_7->flags & VAR_0)
  return -VAR_3;

 VAR_5->magic = VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += 2)
  FUNC_0(VAR_7, (VAR_8 + VAR_10) / 2, VAR_6 + VAR_10);

 return 0;
}
