
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {int entry; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct pmb_entry *VAR_2 = VAR_1;

 FUNC_0(VAR_1, 0, sizeof(struct pmb_entry));

 VAR_2->entry = VAR_0;
}
