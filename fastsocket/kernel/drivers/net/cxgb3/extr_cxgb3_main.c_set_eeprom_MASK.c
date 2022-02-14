
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ magic; int offset; int len; } ;
struct adapter {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,int,int *) ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, struct ethtool_eeprom *VAR_5,
        u8 * VAR_6)
{
 struct port_info *VAR_7 = FUNC_3(VAR_4);
 struct adapter *VAR_8 = VAR_7->adapter;
 u32 VAR_9, VAR_10;
 __le32 *VAR_11;
 u8 *VAR_12;
 int VAR_13;

 if (VAR_5->magic != VAR_0)
  return -VAR_1;

 VAR_9 = VAR_5->offset & ~3;
 VAR_10 = (VAR_5->len + (VAR_5->offset & 3) + 3) & ~3;

 if (VAR_9 != VAR_5->offset || VAR_10 != VAR_5->len) {
  VAR_12 = FUNC_1(VAR_10, VAR_3);
  if (!VAR_12)
   return -VAR_2;
  VAR_13 = FUNC_4(VAR_8, VAR_9, (__le32 *) VAR_12);
  if (!VAR_13 && VAR_10 > 4)
   VAR_13 = FUNC_4(VAR_8,
           VAR_9 + VAR_10 - 4,
           (__le32 *) & VAR_12[VAR_10 - 4]);
  if (VAR_13)
   goto out;
  FUNC_2(VAR_12 + (VAR_5->offset & 3), VAR_6, VAR_5->len);
 } else
  VAR_12 = VAR_6;

 VAR_13 = FUNC_5(VAR_8, 0);
 if (VAR_13)
  goto out;

 for (VAR_11 = (__le32 *) VAR_12; !VAR_13 && VAR_10; VAR_10 -= 4, VAR_11++) {
  VAR_13 = FUNC_6(VAR_8, VAR_9, *VAR_11);
  VAR_9 += 4;
 }

 if (!VAR_13)
  VAR_13 = FUNC_5(VAR_8, 1);
out:
 if (VAR_12 != VAR_6)
  FUNC_0(VAR_12);
 return VAR_13;
}
