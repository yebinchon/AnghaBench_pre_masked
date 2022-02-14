
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct ene_device* priv; } ;
struct ene_device {int transmitter_mask; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ene_device*) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_0, u32 VAR_1)
{
 struct ene_device *VAR_2 = VAR_0->priv;
 FUNC_0("TX: attempt to set transmitter mask %02x", VAR_1);


 if (!VAR_1 || VAR_1 & ~0x03) {
  FUNC_0("TX: invalid mask");

  return 2;
 }

 VAR_2->transmitter_mask = VAR_1;
 FUNC_1(VAR_2);
 return 0;
}
