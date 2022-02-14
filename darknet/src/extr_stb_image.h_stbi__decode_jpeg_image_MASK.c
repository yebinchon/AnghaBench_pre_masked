
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ stbi__uint32 ;
struct TYPE_14__ {scalar_t__ progressive; TYPE_8__* s; void* marker; scalar_t__ restart_interval; TYPE_1__* img_comp; } ;
typedef TYPE_2__ stbi__jpeg ;
struct TYPE_15__ {scalar_t__ img_y; } ;
struct TYPE_13__ {int * raw_coeff; int * raw_data; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (char*,char*) ;
 void* FUNC_6 (TYPE_8__*) ;
 void* FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(stbi__jpeg *VAR_2)
{
   int VAR_3;
   for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
      VAR_2->img_comp[VAR_3].raw_data = ((void*)0);
      VAR_2->img_comp[VAR_3].raw_coeff = ((void*)0);
   }
   VAR_2->restart_interval = 0;
   if (!FUNC_4(VAR_2, VAR_1)) return 0;
   VAR_3 = FUNC_8(VAR_2);
   while (!FUNC_1(VAR_3)) {
      if (FUNC_2(VAR_3)) {
         if (!FUNC_12(VAR_2)) return 0;
         if (!FUNC_10(VAR_2)) return 0;
         if (VAR_2->marker == VAR_0 ) {

            while (!FUNC_3(VAR_2->s)) {
               int VAR_4 = FUNC_7(VAR_2->s);
               if (VAR_4 == 255) {
                  VAR_2->marker = FUNC_7(VAR_2->s);
                  break;
               }
            }

         }
      } else if (FUNC_0(VAR_3)) {
         int VAR_5 = FUNC_6(VAR_2->s);
         stbi__uint32 VAR_6 = FUNC_6(VAR_2->s);
         if (VAR_5 != 4) return FUNC_5("bad DNL len", "Corrupt JPEG");
         if (VAR_6 != VAR_2->s->img_y) return FUNC_5("bad DNL height", "Corrupt JPEG");
      } else {
         if (!FUNC_11(VAR_2, VAR_3)) return 0;
      }
      VAR_3 = FUNC_8(VAR_2);
   }
   if (VAR_2->progressive)
      FUNC_9(VAR_2);
   return 1;
}
