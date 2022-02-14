
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {scalar_t__ entry; struct pmb_entry* link; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pmb_entry*) ;
 int FUNC_2 (struct pmb_entry*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_4(struct pmb_entry *VAR_2)
{
 FUNC_0(!FUNC_3(VAR_2->entry, &VAR_1));

 do {
  struct pmb_entry *VAR_3 = VAR_2;

  if (VAR_2->entry != VAR_0)
   FUNC_1(VAR_2);

  VAR_2 = VAR_3->link;

  FUNC_2(VAR_3);
 } while (VAR_2);
}
