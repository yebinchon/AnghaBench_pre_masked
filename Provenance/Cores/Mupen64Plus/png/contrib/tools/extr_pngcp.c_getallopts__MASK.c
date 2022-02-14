
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct display {int* entry; int* value; } ;
typedef size_t png_byte ;
struct TYPE_4__ {TYPE_1__* values; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (struct display*,size_t const,int ) ;
 char const* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct display*,size_t const,char const*) ;

__attribute__((used)) static int
FUNC_2(struct display *VAR_2, const png_byte VAR_3, int *VAR_4, int VAR_5)


{
   if (VAR_2->entry[VAR_3])
   {




      const char *VAR_6 = VAR_1[VAR_3].values[VAR_2->entry[VAR_3]-1].name;

      if (VAR_6 == VAR_0)
         (void)FUNC_0(VAR_2, VAR_3, 0 );

      else if (VAR_5)
         FUNC_1(VAR_2, VAR_3, VAR_6);

      *VAR_4 = VAR_2->value[VAR_3];
      return 1;
   }

   else
      return 0;
}
