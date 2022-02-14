
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct dscc4_dev_priv {int dev_id; TYPE_1__* pci_priv; } ;
struct TYPE_2__ {int xtal_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct dscc4_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,struct dscc4_dev_priv*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct dscc4_dev_priv *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = -1;
 u32 VAR_8;

 *VAR_5 &= ~VAR_2;
 if (*VAR_4) {
  u32 VAR_9 = 0, VAR_10 = 0, VAR_11;
  int VAR_12;

  VAR_12 = VAR_6->pci_priv->xtal_hz;
  if (!VAR_12)
   goto done;
  if (FUNC_0(VAR_6->dev_id) < 0)
   goto done;
  VAR_11 = VAR_12 / *VAR_4;
  if (VAR_11 > VAR_1) {
   VAR_11 >>= 4;
   *VAR_5 |= 0x00000036;
  } else
   *VAR_5 |= 0x00000037;
  if (VAR_11 >> 22) {
   VAR_9 = 63;
   VAR_10 = 15;
  } else if (VAR_11) {

   VAR_10 = 0;
   while (0xffffffc0 & VAR_11) {
    VAR_10++;
    VAR_11 >>= 1;
   }
   VAR_9 = VAR_11;
  }
  VAR_8 = (VAR_10 << 8) | VAR_9;
  VAR_11 = VAR_9 << VAR_10;
  if (!(*VAR_5 & 0x00000001))
   VAR_11 <<= 4;
  *VAR_4 = VAR_12 / VAR_11;
 } else {





  VAR_8 = 0;
 }
 FUNC_2(VAR_8, VAR_6, VAR_3, VAR_0);
 VAR_7 = 0;
done:
 return VAR_7;
}
