
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* relname; char* schemaname; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ RangeVar ;
typedef int PGresult ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*,int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,...) ;
 TYPE_1__* FUNC_11 () ;
 int VAR_4 ;
 char* FUNC_12 (char*,char*) ;

__attribute__((used)) static char
FUNC_13(RangeVar *VAR_5)
{
 char VAR_6 = '\0';
 PGresult *VAR_7 = ((void*)0);
 bool VAR_8 = 1;

 char *VAR_9 = VAR_5->relname;
 char *VAR_10 = VAR_5->schemaname;
 char *VAR_11 = FUNC_12(VAR_10, VAR_9);

 StringInfo VAR_12 = FUNC_11();
 FUNC_8(VAR_12, VAR_1, VAR_11);

 if (!FUNC_7(VAR_4, VAR_12->data))
 {
  FUNC_5(VAR_4, VAR_0);
 }
 VAR_7 = FUNC_1(VAR_4, VAR_8);
 if (FUNC_4(VAR_7) == VAR_2)
 {
  char *VAR_13 = FUNC_3((PGresult *) VAR_7, 0, 0);
  if (VAR_13 == ((void*)0) || (*VAR_13) == '\0')
  {
   FUNC_9(VAR_0, (FUNC_10("could not find a partition method for the "
           "table %s", VAR_9)));
  }

  VAR_6 = VAR_13[0];
 }
 else
 {
  FUNC_6(VAR_4, VAR_7, VAR_3);
  FUNC_9(VAR_0, (FUNC_10("could not get the partition method of the "
          "distributed table")));
 }

 FUNC_2(VAR_7);

 VAR_7 = FUNC_1(VAR_4, VAR_8);
 FUNC_0(!VAR_7);

 return VAR_6;
}
