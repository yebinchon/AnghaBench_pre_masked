
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct retro_keybind {int dummy; } ;
struct TYPE_12__ {int bundle_finished; } ;
struct TYPE_13__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
typedef int s2 ;
struct TYPE_14__ {char* s; size_t len; int idx; } ;
typedef TYPE_3__ rcheevos_ctx_desc_t ;
struct TYPE_15__ {int timer_end; } ;
typedef TYPE_4__ rarch_timer_t ;
typedef int desc ;


 unsigned int FUNC_0 (unsigned int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int const VAR_19 ;
 unsigned int const VAR_20 ;
 unsigned int const VAR_21 ;
 unsigned int const VAR_22 ;
 unsigned int const VAR_23 ;
 unsigned int const VAR_24 ;
 unsigned int const VAR_25 ;
 unsigned int const VAR_26 ;
 unsigned int const VAR_27 ;
 unsigned int const VAR_28 ;
 TYPE_2__* FUNC_1 () ;
 struct retro_keybind** VAR_29 ;
 scalar_t__ FUNC_2 (int ,unsigned int const) ;
 int FUNC_3 (char*,struct retro_keybind const*,struct retro_keybind const*,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_4 (int ,char*,size_t) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (char*,size_t,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

int FUNC_13(char *VAR_33, size_t VAR_34, const char *VAR_35)
{



   bool VAR_36 = 0;

   switch (VAR_32)
   {
      case 128:
         {
            static rarch_timer_t VAR_37;

            if (!FUNC_9(&VAR_37))
               FUNC_6(&VAR_37, 3);

            FUNC_10(&VAR_37);

            FUNC_4(
                  VAR_17,
                  VAR_33, VAR_34);

            if (!VAR_37.timer_end && FUNC_8(&VAR_37))
            {
               FUNC_7(&VAR_37);
               VAR_36 = 1;
            }
         }
         break;
      case 139:
         {
            unsigned VAR_38;
            char VAR_39[VAR_18];
            const unsigned VAR_40[] = {
               VAR_26,
               VAR_23,
               VAR_21,
               VAR_22,
               VAR_24,
               VAR_25,
               VAR_19,
               VAR_20,
               VAR_27,
               VAR_28,
            };
            char VAR_41[FUNC_0(VAR_40)][64];

            for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_40); VAR_38++)
               VAR_41[VAR_38][0] = '\0';

            for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_40); VAR_38++)
            {
               const struct retro_keybind *VAR_42 = &VAR_29[0][VAR_40[VAR_38]];
               const struct retro_keybind *VAR_43 =
                  (const struct retro_keybind*)
                  FUNC_2(0, VAR_40[VAR_38]);

               FUNC_3(VAR_41[VAR_38],
                     VAR_42, VAR_43, sizeof(VAR_41[VAR_38]));
            }

            VAR_39[0] = '\0';

            FUNC_4(VAR_15,
                  VAR_39, sizeof(VAR_39));

            FUNC_12(VAR_33, VAR_34,
                  "%s"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n"
                  "[%s]: "
                  "%-20s\n",

                  VAR_39,

                  FUNC_5(
                        VAR_6),
                  VAR_41[0],

                  FUNC_5(
                        VAR_5),
                  VAR_41[1],

                  FUNC_5(
                        VAR_2),
                  VAR_41[2],

                  FUNC_5(
                        VAR_1),
                  VAR_41[3],

                  FUNC_5(
                        VAR_3),
                  VAR_41[4],

                  FUNC_5(
                        VAR_7),
                  VAR_41[5],

                  FUNC_5(
                        VAR_9),
                  VAR_41[6],

                  FUNC_5(
                        VAR_4),
                  VAR_41[7],

                  FUNC_5(
                        VAR_8),
                  VAR_41[8]

                  );
         }
         break;
      case 134:
         FUNC_4(VAR_16,
               VAR_33, VAR_34);
         break;
      case 137:
         FUNC_4(VAR_0,
               VAR_33, VAR_34);
         break;
      case 141:
         FUNC_4(
               VAR_12,
               VAR_33, VAR_34);
         break;
      case 142:
         FUNC_4(
               VAR_11,
               VAR_33, VAR_34);
         break;
      case 135:
         FUNC_4(
               VAR_14,
               VAR_33, VAR_34);
         break;
      case 136:
         FUNC_4(VAR_13,
               VAR_33, VAR_34);
         break;
      case 138:
         {
            settings_t *VAR_44 = FUNC_1();
            FUNC_4(VAR_10,
                  VAR_33, VAR_34);

            if (VAR_44->bools.bundle_finished)
            {
               VAR_44->bools.bundle_finished = 0;
               VAR_36 = 1;
            }
         }
         break;
      case 130:
      case 133:
      case 131:
      case 129:
      case 143:
         FUNC_4(VAR_31,
               VAR_33, VAR_34);
         break;
      case 132:
      default:
         break;
   }

   if (VAR_36)
   {
      VAR_32 = 132;
      return 1;
   }

   return 0;
}
