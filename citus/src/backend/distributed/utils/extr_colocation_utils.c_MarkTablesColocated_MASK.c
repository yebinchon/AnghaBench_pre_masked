
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_3__ {int vartype; } ;
typedef TYPE_1__ Var ;
typedef int * Relation ;
typedef int Oid ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(Oid VAR_4, Oid VAR_5)
{
 uint32 VAR_6 = VAR_1;
 uint32 VAR_7 = VAR_1;
 Relation VAR_8 = ((void*)0);

 FUNC_1(VAR_4, VAR_5);
 FUNC_0(VAR_4, VAR_5);






 VAR_8 = FUNC_12(FUNC_4(), VAR_0);


 FUNC_6(VAR_4, VAR_5);





 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6 == VAR_1)
 {
  uint32 VAR_9 = FUNC_7(VAR_4);
  uint32 VAR_10 = FUNC_9(VAR_4);

  Var *VAR_11 = FUNC_5(VAR_4);
  Oid VAR_12 = VAR_2;


  if (VAR_11 != ((void*)0))
  {
   VAR_12 = VAR_11->vartype;
  }

  VAR_6 = FUNC_2(VAR_9, VAR_10,
               VAR_12);
  FUNC_10(VAR_4, VAR_6);
 }

 VAR_7 = FUNC_8(VAR_5);


 FUNC_10(VAR_5, VAR_6);


 FUNC_3(VAR_7);

 FUNC_11(VAR_8, VAR_3);
}
