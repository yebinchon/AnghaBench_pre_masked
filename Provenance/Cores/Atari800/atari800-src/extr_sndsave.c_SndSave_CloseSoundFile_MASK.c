
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int * VAR_5 ;
 int FUNC_3 (int) ;

int FUNC_4(void)
{
 int VAR_6 = VAR_3;
 char VAR_7 = 0;

 if (VAR_5 != ((void*)0)) {

  if (VAR_4 & 1) {
   if (FUNC_2(0, VAR_5) == VAR_0)
    VAR_6 = VAR_1;
   else
    VAR_7 = 1;
  }

  if (VAR_6) {

   if (FUNC_1(VAR_5, 4, VAR_2) != 0)
    VAR_6 = VAR_1;
   else {



    FUNC_3(VAR_4 + 36 + VAR_7);
    if (FUNC_1(VAR_5, 40, VAR_2) != 0)
     VAR_6 = VAR_1;
    else {


     FUNC_3(VAR_4);
    }
   }
  }
  FUNC_0(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_6;
}
