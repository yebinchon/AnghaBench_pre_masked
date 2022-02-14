
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 u32 VAR_2, VAR_3;
 struct dev_mc_list *VAR_4 = VAR_1->mc_list;
 char *VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_2 = VAR_3 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1->mc_count; VAR_6++) {
  VAR_5 = VAR_4->dmi_addr;
  VAR_4 = VAR_4->next;


  if (!(*VAR_5 & 1))
   continue;

  VAR_7 = FUNC_2(VAR_0, VAR_5);
  VAR_7 >>= 26;

  if (VAR_7 & 0x20)
   VAR_2 |= 1 << (VAR_7 & 0x1f);
  else
   VAR_3 |= 1 << (VAR_7 & 0x1f);
 }

 FUNC_0(VAR_2);
 FUNC_1(VAR_3);

 return;
}
