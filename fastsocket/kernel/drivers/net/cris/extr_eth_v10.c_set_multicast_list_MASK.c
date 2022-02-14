
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int lock; } ;
struct net_device {int mc_count; int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 unsigned long* VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_9)
{
 struct net_local *VAR_10 = FUNC_1(VAR_9);
 int VAR_11 = VAR_9->mc_count;
 unsigned long int VAR_12;
 unsigned long int VAR_13;

 FUNC_2(&VAR_10->lock);
 if (VAR_9->flags & VAR_1) {

  VAR_12 = 0xfffffffful;
  VAR_13 = 0xfffffffful;


  FUNC_0(VAR_7, VAR_4, VAR_6, VAR_8);
  *VAR_4 = VAR_7;
 } else if (VAR_9->flags & VAR_0) {

  VAR_12 = 0xfffffffful;
  VAR_13 = 0xfffffffful;


  FUNC_0(VAR_7, VAR_4, VAR_6, VAR_5);
  *VAR_4 = VAR_7;
 } else if (VAR_11 == 0) {

  VAR_12 = 0x00000000ul;
  VAR_13 = 0x00000000ul;


  FUNC_0(VAR_7, VAR_4, VAR_6, VAR_5);
  *VAR_4 = VAR_7;
 } else {

  char VAR_14;
  struct dev_mc_list *VAR_15 = VAR_9->mc_list;
  int VAR_16;
  char *VAR_17;

  VAR_12 = 0x00000000ul;
  VAR_13 = 0x00000000ul;
  for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {


   VAR_14 = 0;
   VAR_17 = VAR_15->dmi_addr;
   VAR_14 ^= (*VAR_17) & 0x3f;
   VAR_14 ^= ((*VAR_17) >> 6) & 0x03;
   ++VAR_17;
   VAR_14 ^= ((*VAR_17) << 2) & 0x03c;
   VAR_14 ^= ((*VAR_17) >> 4) & 0xf;
   ++VAR_17;
   VAR_14 ^= ((*VAR_17) << 4) & 0x30;
   VAR_14 ^= ((*VAR_17) >> 2) & 0x3f;
   ++VAR_17;
   VAR_14 ^= (*VAR_17) & 0x3f;
   VAR_14 ^= ((*VAR_17) >> 6) & 0x03;
   ++VAR_17;
   VAR_14 ^= ((*VAR_17) << 2) & 0x03c;
   VAR_14 ^= ((*VAR_17) >> 4) & 0xf;
   ++VAR_17;
   VAR_14 ^= ((*VAR_17) << 4) & 0x30;
   VAR_14 ^= ((*VAR_17) >> 2) & 0x3f;

   VAR_14 &= 0x3f;

   if (VAR_14 >= 32) {
    VAR_13 |= (1 << (VAR_14-32));
   } else {
    VAR_12 |= (1 << VAR_14);
   }
   VAR_15 = VAR_15->next;
  }

  FUNC_0(VAR_7, VAR_4, VAR_6, VAR_5);
  *VAR_4 = VAR_7;
 }
 *VAR_2 = VAR_12;
 *VAR_3 = VAR_13;
 FUNC_3(&VAR_10->lock);
}
