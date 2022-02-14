
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynstring {int len; int buf; } ;


 int FUNC_0 (struct dynstring*,int) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct dynstring *VAR_0, const char *VAR_1, int VAR_2)
{
   int VAR_3 = 0;

   if (!VAR_2)
      VAR_2 = FUNC_2(VAR_1);

   VAR_3 = FUNC_0(VAR_0, VAR_2 + 1);
   if (!VAR_3)
   {
      FUNC_1(VAR_0->buf, VAR_1, VAR_2 + 1);
      VAR_0->len = VAR_2;
   }

   return VAR_3;
}
