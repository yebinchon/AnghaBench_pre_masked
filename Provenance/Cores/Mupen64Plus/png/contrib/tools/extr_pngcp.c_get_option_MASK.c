
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int* value; scalar_t__* entry; } ;
typedef size_t png_byte ;


 size_t FUNC_0 (struct display*,char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct display *VAR_0, const char *VAR_1, int *VAR_2)
{
   const png_byte VAR_3 = FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_1));

   if (VAR_0->entry[VAR_3])
   {
      *VAR_2 = VAR_0->value[VAR_3];
      return 1;
   }

   else
      return 0;
}
