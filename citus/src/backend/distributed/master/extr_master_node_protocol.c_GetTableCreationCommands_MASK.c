
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addCatalog; void* schemas; } ;
typedef TYPE_1__ OverrideSearchPath ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 char VAR_2 ;
 char* FUNC_3 (int ) ;
 char FUNC_4 (int ) ;
 int * FUNC_5 (int *,char*) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (int ,int) ;

List *
FUNC_10(Oid VAR_3, bool VAR_4)
{
 List *VAR_5 = VAR_1;
 char VAR_6 = 0;
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);






 OverrideSearchPath *VAR_10 = FUNC_0(VAR_0);
 VAR_10->schemas = VAR_1;
 VAR_10->addCatalog = 1;
 FUNC_2(VAR_10);


 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 == VAR_2)
 {
  char *VAR_11 = FUNC_6(VAR_3);
  char *VAR_12 = FUNC_7(VAR_3);

  if (VAR_11 != ((void*)0))
  {
   VAR_5 = FUNC_5(VAR_5, VAR_11);
  }
  VAR_5 = FUNC_5(VAR_5, VAR_12);
 }


 VAR_7 = FUNC_9(VAR_3, VAR_4);
 VAR_8 = FUNC_8(VAR_3);

 VAR_5 = FUNC_5(VAR_5, VAR_7);
 if (VAR_8 != ((void*)0))
 {
  VAR_5 = FUNC_5(VAR_5, VAR_8);
 }

 VAR_9 = FUNC_3(VAR_3);
 if (VAR_9 != ((void*)0))
 {
  VAR_5 = FUNC_5(VAR_5, VAR_9);
 }


 FUNC_1();

 return VAR_5;
}
