
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int base_addr; int name; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;
struct TYPE_2__ {int ifrn_name; } ;
struct ifreq {TYPE_1__ ifr_ifrn; } ;
struct el3_private {int phys; int window_lock; } ;


 int FUNC_0 (int,char*,int ,int ,int,int,int,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 struct mii_ioctl_data* FUNC_2 (struct ifreq*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int,int) ;
 int FUNC_5 (unsigned int,int,int,int ) ;
 struct el3_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct el3_private *VAR_5 = FUNC_6(VAR_2);
 unsigned int VAR_6 = VAR_2->base_addr;
 struct mii_ioctl_data *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = VAR_5->phys & 0x1f;

 FUNC_0(2, "%s: In ioct(%-.6s, %#4.4x) %4.4x %4.4x %4.4x %4.4x.\n",
    VAR_2->name, VAR_3->ifr_ifrn.ifrn_name, VAR_4,
    VAR_7->phy_id, VAR_7->reg_num, VAR_7->val_in, VAR_7->val_out);

 switch(VAR_4) {
 case 130:
  VAR_7->phy_id = VAR_8;
 case 129:
  {
   int VAR_9;
   unsigned long VAR_10;

   FUNC_7(&VAR_5->window_lock, VAR_10);
   VAR_9 = FUNC_3(VAR_6 + VAR_0) >> 13;
   FUNC_1(4);
   VAR_7->val_out = FUNC_4(VAR_6, VAR_7->phy_id & 0x1f,
        VAR_7->reg_num & 0x1f);
   FUNC_1(VAR_9);
   FUNC_8(&VAR_5->window_lock, VAR_10);
   return 0;
  }
 case 128:
  {
   int VAR_11;
                       unsigned long VAR_12;

   FUNC_7(&VAR_5->window_lock, VAR_12);
   VAR_11 = FUNC_3(VAR_6 + VAR_0) >> 13;
   FUNC_1(4);
   FUNC_5(VAR_6, VAR_7->phy_id & 0x1f,
       VAR_7->reg_num & 0x1f, VAR_7->val_in);
   FUNC_1(VAR_11);
   FUNC_8(&VAR_5->window_lock, VAR_12);
   return 0;
  }
 default:
  return -VAR_1;
 }
}
