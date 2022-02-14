
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct lance_private {struct lance_init_block* init_block; } ;
struct lance_init_block {int* filter; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct lance_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2 (struct net_device *VAR_1)
{
 struct lance_private *VAR_2 = FUNC_1(VAR_1);
 volatile struct lance_init_block *VAR_3 = VAR_2->init_block;
 volatile u16 *VAR_4 = (u16 *)&VAR_3->filter;
 struct dev_mc_list *VAR_5=VAR_1->mc_list;
 char *VAR_6;
 int VAR_7;
 u32 VAR_8;


 if (VAR_1->flags & VAR_0){
  VAR_3->filter [0] = 0xffffffff;
  VAR_3->filter [1] = 0xffffffff;
  return;
 }

 VAR_3->filter [0] = 0;
 VAR_3->filter [1] = 0;


 for (VAR_7 = 0; VAR_7 < VAR_1->mc_count; VAR_7++){
  VAR_6 = VAR_5->dmi_addr;
  VAR_5 = VAR_5->next;


  if (!(*VAR_6 & 1))
   continue;

  VAR_8 = FUNC_0(6, VAR_6);
  VAR_8 = VAR_8 >> 26;
  VAR_4 [VAR_8 >> 4] |= 1 << (VAR_8 & 0xf);
 }
 return;
}
