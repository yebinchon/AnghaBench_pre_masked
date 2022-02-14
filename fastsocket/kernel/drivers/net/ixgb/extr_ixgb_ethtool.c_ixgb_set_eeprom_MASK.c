
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ixgb_hw {int vendor_id; int device_id; } ;
struct ixgb_adapter {struct ixgb_hw hw; } ;
struct ethtool_eeprom {int len; int magic; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ixgb_hw*,int) ;
 int FUNC_2 (struct ixgb_hw*) ;
 int FUNC_3 (struct ixgb_hw*,int,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (void*,int *,int) ;
 struct ixgb_adapter* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_5,
    struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 struct ixgb_adapter *VAR_8 = FUNC_7(VAR_5);
 struct ixgb_hw *VAR_9 = &VAR_8->hw;
 u16 *VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 u16 VAR_15;

 if (VAR_6->len == 0)
  return -VAR_2;

 if (VAR_6->magic != (VAR_9->vendor_id | (VAR_9->device_id << 16)))
  return -VAR_1;

 VAR_12 = FUNC_0(VAR_5);

 if (VAR_6->offset > VAR_6->offset + VAR_6->len)
  return -VAR_2;

 if ((VAR_6->offset + VAR_6->len) > VAR_12)
  VAR_6->len = (VAR_12 - VAR_6->offset);

 VAR_13 = VAR_6->offset >> 1;
 VAR_14 = (VAR_6->offset + VAR_6->len - 1) >> 1;
 VAR_10 = FUNC_5(VAR_12, VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_11 = (void *)VAR_10;

 if (VAR_6->offset & 1) {


  VAR_10[0] = FUNC_1(VAR_9, VAR_13);
  VAR_11++;
 }
 if ((VAR_6->offset + VAR_6->len) & 1) {


  VAR_10[VAR_14 - VAR_13]
   = FUNC_1(VAR_9, VAR_14);
 }

 FUNC_6(VAR_11, VAR_7, VAR_6->len);
 for (VAR_15 = 0; VAR_15 <= (VAR_14 - VAR_13); VAR_15++)
  FUNC_3(VAR_9, VAR_13 + VAR_15, VAR_10[VAR_15]);


 if (VAR_13 <= VAR_0)
  FUNC_2(VAR_9);

 FUNC_4(VAR_10);
 return 0;
}
