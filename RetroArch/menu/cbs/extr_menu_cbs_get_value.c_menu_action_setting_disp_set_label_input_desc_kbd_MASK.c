
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
typedef int file_list_t ;
typedef int desc ;
struct TYPE_7__ {unsigned int key; char* desc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(
   file_list_t* VAR_6,
   unsigned *VAR_7, unsigned VAR_8, unsigned VAR_9,
   const char *VAR_10,
   char *VAR_11, size_t VAR_12,
   const char *VAR_13,
   char *VAR_14, size_t VAR_15)
{
   char VAR_16[VAR_1];
   unsigned VAR_17, VAR_18;
   unsigned VAR_19;
   unsigned VAR_20 = 0;

   settings_t *VAR_21 = FUNC_0();

   if (!VAR_21)
      return;

   VAR_20 = (VAR_8 - VAR_0) / VAR_2;
   VAR_18 = (VAR_8 - VAR_0) - VAR_2 * VAR_20;
   VAR_19 =
      VAR_21->uints.input_keymapper_ids[VAR_20][VAR_18];

   for (VAR_17 = 0; VAR_17 < VAR_3 - 1; VAR_17++)
   {
      if (VAR_19 == VAR_5[VAR_17].key)
         break;
   }

   if (VAR_5[VAR_17].key != VAR_4)
   {
      FUNC_1(VAR_16, sizeof(VAR_16), "Keyboard %s", VAR_5[VAR_17].desc);
      FUNC_2(VAR_11, VAR_16, VAR_12);
   }
   else
      FUNC_2(VAR_11, "---", VAR_12);

   *VAR_7 = 19;
   FUNC_2(VAR_14, VAR_13, VAR_15);
}
