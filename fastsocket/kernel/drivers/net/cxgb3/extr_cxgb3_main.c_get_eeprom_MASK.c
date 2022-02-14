
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
struct adapter {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct ethtool_eeprom *VAR_5,
        u8 * VAR_6)
{
 struct port_info *VAR_7 = FUNC_3(VAR_4);
 struct adapter *VAR_8 = VAR_7->adapter;
 int VAR_9, VAR_10 = 0;

 u8 *VAR_11 = FUNC_1(VAR_0, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_5->magic = VAR_1;
 for (VAR_9 = VAR_5->offset & ~3; !VAR_10 && VAR_9 < VAR_5->offset + VAR_5->len; VAR_9 += 4)
  VAR_10 = FUNC_4(VAR_8, VAR_9, (__le32 *) & VAR_11[VAR_9]);

 if (!VAR_10)
  FUNC_2(VAR_6, VAR_11 + VAR_5->offset, VAR_5->len);
 FUNC_0(VAR_11);
 return VAR_10;
}
