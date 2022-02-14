
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int** input_remap_ids; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {char*** input_desc_btn; } ;
typedef TYPE_3__ rarch_system_info_t ;
typedef int file_list_t ;
typedef int buf ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char const*,char) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_5(
      file_list_t* VAR_3,
      unsigned *VAR_4, unsigned VAR_5, unsigned VAR_6,
      const char *VAR_7,
      char *VAR_8, size_t VAR_9,
      const char *VAR_10,
      char *VAR_11, size_t VAR_12)
{
   rarch_system_info_t *VAR_13 = FUNC_1();
   settings_t *VAR_14 = FUNC_0();
   const char* VAR_15 = ((void*)0);
   char VAR_16[256];

   unsigned VAR_17, VAR_18, VAR_19;

   if (!VAR_14)
      return;

   VAR_18 = (VAR_5 - VAR_0) / (VAR_1 + 8);
   VAR_17 = (VAR_5 - VAR_0) - (VAR_1 + 8) * VAR_18;
   VAR_19 =
      VAR_14->uints.input_remap_ids[VAR_18][VAR_17];

   if (!VAR_13)
      return;

   if (VAR_19 != VAR_2)
      VAR_15 = VAR_13->input_desc_btn[VAR_18][VAR_19];

   if (!FUNC_3(VAR_15) && VAR_19 < VAR_1)
      FUNC_4(VAR_8, VAR_15, VAR_9);
   else if (!FUNC_3(VAR_15) && VAR_19 >= VAR_1 && VAR_19 % 2 == 0)
   {
      FUNC_2(VAR_16, sizeof(VAR_16), "%s %c", VAR_15, '+');
      FUNC_4(VAR_8, VAR_16, VAR_9);
   }
   else if (!FUNC_3(VAR_15) && VAR_19 >= VAR_1 && VAR_19 % 2 != 0)
   {
      FUNC_2(VAR_16, sizeof(VAR_16), "%s %c", VAR_15, '-');
      FUNC_4(VAR_8, VAR_16, VAR_9);
   }
   else
      FUNC_4(VAR_8, "---", VAR_9);

   *VAR_4 = 19;
   FUNC_4(VAR_11, VAR_10, VAR_12);
}
