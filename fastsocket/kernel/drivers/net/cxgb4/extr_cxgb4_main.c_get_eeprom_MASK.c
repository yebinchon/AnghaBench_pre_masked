
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 struct adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct ethtool_eeprom *VAR_5,
        u8 *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct adapter *VAR_9 = FUNC_4(VAR_4);

 u8 *VAR_10 = FUNC_2(VAR_0, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_5->magic = VAR_1;
 for (VAR_7 = VAR_5->offset & ~3; !VAR_8 && VAR_7 < VAR_5->offset + VAR_5->len; VAR_7 += 4)
  VAR_8 = FUNC_0(VAR_9, VAR_7, (u32 *)&VAR_10[VAR_7]);

 if (!VAR_8)
  FUNC_3(VAR_6, VAR_10 + VAR_5->offset, VAR_5->len);
 FUNC_1(VAR_10);
 return VAR_8;
}
