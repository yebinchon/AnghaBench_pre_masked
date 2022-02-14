
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * stub_pages; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*,int ,int *) ;
 int * FUNC_2 (struct mm_struct*,int ) ;

void FUNC_3(struct mm_struct *VAR_2)
{
 pte_t *VAR_3;

 if (VAR_2->context.stub_pages != ((void*)0))
  FUNC_0(VAR_2->context.stub_pages);
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_2, VAR_0, VAR_3);

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(VAR_2, VAR_1, VAR_3);
}
