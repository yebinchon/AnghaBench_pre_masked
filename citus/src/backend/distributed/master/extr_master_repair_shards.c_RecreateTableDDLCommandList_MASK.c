
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int) ;
 int * VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 char FUNC_9 (int ) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 () ;
 char* FUNC_13 (char const*,char const*) ;

__attribute__((used)) static List *
FUNC_14(Oid VAR_6)
{
 const char *VAR_7 = FUNC_7(VAR_6);
 Oid VAR_8 = FUNC_8(VAR_6);
 const char *VAR_9 = FUNC_6(VAR_8);
 const char *VAR_10 = FUNC_13(VAR_9,
                   VAR_7);

 StringInfo VAR_11 = FUNC_12();
 List *VAR_12 = VAR_4;
 List *VAR_13 = VAR_4;
 List *VAR_14 = VAR_4;
 char VAR_15 = FUNC_9(VAR_6);
 bool VAR_16 = 0;


 if (FUNC_1(VAR_6))
 {
  FUNC_2(VAR_11, VAR_1,
       VAR_10);
 }
 else if (VAR_15 == VAR_5)
 {
  FUNC_2(VAR_11, VAR_0,
       VAR_10);
 }
 else
 {
  FUNC_3(VAR_3, (FUNC_4(VAR_2),
      FUNC_5("repair target is not a regular, foreign or partitioned "
          "table")));
 }

 VAR_13 = FUNC_11(VAR_11->data);
 VAR_12 = FUNC_0(VAR_6, VAR_16);
 VAR_14 = FUNC_10(VAR_13, VAR_12);

 return VAR_14;
}
