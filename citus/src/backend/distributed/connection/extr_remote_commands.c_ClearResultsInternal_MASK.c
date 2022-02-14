
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pgConn; } ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;


 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_7(MultiConnection *VAR_3, bool VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 while (1)
 {
  PGresult *VAR_7 = FUNC_0(VAR_3, VAR_4);
  if (VAR_7 == ((void*)0))
  {
   break;
  }





  if (FUNC_5(VAR_7) == VAR_0)
  {
   FUNC_4(VAR_3->pgConn, ((void*)0));
  }

  if (!FUNC_1(VAR_7))
  {
   if (!VAR_5)
   {
    FUNC_6(VAR_3, VAR_7, VAR_2);
   }

   FUNC_2(VAR_3, VAR_4);

   VAR_6 = 0;


   if (FUNC_5(VAR_7) == VAR_1)
   {
    FUNC_3(VAR_7);

    break;
   }
  }

  FUNC_3(VAR_7);
 }

 return VAR_6;
}
