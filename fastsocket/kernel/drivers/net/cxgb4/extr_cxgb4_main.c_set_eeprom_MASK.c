
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ magic; int offset; int len; } ;
struct adapter {int fn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,int,int*) ;
 int FUNC_1 (struct adapter*,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 struct adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6, struct ethtool_eeprom *VAR_7,
        u8 *VAR_8)
{
 u8 *VAR_9;
 int VAR_10 = 0;
 u32 VAR_11, VAR_12, *VAR_13;
 struct adapter *VAR_14 = FUNC_5(VAR_6);

 if (VAR_7->magic != VAR_1)
  return -VAR_2;

 VAR_11 = VAR_7->offset & ~3;
 VAR_12 = (VAR_7->len + (VAR_7->offset & 3) + 3) & ~3;

 if (VAR_14->fn > 0) {
  u32 VAR_15 = 1024 + VAR_14->fn * VAR_0;

  if (VAR_11 < VAR_15 ||
      VAR_11 + VAR_12 > VAR_15 + VAR_0)
   return -VAR_4;
 }

 if (VAR_11 != VAR_7->offset || VAR_12 != VAR_7->len) {



  VAR_9 = FUNC_3(VAR_12, VAR_5);
  if (!VAR_9)
   return -VAR_3;
  VAR_10 = FUNC_0(VAR_14, VAR_11, (u32 *)VAR_9);
  if (!VAR_10 && VAR_12 > 4)
   VAR_10 = FUNC_0(VAR_14,
          VAR_11 + VAR_12 - 4,
          (u32 *)&VAR_9[VAR_12 - 4]);
  if (VAR_10)
   goto out;
  FUNC_4(VAR_9 + (VAR_7->offset & 3), VAR_8, VAR_7->len);
 } else
  VAR_9 = VAR_8;

 VAR_10 = FUNC_6(VAR_14, 0);
 if (VAR_10)
  goto out;

 for (VAR_13 = (u32 *)VAR_9; !VAR_10 && VAR_12; VAR_12 -= 4, VAR_13++) {
  VAR_10 = FUNC_1(VAR_14, VAR_11, *VAR_13);
  VAR_11 += 4;
 }

 if (!VAR_10)
  VAR_10 = FUNC_6(VAR_14, 1);
out:
 if (VAR_9 != VAR_8)
  FUNC_2(VAR_9);
 return VAR_10;
}
