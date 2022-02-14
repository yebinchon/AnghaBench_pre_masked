
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int** input_keymapper_ids; } ;
struct TYPE_6__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_7__ {unsigned int key; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_4, const char *VAR_5,
   bool VAR_6)
{
   unsigned VAR_7;
   unsigned VAR_8, VAR_9, VAR_10;
   settings_t *VAR_11 = FUNC_0();

   if (!VAR_11)
      return 0;

   VAR_9 = (VAR_4 - VAR_0) / VAR_1;
   VAR_10 = (VAR_4 - VAR_0) - VAR_1 * VAR_9;

   VAR_7 =
      VAR_11->uints.input_keymapper_ids[VAR_9][VAR_10];

   for (VAR_8 = 0; VAR_8 < VAR_2 - 1; VAR_8++)
   {
      if (VAR_7 == VAR_3[VAR_8].key)
         break;
   }

   if (VAR_8 > 0)
      VAR_8--;
   else
      VAR_8 = (VAR_2 - 1) + VAR_0;

   VAR_11->uints.input_keymapper_ids[VAR_9][VAR_10] = VAR_3[VAR_8].key;

   return 0;
}
