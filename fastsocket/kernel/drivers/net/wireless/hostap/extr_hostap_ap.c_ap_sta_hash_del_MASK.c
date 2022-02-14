
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int addr; struct sta_info* hnext; } ;
struct ap_data {struct sta_info** sta_hash; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct ap_data *VAR_1, struct sta_info *VAR_2)
{
 struct sta_info *VAR_3;

 VAR_3 = VAR_1->sta_hash[FUNC_0(VAR_2->addr)];
 if (VAR_3 == ((void*)0)) return;
 if (FUNC_1(VAR_3->addr, VAR_2->addr, VAR_0) == 0) {
  VAR_1->sta_hash[FUNC_0(VAR_2->addr)] = VAR_3->hnext;
  return;
 }

 while (VAR_3->hnext != ((void*)0) && FUNC_1(VAR_3->hnext->addr, VAR_2->addr, VAR_0)
        != 0)
  VAR_3 = VAR_3->hnext;
 if (VAR_3->hnext != ((void*)0))
  VAR_3->hnext = VAR_3->hnext->hnext;
 else
  FUNC_2("AP: could not remove STA %pM from hash table\n",
         VAR_2->addr);
}
