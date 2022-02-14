
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynstring {int len; scalar_t__ buf; } ;


 int FUNC_0 (struct dynstring*,int) ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct dynstring *VAR_0, int VAR_1, int VAR_2,
                           const char *VAR_3, int VAR_4)
{
   int VAR_5 = VAR_0->len + (VAR_4 - VAR_2);
   int VAR_6 = FUNC_0(VAR_0, VAR_5 + 1);
   if (!VAR_6)
   {
      if (VAR_2 != VAR_4)
      {

         FUNC_2(VAR_0->buf + VAR_1 + VAR_4, VAR_0->buf + VAR_1 + VAR_2,
                 VAR_0->len + 1 - (VAR_1 + VAR_2));
         VAR_0->len = VAR_5;
      }
      FUNC_1(VAR_0->buf + VAR_1, VAR_3, VAR_4);
   }
   return VAR_6;
}
