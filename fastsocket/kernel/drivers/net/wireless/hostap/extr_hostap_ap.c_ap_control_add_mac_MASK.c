
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac_restrictions {int lock; int entries; int mac_list; } ;
struct mac_entry {int list; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mac_restrictions *VAR_3, u8 *VAR_4)
{
 struct mac_entry *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct mac_entry), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_5->addr, VAR_4, VAR_1);

 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_5->list, &VAR_3->mac_list);
 VAR_3->entries++;
 FUNC_4(&VAR_3->lock);

 return 0;
}
