
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addCatalog; int schemas; } ;
typedef int RegProcedure ;
typedef TYPE_1__ OverrideSearchPath ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (int const,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int const) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int const) ;
 int VAR_3 ;

char *
FUNC_8(const RegProcedure VAR_4, bool VAR_5)
{
 OverrideSearchPath *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);

 if (FUNC_7(VAR_4) == VAR_2)
 {
  VAR_7 = FUNC_1(VAR_4, VAR_5);
 }
 else
 {
  Datum VAR_8 = (Datum) 0;






  VAR_6 = FUNC_2(VAR_0);
  VAR_6->schemas = VAR_1;
  VAR_6->addCatalog = 1;

  FUNC_5(VAR_6);
  VAR_8 = FUNC_0(VAR_3,
             FUNC_3(VAR_4));
  VAR_7 = FUNC_6(VAR_8);


  FUNC_4();
 }

 return VAR_7;
}
