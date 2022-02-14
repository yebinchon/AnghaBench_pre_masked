
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct s2io_nic {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; scalar_t__ offset; scalar_t__ len; } ;
struct TYPE_2__ {int vendor; int device; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 struct s2io_nic* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct s2io_nic*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
    struct ethtool_eeprom *VAR_4, u8 * VAR_5)
{
 u32 VAR_6, VAR_7;
 u64 VAR_8;
 struct s2io_nic *VAR_9 = FUNC_3(VAR_3);

 VAR_4->magic = VAR_9->pdev->vendor | (VAR_9->pdev->device << 16);

 if ((VAR_4->offset + VAR_4->len) > (VAR_2))
  VAR_4->len = VAR_2 - VAR_4->offset;

 for (VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6 += 4) {
  if (FUNC_4(VAR_9, (VAR_4->offset + VAR_6), &VAR_8)) {
   FUNC_0(VAR_1, "Read of EEPROM failed\n");
   return -VAR_0;
  }
  VAR_7 = FUNC_1(VAR_8);
  FUNC_2((VAR_5 + VAR_6), &VAR_7, 4);
 }
 return 0;
}
