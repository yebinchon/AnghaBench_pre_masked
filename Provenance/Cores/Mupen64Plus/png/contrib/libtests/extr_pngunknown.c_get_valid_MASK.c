
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef TYPE_1__* png_textp ;
typedef int png_infop ;
struct TYPE_7__ {char* file; char* test; int png_ptr; } ;
typedef TYPE_2__ display ;
struct TYPE_6__ {int compression; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,char*,char*,int) ;
 size_t FUNC_2 (int ,int ,TYPE_1__**,int *) ;
 size_t FUNC_3 (int ,int ,size_t) ;
 int VAR_3 ;

__attribute__((used)) static png_uint_32
FUNC_4(display *VAR_4, png_infop VAR_5)
{
   png_uint_32 VAR_6 = FUNC_3(VAR_4->png_ptr, VAR_5, (png_uint_32)~0);


   {
      png_textp VAR_7;
      png_uint_32 VAR_8 = FUNC_2(VAR_4->png_ptr, VAR_5, &VAR_7, ((void*)0));

      while (VAR_8 > 0) switch (VAR_7[--VAR_8].compression)
      {
         case -1:
            VAR_6 |= VAR_1;
            break;
         case 0:
            VAR_6 |= VAR_2;
            break;
         case 1:
         case 2:
            VAR_6 |= VAR_0;
            break;
         default:
            FUNC_1(VAR_3, "%s(%s): unknown text compression %d\n", VAR_4->file,
               VAR_4->test, VAR_7[VAR_8].compression);
            FUNC_0(VAR_4);
      }
   }

   return VAR_6;
}
