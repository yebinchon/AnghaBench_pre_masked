
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t page_id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct mm_struct*) ;
 size_t VAR_2 ;
 struct mm_struct** VAR_3 ;
 int FUNC_2 (char*,size_t,struct mm_struct*) ;

__attribute__((used)) static inline void
FUNC_3(struct mm_struct *VAR_4)
{
 struct mm_struct *VAR_5;

 FUNC_0(FUNC_2("tlb: alloc context %d (%p)\n", VAR_2, VAR_4));



 VAR_5 = VAR_3[VAR_2];

 if(VAR_5) {



  FUNC_1(VAR_5);

  VAR_5->context.page_id = VAR_1;
 }



 VAR_4->context.page_id = VAR_2;
 VAR_3[VAR_2] = VAR_4;

 VAR_2++;

 if(VAR_2 == VAR_0)
  VAR_2 = 0;
}
