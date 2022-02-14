
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sram_piece {size_t size; scalar_t__ paddr; struct sram_piece* next; int pid; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct sram_piece* FUNC_0 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void *FUNC_1(size_t VAR_3, struct sram_piece *VAR_4,
  struct sram_piece *VAR_5)
{
 struct sram_piece *VAR_6, *VAR_7, *VAR_8;

 if (VAR_3 <= 0 || !VAR_4 || !VAR_5)
  return ((void*)0);


 VAR_3 = (VAR_3 + 3) & ~3;

 VAR_6 = VAR_4->next;
 VAR_7 = VAR_4;


 while (VAR_6 != ((void*)0) && VAR_3 > VAR_6->size) {
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
 }

 if (!VAR_6)
  return ((void*)0);

 if (VAR_6->size == VAR_3) {
  VAR_7->next = VAR_6->next;
  VAR_8 = VAR_6;
 } else {
  VAR_8 = FUNC_0(VAR_2, VAR_0);

  if (!VAR_8)
   return ((void*)0);

  VAR_8->paddr = VAR_6->paddr;
  VAR_8->size = VAR_3;
  VAR_6->paddr += VAR_3;
  VAR_6->size -= VAR_3;
 }

 VAR_8->pid = VAR_1->pid;

 VAR_6 = VAR_5->next;
 VAR_7 = VAR_5;


 while (VAR_6 != ((void*)0) && VAR_8->paddr < VAR_6->paddr) {
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
 }

 VAR_8->next = VAR_6;
 VAR_7->next = VAR_8;

 return VAR_8->paddr;
}
