
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
union tl_entry {int nl; int cpu; TYPE_1__ container; } ;
struct tl_info {scalar_t__ length; union tl_entry* tle; } ;
struct mask_info {int id; struct mask_info* next; } ;


 int FUNC_0 (int *,struct mask_info*,struct mask_info*) ;
 struct mask_info VAR_0 ;
 int FUNC_1 () ;
 struct mask_info VAR_1 ;
 int VAR_2 ;
 union tl_entry* FUNC_2 (union tl_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct tl_info *VAR_4)
{



 struct mask_info *VAR_5 = ((void*)0);

 struct mask_info *VAR_6 = &VAR_1;
 union tl_entry *VAR_7, *VAR_8;


 FUNC_3(&VAR_3);
 FUNC_1();
 VAR_7 = VAR_4->tle;
 VAR_8 = (union tl_entry *)((unsigned long)VAR_4 + VAR_4->length);
 while (VAR_7 < VAR_8) {
  switch (VAR_7->nl) {






  case 1:
   VAR_6 = VAR_6->next;
   VAR_6->id = VAR_7->container.id;
   break;
  case 0:
   FUNC_0(&VAR_7->cpu, VAR_5, VAR_6);
   break;
  default:
   FUNC_1();
   VAR_2 = 0;
   goto out;
  }
  VAR_7 = FUNC_2(VAR_7);
 }
out:
 FUNC_4(&VAR_3);
}
