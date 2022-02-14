
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ks8695_priv {int dummy; } ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;


 int AAH_E ;
 int BUG_ON (int) ;
 int KS8695_AAH_ (int) ;
 int KS8695_AAL_ (int) ;
 int KS8695_NR_ADDRESSES ;
 int ks8695_writereg (struct ks8695_priv*,int ,int) ;

__attribute__((used)) static void
ks8695_init_partial_multicast(struct ks8695_priv *ksp,
         struct dev_mc_list *addr,
         int nr_addr)
{
 u32 low, high;
 int i;

 for (i = 0; i < nr_addr; i++, addr = addr->next) {

  if (!addr)
   break;

  BUG_ON(i == KS8695_NR_ADDRESSES);

  low = (addr->dmi_addr[2] << 24) | (addr->dmi_addr[3] << 16) |
   (addr->dmi_addr[4] << 8) | (addr->dmi_addr[5]);
  high = (addr->dmi_addr[0] << 8) | (addr->dmi_addr[1]);

  ks8695_writereg(ksp, KS8695_AAL_(i), low);
  ks8695_writereg(ksp, KS8695_AAH_(i), AAH_E | high);
 }


 for (; i < KS8695_NR_ADDRESSES; i++) {
  ks8695_writereg(ksp, KS8695_AAL_(i), 0);
  ks8695_writereg(ksp, KS8695_AAH_(i), 0);
 }
}
