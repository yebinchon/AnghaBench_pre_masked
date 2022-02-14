
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int text ;
struct TYPE_6__ {int varattno; } ;
typedef TYPE_1__ Var ;
struct TYPE_7__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef int ShardPlacement ;
typedef int PGresult ;
typedef int Oid ;
typedef int MultiConnection ;


 int FUNC_0 (int ) ;
 char VAR_0 ;
 int FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int const) ;
 char* FUNC_6 (int *,int ,int const) ;
 TYPE_1__* FUNC_7 (int ,int const) ;
 char FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (TYPE_2__*,int ,char*,...) ;
 int * FUNC_10 (char*) ;
 scalar_t__ VAR_4 ;
 char* FUNC_11 (int ,int ,int) ;
 TYPE_2__* FUNC_12 () ;
 int FUNC_13 (char*,char**,int ) ;
 char* FUNC_14 (char*) ;

__attribute__((used)) static bool
FUNC_15(ShardPlacement *VAR_5, Oid VAR_6, char *VAR_7,
     uint64 *VAR_8, text **VAR_9, text **VAR_10)
{
 char *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 StringInfo VAR_13 = FUNC_12();

 const uint32 VAR_14 = 1;
 char VAR_15 = FUNC_8(VAR_6);
 Var *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 StringInfo VAR_18 = FUNC_12();

 PGresult *VAR_19 = ((void*)0);
 const int VAR_20 = 0;
 const int VAR_21 = 1;

 uint64 VAR_22 = 0;
 char *VAR_23 = ((void*)0);
 char *VAR_24 = ((void*)0);
 bool VAR_25 = 0;
 bool VAR_26 = 0;

 int VAR_27 = 0;
 int VAR_28 = 0;

 MultiConnection *VAR_29 = FUNC_3(VAR_27, VAR_5,
               ((void*)0));

 *VAR_8 = 0;
 *VAR_9 = ((void*)0);
 *VAR_10 = ((void*)0);

 VAR_11 = FUNC_14(VAR_7);

 VAR_12 = FUNC_0(VAR_6);
 if (VAR_12)
 {
  FUNC_9(VAR_13, VAR_1, VAR_11);
 }
 else
 {
  FUNC_9(VAR_13, VAR_3, VAR_11);
 }

 VAR_28 = FUNC_1(VAR_29, VAR_13->data,
              &VAR_19);
 if (VAR_28 != 0)
 {
  return 0;
 }

 VAR_23 = FUNC_6(VAR_19, 0, 0);
 if (VAR_23 == ((void*)0))
 {
  FUNC_4(VAR_19);
  FUNC_2(VAR_29);
  return 0;
 }

 VAR_4 = 0;
 VAR_22 = FUNC_13(VAR_23, &VAR_24, 0);
 if (VAR_4 != 0 || (*VAR_24) != '\0')
 {
  FUNC_4(VAR_19);
  FUNC_2(VAR_29);
  return 0;
 }

 *VAR_8 = VAR_22;

 FUNC_4(VAR_19);
 FUNC_2(VAR_29);

 if (VAR_15 != VAR_0)
 {

  return 1;
 }


 VAR_16 = FUNC_7(VAR_6, VAR_14);
 VAR_17 = FUNC_11(VAR_6, VAR_16->varattno, 0);
 FUNC_9(VAR_18, VAR_2,
      VAR_17, VAR_17, VAR_7);

 VAR_28 = FUNC_1(VAR_29, VAR_18->data,
              &VAR_19);
 if (VAR_28 != 0)
 {
  return 0;
 }

 VAR_25 = FUNC_5(VAR_19, 0, VAR_20);
 VAR_26 = FUNC_5(VAR_19, 0, VAR_21);

 if (!VAR_25 && !VAR_26)
 {
  char *VAR_30 = FUNC_6(VAR_19, 0, VAR_20);
  char *VAR_31 = FUNC_6(VAR_19, 0, VAR_21);

  *VAR_9 = FUNC_10(VAR_30);
  *VAR_10 = FUNC_10(VAR_31);
 }

 FUNC_4(VAR_19);
 FUNC_2(VAR_29);

 return 1;
}
