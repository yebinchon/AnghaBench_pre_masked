
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int dirty; int count; int capacity; TYPE_2__* elements; } ;
typedef TYPE_1__ rcheevos_fixups_t ;
struct TYPE_9__ {unsigned int address; int const* location; } ;
typedef TYPE_2__ rcheevos_fixup_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*,int,int,int ) ;
 int FUNC_1 (TYPE_2__*,int,int,int ) ;
 int VAR_0 ;
 int * FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,unsigned int) ;

const uint8_t* FUNC_4(rcheevos_fixups_t* VAR_1, unsigned VAR_2, int VAR_3)
{
   rcheevos_fixup_t VAR_4;
   rcheevos_fixup_t* VAR_5;
   const uint8_t* VAR_6;

   if (VAR_1->dirty)
   {
      FUNC_1(VAR_1->elements, VAR_1->count, sizeof(rcheevos_fixup_t), VAR_0);
      VAR_1->dirty = 0;
   }

   VAR_4.address = VAR_2;
   VAR_5 = (rcheevos_fixup_t*)FUNC_0(&VAR_4, VAR_1->elements, VAR_1->count, sizeof(rcheevos_fixup_t), VAR_0);

   if (VAR_5 != ((void*)0))
   {
      return VAR_5->location;
   }

   if (VAR_1->count == VAR_1->capacity)
   {
      unsigned VAR_7 = VAR_1->capacity == 0 ? 16 : VAR_1->capacity * 2;
      rcheevos_fixup_t* VAR_8 = (rcheevos_fixup_t*)
         FUNC_3(VAR_1->elements, VAR_7 * sizeof(rcheevos_fixup_t));

      if (VAR_8 == ((void*)0))
      {
         return ((void*)0);
      }

      VAR_1->elements = VAR_8;
      VAR_1->capacity = VAR_7;
   }

   VAR_1->elements[VAR_1->count].address = VAR_2;
   VAR_1->elements[VAR_1->count++].location = VAR_6 =
      FUNC_2(VAR_2, VAR_3);
   VAR_1->dirty = 1;

   return VAR_6;
}
