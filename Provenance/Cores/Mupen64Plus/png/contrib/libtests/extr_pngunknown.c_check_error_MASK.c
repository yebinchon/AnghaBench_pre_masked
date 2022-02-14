
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_int_32 ;
struct TYPE_4__ {char* file; char* test; int error_count; } ;
typedef TYPE_1__ display ;
struct TYPE_5__ {char* name; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(display *VAR_2, png_uint_32 VAR_3, const char *VAR_4)
{
   while (VAR_3)
   {
      png_uint_32 VAR_5 = VAR_3 & -(png_int_32)VAR_3;
      int VAR_6 = FUNC_0(VAR_5);

      FUNC_1(VAR_1, "%s(%s): chunk %s: %s\n", VAR_2->file, VAR_2->test,
         VAR_0[VAR_6].name, VAR_4);
      ++(VAR_2->error_count);

      VAR_3 &= ~VAR_5;
   }
}
