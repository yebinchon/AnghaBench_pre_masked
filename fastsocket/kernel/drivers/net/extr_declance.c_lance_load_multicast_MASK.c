
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; scalar_t__ mem_start; } ;
struct lance_private {int type; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_2 ;
 int* FUNC_1 (int volatile*,int ,int ) ;
 struct lance_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct lance_private *VAR_4 = FUNC_2(VAR_3);
 volatile u16 *VAR_5 = (volatile u16 *)VAR_3->mem_start;
 struct dev_mc_list *VAR_6 = VAR_3->mc_list;
 char *VAR_7;
 int VAR_8;
 u32 VAR_9;


 if (VAR_3->flags & VAR_1) {
  *FUNC_1(VAR_5, VAR_2[0], VAR_4->type) = 0xffff;
  *FUNC_1(VAR_5, VAR_2[1], VAR_4->type) = 0xffff;
  *FUNC_1(VAR_5, VAR_2[2], VAR_4->type) = 0xffff;
  *FUNC_1(VAR_5, VAR_2[3], VAR_4->type) = 0xffff;
  return;
 }

 *FUNC_1(VAR_5, VAR_2[0], VAR_4->type) = 0;
 *FUNC_1(VAR_5, VAR_2[1], VAR_4->type) = 0;
 *FUNC_1(VAR_5, VAR_2[2], VAR_4->type) = 0;
 *FUNC_1(VAR_5, VAR_2[3], VAR_4->type) = 0;


 for (VAR_8 = 0; VAR_8 < VAR_3->mc_count; VAR_8++) {
  VAR_7 = VAR_6->dmi_addr;
  VAR_6 = VAR_6->next;


  if (!(*VAR_7 & 1))
   continue;

  VAR_9 = FUNC_0(VAR_0, VAR_7);
  VAR_9 = VAR_9 >> 26;
  *FUNC_1(VAR_5, VAR_2[VAR_9 >> 4], VAR_4->type) |= 1 << (VAR_9 & 0xf);
 }
 return;
}
