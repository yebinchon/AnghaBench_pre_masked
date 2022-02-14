
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_piece {void const* paddr; int size; struct sram_piece* next; scalar_t__ pid; } ;


 int FUNC_0 (int ,struct sram_piece*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const void *VAR_1,
   struct sram_piece *VAR_2,
   struct sram_piece *VAR_3)
{
 struct sram_piece *VAR_4, *VAR_5, *VAR_6;

 if (!VAR_2 || !VAR_3)
  return -1;


 VAR_4 = VAR_3->next;
 VAR_5 = VAR_3;


 while (VAR_4 != ((void*)0) && VAR_4->paddr != VAR_1) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
 }

 if (!VAR_4)
  return -1;

 VAR_5->next = VAR_4->next;
 VAR_6 = VAR_4;
 VAR_6->pid = 0;


 VAR_4 = VAR_2->next;
 VAR_5 = VAR_2;

 while (VAR_4 != ((void*)0) && VAR_1 > VAR_4->paddr) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
 }

 if (VAR_5 != VAR_2 && VAR_5->paddr + VAR_5->size == VAR_6->paddr) {
  VAR_5->size += VAR_6->size;
  FUNC_0(VAR_0, VAR_6);
 } else {
  VAR_6->next = VAR_5->next;
  VAR_5->next = VAR_6;
  VAR_5 = VAR_6;
 }

 if (VAR_4 && VAR_5->paddr + VAR_5->size == VAR_4->paddr) {
  VAR_5->size += VAR_4->size;
  VAR_5->next = VAR_4->next;
  FUNC_0(VAR_0, VAR_4);
 }

 return 0;
}
