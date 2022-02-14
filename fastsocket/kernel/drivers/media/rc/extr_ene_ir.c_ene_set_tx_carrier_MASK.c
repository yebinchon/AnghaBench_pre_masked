
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct ene_device* priv; } ;
struct ene_device {int tx_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ene_device*) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_2, u32 VAR_3)
{
 struct ene_device *VAR_4 = VAR_2->priv;
 u32 VAR_5 = 2000000 / VAR_3;

 FUNC_0("TX: attempt to set tx carrier to %d kHz", VAR_3);

 if (VAR_5 && (VAR_5 > VAR_0 ||
   VAR_5 < VAR_1)) {

  FUNC_0("TX: out of range %d-%d kHz carrier",
   2000 / VAR_1, 2000 / VAR_0);
  return -1;
 }

 VAR_4->tx_period = VAR_5;
 FUNC_1(VAR_4);
 return 0;
}
