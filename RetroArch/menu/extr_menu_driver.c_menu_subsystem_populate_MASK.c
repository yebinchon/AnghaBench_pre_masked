
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
struct retro_subsystem_info {int num_roms; char* desc; TYPE_3__* roms; } ;
typedef int star_char ;
struct TYPE_9__ {int menu_show_sublabels; } ;
struct TYPE_8__ {int menu_driver; } ;
struct TYPE_11__ {TYPE_2__ bools; TYPE_1__ arrays; } ;
typedef TYPE_4__ settings_t ;
typedef int s ;
typedef int rom_buff ;
struct TYPE_12__ {int list; } ;
typedef TYPE_5__ menu_displaylist_info_t ;
struct TYPE_10__ {char* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 () ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int) ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_13 () ;

void FUNC_14(const struct retro_subsystem_info* VAR_6, menu_displaylist_info_t *VAR_7)
{
   settings_t *VAR_8 = FUNC_1();
   static const char VAR_9[] = "\xE2\x98\x85";

   char VAR_10[16];
   unsigned VAR_11 = 0;
   int VAR_12 = 0;
   bool VAR_13 = FUNC_10(VAR_8->arrays.menu_driver, "rgui");




   FUNC_8(VAR_10, sizeof(VAR_10), "%s", VAR_13 ? "*" : VAR_9);

   if (VAR_6 && VAR_5 > 0)
   {
      for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++, VAR_6++)
      {
         char VAR_14[VAR_4];
         if (FUNC_2() == VAR_11)
         {
            if (FUNC_4() < VAR_6->num_roms)
            {
               FUNC_8(VAR_14, sizeof(VAR_14),
                  "Load %s %s",
                  VAR_6->desc,
                  VAR_10);



               if (VAR_13 && !VAR_8->bools.menu_show_sublabels)
               {
                  char VAR_15[VAR_4];

                  VAR_12 = FUNC_8(VAR_15, sizeof(VAR_15),
                     "%s [%s %s]", VAR_14, "Current Content:",
                     VAR_6->roms[FUNC_4()].desc);
                  if ((VAR_12 < 0) || (VAR_12 >= VAR_4))
                  {
                     if (FUNC_13())
                     {
                        FUNC_0("Menu subsystem entry: Description label truncated.\n");
                     }
                  }

                  FUNC_12(VAR_14, VAR_15, sizeof(VAR_14));
               }

               FUNC_5(VAR_7->list,
                  VAR_14,
                  FUNC_6(VAR_0),
                  VAR_0,
                  VAR_2 + VAR_11, 0, 0);
            }
            else
            {
               FUNC_8(VAR_14, sizeof(VAR_14),
                  "Start %s %s",
                  VAR_6->desc,
                  VAR_10);



               if (VAR_13 && !VAR_8->bools.menu_show_sublabels)
               {
                  unsigned VAR_16 = 0;
                  char VAR_17[VAR_4];
                  char VAR_18[VAR_4];
                  VAR_17[0] = '\0';

                  for (VAR_16 = 0; VAR_16 < FUNC_4(); VAR_16++)
                  {
                     FUNC_11(VAR_17,
                           FUNC_7(FUNC_3(VAR_16)), sizeof(VAR_17));
                     if (VAR_16 != FUNC_4() - 1)
                        FUNC_11(VAR_17, "|", sizeof(VAR_17));
                  }

                  if (!FUNC_9(VAR_17))
                  {
                     VAR_12 = FUNC_8(VAR_18, sizeof(VAR_18), "%s [%s]", VAR_14, VAR_17);


                     if ((VAR_12 < 0) || (VAR_12 >= VAR_4))
                     {
                        if (FUNC_13())
                        {
                           FUNC_0("Menu subsystem entry: Description label truncated.\n");
                        }
                     }

                     FUNC_12(VAR_14, VAR_18, sizeof(VAR_14));
                  }
               }

               FUNC_5(VAR_7->list,
                  VAR_14,
                  FUNC_6(VAR_1),
                  VAR_1,
                  VAR_3, 0, 0);
            }
         }
         else
         {
            FUNC_8(VAR_14, sizeof(VAR_14),
               "Load %s",
               VAR_6->desc);



            if (VAR_13 && !VAR_8->bools.menu_show_sublabels)
            {



               if (VAR_6->num_roms > 0)
               {
                  char VAR_19[VAR_4];

                  VAR_12 = FUNC_8(VAR_19, sizeof(VAR_19),
                     "%s [%s %s]", VAR_14, "Current Content:",
                     VAR_6->roms[0].desc);


                  if ((VAR_12 < 0) || (VAR_12 >= VAR_4))
                  {
                     if (FUNC_13())
                     {
                        FUNC_0("Menu subsystem entry: Description label truncated.\n");
                     }
                  }

                  FUNC_12(VAR_14, VAR_19, sizeof(VAR_14));
               }
            }

            FUNC_5(VAR_7->list,
               VAR_14,
               FUNC_6(VAR_0),
               VAR_0,
               VAR_2 + VAR_11, 0, 0);
         }
      }
   }
}
