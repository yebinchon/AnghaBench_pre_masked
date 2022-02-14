
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int* input_joypad_map; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {unsigned int index_offset; } ;
typedef TYPE_3__ rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;
 char* FUNC_3 (unsigned int) ;
 char* FUNC_4 (unsigned int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,size_t,char*,char const*,...) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_9(rarch_setting_t *VAR_3, char *VAR_4,
      size_t VAR_5)
{
   unsigned VAR_6, VAR_7 = 0;
   unsigned VAR_8 = FUNC_2();
   settings_t *VAR_9 = FUNC_0();

   if (!VAR_3)
      return;

   VAR_6 = VAR_3->index_offset;
   VAR_7 = VAR_9->uints.input_joypad_map[VAR_6];

   if (VAR_7 < VAR_8)
   {
      const char *VAR_10 = FUNC_3(VAR_7) ?
         FUNC_3(VAR_7) : FUNC_4(VAR_7);

      if (!FUNC_7(VAR_10))
      {
         unsigned VAR_11 = FUNC_1(VAR_7);


         if ( VAR_11 > 0)
            FUNC_6(VAR_4, VAR_5,
                  "%s (#%u)",
                  VAR_10,
                  VAR_11);
         else
            FUNC_8(VAR_4, VAR_10, VAR_5);
      }
      else
         FUNC_6(VAR_4, VAR_5,
               "%s (%s #%u)",
               FUNC_5(VAR_1),
               FUNC_5(VAR_2),
               VAR_7);
   }
   else
      FUNC_8(VAR_4, FUNC_5(VAR_0), VAR_5);
}
