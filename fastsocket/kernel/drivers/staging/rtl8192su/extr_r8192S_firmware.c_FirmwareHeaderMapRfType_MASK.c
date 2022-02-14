
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int rf_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

u8 FUNC_2(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);
 switch(VAR_2->rf_type)
 {
  case 131: return 0x11;
  case 130: return 0x12;
  case 129: return 0x22;
  case 128: return 0x92;
  default:
   FUNC_0(VAR_0, "Unknown RF type(%x)\n",VAR_2->rf_type);
   break;
 }
 return 0x22;
}
