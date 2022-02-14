
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; unsigned int mc_count; struct dev_mc_list* mc_list; } ;
struct fec_enet_private {scalar_t__ hwp; } ;
struct dev_mc_list {int* dmi_addr; unsigned int dmi_addrlen; struct dev_mc_list* next; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{
 struct fec_enet_private *VAR_8 = FUNC_0(VAR_7);
 struct dev_mc_list *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned char VAR_16;

 if (VAR_7->flags & VAR_6) {
  VAR_15 = FUNC_1(VAR_8->hwp + VAR_3);
  VAR_15 |= 0x8;
  FUNC_2(VAR_15, VAR_8->hwp + VAR_3);
  return;
 }

 VAR_15 = FUNC_1(VAR_8->hwp + VAR_3);
 VAR_15 &= ~0x8;
 FUNC_2(VAR_15, VAR_8->hwp + VAR_3);

 if (VAR_7->flags & VAR_5) {



  FUNC_2(0xffffffff, VAR_8->hwp + VAR_1);
  FUNC_2(0xffffffff, VAR_8->hwp + VAR_2);

  return;
 }



 FUNC_2(0, VAR_8->hwp + VAR_1);
 FUNC_2(0, VAR_8->hwp + VAR_2);

 VAR_9 = VAR_7->mc_list;

 for (VAR_11 = 0; VAR_11 < VAR_7->mc_count; VAR_11++, VAR_9 = VAR_9->next) {

  if (!(VAR_9->dmi_addr[0] & 1))
   continue;


  VAR_14 = 0xffffffff;

  for (VAR_10 = 0; VAR_10 < VAR_9->dmi_addrlen; VAR_10++) {
   VAR_13 = VAR_9->dmi_addr[VAR_10];
   for (VAR_12 = 0; VAR_12 < 8; VAR_12++, VAR_13 >>= 1) {
    VAR_14 = (VAR_14 >> 1) ^
    (((VAR_14 ^ VAR_13) & 1) ? VAR_0 : 0);
   }
  }




  VAR_16 = (VAR_14 >> (32 - VAR_4)) & 0x3f;

  if (VAR_16 > 31) {
   VAR_15 = FUNC_1(VAR_8->hwp + VAR_1);
   VAR_15 |= 1 << (VAR_16 - 32);
   FUNC_2(VAR_15, VAR_8->hwp + VAR_1);
  } else {
   VAR_15 = FUNC_1(VAR_8->hwp + VAR_2);
   VAR_15 |= 1 << VAR_16;
   FUNC_2(VAR_15, VAR_8->hwp + VAR_2);
  }
 }
}
