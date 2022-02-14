
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sram_list_struct {size_t length; struct sram_list_struct* next; void* addr; } ;
struct TYPE_3__ {struct sram_list_struct* sram_list; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (struct sram_list_struct*) ;
 struct sram_list_struct* FUNC_1 (int,int ) ;
 void* FUNC_2 (size_t) ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;
 void* FUNC_5 (size_t) ;

void *FUNC_6(size_t VAR_6, unsigned long VAR_7)
{
 void *VAR_8 = ((void*)0);
 struct sram_list_struct *VAR_9 = ((void*)0);
 struct mm_struct *VAR_10 = VAR_5->mm;

 VAR_9 = FUNC_1(sizeof(struct sram_list_struct), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_7 & VAR_3)
  VAR_8 = FUNC_4(VAR_6);

 if (VAR_8 == ((void*)0) && (VAR_7 & VAR_1))
  VAR_8 = FUNC_2(VAR_6);

 if (VAR_8 == ((void*)0) && (VAR_7 & VAR_2))
  VAR_8 = FUNC_3(VAR_6);

 if (VAR_8 == ((void*)0) && (VAR_7 & VAR_4))
  VAR_8 = FUNC_5(VAR_6);

 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }
 VAR_9->addr = VAR_8;
 VAR_9->length = VAR_6;
 VAR_9->next = VAR_10->context.sram_list;
 VAR_10->context.sram_list = VAR_9;
 return VAR_8;
}
