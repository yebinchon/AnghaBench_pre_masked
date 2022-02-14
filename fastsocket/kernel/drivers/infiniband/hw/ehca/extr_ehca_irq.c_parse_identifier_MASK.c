
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int name; } ;
struct ehca_shca {TYPE_1__ ib_device; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ehca_shca*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (struct ehca_shca*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ehca_shca *VAR_6, u64 VAR_7)
{
 u8 VAR_8 = FUNC_0(VAR_0, VAR_7);

 switch (VAR_8) {
 case 0x02:
  FUNC_4(VAR_6, VAR_7, VAR_2, 0);
  break;
 case 0x03:
  FUNC_4(VAR_6, VAR_7, VAR_1, 0);
  break;
 case 0x04:
  FUNC_4(VAR_6, VAR_7, VAR_4, 0);
  break;
 case 0x05:
 case 0x06:
  FUNC_4(VAR_6, VAR_7, VAR_3, 1);
  break;
 case 0x07:
 case 0x08:
  FUNC_1(VAR_6, VAR_7);
  break;
 case 0x09:
  FUNC_2(&VAR_6->ib_device, "MRMWPTE error.");
  break;
 case 0x0A:
  FUNC_2(&VAR_6->ib_device, "Port event.");
  break;
 case 0x0B:
  FUNC_2(&VAR_6->ib_device, "MR access error.");
  break;
 case 0x0C:
  FUNC_2(&VAR_6->ib_device, "EQ error.");
  break;
 case 0x0D:
  FUNC_2(&VAR_6->ib_device, "P/Q_Key mismatch.");
  break;
 case 0x10:
  FUNC_2(&VAR_6->ib_device, "Sampling complete.");
  break;
 case 0x11:
  FUNC_2(&VAR_6->ib_device, "Unaffiliated access error.");
  break;
 case 0x12:
  FUNC_2(&VAR_6->ib_device, "Path migrating.");
  break;
 case 0x13:
  FUNC_2(&VAR_6->ib_device, "Interface trace stopped.");
  break;
 case 0x14:
  FUNC_3(&VAR_6->ib_device, "First error capture available");
  break;
 case 0x15:
  FUNC_4(VAR_6, VAR_7, VAR_5, 0);
  break;
 default:
  FUNC_2(&VAR_6->ib_device, "Unknown identifier: %x on %s.",
    VAR_8, VAR_6->ib_device.name);
  break;
 }

 return;
}
