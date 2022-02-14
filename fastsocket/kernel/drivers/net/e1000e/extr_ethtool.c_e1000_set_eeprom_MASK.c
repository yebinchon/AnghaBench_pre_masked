
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {int word_size; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ nvm; } ;
struct e1000_adapter {int flags; TYPE_1__* pdev; struct e1000_hw hw; } ;
struct TYPE_4__ {int vendor; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct e1000_hw*,int,int,int*) ;
 int FUNC_2 (struct e1000_hw*,int,int,int*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (void*,int *,int ) ;
 struct e1000_adapter* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_10,
       struct ethtool_eeprom *VAR_11, u8 *VAR_12)
{
 struct e1000_adapter *VAR_13 = FUNC_8(VAR_10);
 struct e1000_hw *VAR_14 = &VAR_13->hw;
 u16 *VAR_15;
 void *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 u16 VAR_21;

 if (VAR_11->len == 0)
  return -VAR_3;

 if (VAR_11->magic !=
     (VAR_13->pdev->vendor | (VAR_13->pdev->device << 16)))
  return -VAR_0;

 if (VAR_13->flags & VAR_4)
  return -VAR_1;

 VAR_17 = VAR_14->nvm.word_size * 2;

 VAR_18 = VAR_11->offset >> 1;
 VAR_19 = (VAR_11->offset + VAR_11->len - 1) >> 1;
 VAR_15 = FUNC_5(VAR_17, VAR_5);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = (void *)VAR_15;

 if (VAR_11->offset & 1) {


  VAR_20 = FUNC_1(VAR_14, VAR_18, 1, &VAR_15[0]);
  VAR_16++;
 }
 if (((VAR_11->offset + VAR_11->len) & 1) && (!VAR_20))


  VAR_20 = FUNC_1(VAR_14, VAR_19, 1,
      &VAR_15[VAR_19 - VAR_18]);

 if (VAR_20)
  goto out;


 for (VAR_21 = 0; VAR_21 < VAR_19 - VAR_18 + 1; VAR_21++)
  FUNC_6(&VAR_15[VAR_21]);

 FUNC_7(VAR_16, VAR_12, VAR_11->len);

 for (VAR_21 = 0; VAR_21 < VAR_19 - VAR_18 + 1; VAR_21++)
  FUNC_0(&VAR_15[VAR_21]);

 VAR_20 = FUNC_2(VAR_14, VAR_18,
      VAR_19 - VAR_18 + 1, VAR_15);

 if (VAR_20)
  goto out;




 if ((VAR_18 <= VAR_6) ||
     (VAR_14->mac.type == VAR_9) ||
     (VAR_14->mac.type == VAR_8) ||
     (VAR_14->mac.type == VAR_7))
  VAR_20 = FUNC_3(VAR_14);

out:
 FUNC_4(VAR_15);
 return VAR_20;
}
