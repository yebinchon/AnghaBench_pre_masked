
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(UWORD *VAR_2)
{
 UWORD VAR_3 = 0;
 FUNC_4(VAR_2);
 while (FUNC_4(&VAR_3)) {




  if (VAR_1[*VAR_2] == VAR_0)
   FUNC_0(*VAR_2, (UBYTE) VAR_3);

  else
   FUNC_2(*VAR_2, (UBYTE) VAR_3);
  (*VAR_2)++;
  if (VAR_3 > 0xff) {




   if (VAR_1[*VAR_2] == VAR_0)
    FUNC_0(*VAR_2, (UBYTE) (VAR_3 >> 8));

   else
    FUNC_2(*VAR_2, (UBYTE) (VAR_3 >> 8));
   (*VAR_2)++;
  }
 }
}
