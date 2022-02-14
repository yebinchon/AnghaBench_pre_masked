
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int* text_start; int* text_pos; int* data_start; int* data_pos; int entry_point; int * data_size; int * text_size; } ;
typedef TYPE_1__ dolheader ;


 int FUNC_0 (void*,void const*,int ) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static uint32_t FUNC_2(const void *VAR_0)
{
 uint32_t VAR_1;
   dolheader *VAR_2 = ((void*)0);

 if(!VAR_0)
  return 0;

 VAR_2 = (dolheader *) VAR_0;

 for (VAR_1 = 0; VAR_1 < 7; VAR_1++)
 {
  if ((!VAR_2->text_size[VAR_1]) || (VAR_2->text_start[VAR_1] < 0x100))
   continue;

  FUNC_0((void *) VAR_2->text_start[VAR_1], VAR_0 + VAR_2->text_pos[VAR_1], VAR_2->text_size[VAR_1]);
  FUNC_1((void *) VAR_2->text_start[VAR_1], VAR_2->text_size[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < 11; VAR_1++)
 {
  if ((!VAR_2->data_size[VAR_1]) || (VAR_2->data_start[VAR_1] < 0x100))
   continue;

  FUNC_0((void *) VAR_2->data_start[VAR_1], VAR_0 + VAR_2->data_pos[VAR_1], VAR_2->data_size[VAR_1]);
  FUNC_1((void *) VAR_2->data_start[VAR_1], VAR_2->data_size[VAR_1]);
 }

 return VAR_2->entry_point;
}
