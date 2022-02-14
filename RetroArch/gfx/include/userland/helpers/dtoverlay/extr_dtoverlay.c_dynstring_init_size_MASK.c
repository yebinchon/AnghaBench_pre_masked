
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynstring {int size; int buf; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dynstring *VAR_1, int VAR_2)
{
   if (VAR_2 < 32)
      VAR_2 = 32;
   VAR_1->size = VAR_2;
   VAR_1->len = 0;
   VAR_1->buf = FUNC_1(VAR_2);
   if (!VAR_1->buf)
   {
      FUNC_0("  out of memory");
      return -VAR_0;
   }
   return 0;
}
