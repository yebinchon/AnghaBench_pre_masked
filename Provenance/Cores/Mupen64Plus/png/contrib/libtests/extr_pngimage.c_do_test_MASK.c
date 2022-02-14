
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int error_return; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct display*,int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct display*,char const*) ;

__attribute__((used)) static int
FUNC_3(struct display *VAR_2, const char *VAR_3)

{
   int VAR_4 = FUNC_1(VAR_2->error_return);

   if (VAR_4 == 0)
   {
      FUNC_2(VAR_2, VAR_3);
      return 0;
   }

   else if (VAR_4 < VAR_0)
      FUNC_0(VAR_2, VAR_1, "unexpected return code %d", VAR_4);

   return VAR_4;
}
