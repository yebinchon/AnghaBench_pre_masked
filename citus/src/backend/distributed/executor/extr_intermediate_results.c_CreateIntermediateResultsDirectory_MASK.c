
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static char *
FUNC_5(void)
{
 char *VAR_5 = FUNC_0();
 int VAR_6 = 0;

 if (!VAR_0)
 {
  VAR_6 = FUNC_4(VAR_5, VAR_3);
  if (VAR_6 != 0)
  {
   if (VAR_4 == VAR_1)
   {

    return VAR_5;
   }

   FUNC_1(VAR_2, (FUNC_2(),
       FUNC_3("could not create intermediate results directory "
           "\"%s\": %m",
           VAR_5)));
  }

  VAR_0 = 1;
 }

 return VAR_5;
}
