
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Var ;
struct TYPE_3__ {scalar_t__ inhRelations; int * relation; int * partbound; } ;
typedef int RangeVar ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ CreateStmt ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *,char,char*,int) ;
 char VAR_0 ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 char* FUNC_5 (scalar_t__) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8(CreateStmt *VAR_4)
{
 if (VAR_4->inhRelations != VAR_2 && VAR_4->partbound != ((void*)0))
 {
  RangeVar *VAR_5 = FUNC_6(VAR_4->inhRelations);
  bool VAR_6 = 0;
  Oid VAR_7 = FUNC_4(VAR_5, VAR_3,
            VAR_6);


  FUNC_0(FUNC_7(VAR_4->inhRelations) == 1);

  FUNC_0(VAR_7 != VAR_1);





  if (FUNC_3(VAR_7))
  {
   bool VAR_8 = 0;
   Oid VAR_9 = FUNC_4(VAR_4->relation, VAR_3,
             VAR_8);
   Var *VAR_10 = FUNC_2(VAR_7);
   char VAR_11 = VAR_0;
   char *VAR_12 = FUNC_5(VAR_7);
   bool VAR_13 = 0;

   FUNC_1(VAR_9, VAR_10,
           VAR_11, VAR_12,
           VAR_13);
  }
 }
}
