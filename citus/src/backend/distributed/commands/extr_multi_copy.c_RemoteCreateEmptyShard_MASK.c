
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int PGresult ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
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
 int FUNC_10 (char*) ;
 TYPE_1__* FUNC_11 () ;
 int VAR_4 ;
 int FUNC_12 (char*,char**,int ) ;

__attribute__((used)) static int64
FUNC_13(char *VAR_5)
{
 int64 VAR_6 = 0;
 PGresult *VAR_7 = ((void*)0);
 bool VAR_8 = 1;

 StringInfo VAR_9 = FUNC_11();
 FUNC_8(VAR_9, VAR_0, VAR_5);

 if (!FUNC_7(VAR_4, VAR_9->data))
 {
  FUNC_5(VAR_4, VAR_1);
 }
 VAR_7 = FUNC_1(VAR_4, VAR_8);
 if (FUNC_4(VAR_7) == VAR_2)
 {
  char *VAR_10 = FUNC_3((PGresult *) VAR_7, 0, 0);
  char *VAR_11 = ((void*)0);
  VAR_6 = FUNC_12(VAR_10, &VAR_11, 0);
 }
 else
 {
  FUNC_6(VAR_4, VAR_7, VAR_3);
  FUNC_9(VAR_1, (FUNC_10("could not create a new empty shard on the remote node")));
 }

 FUNC_2(VAR_7);
 VAR_7 = FUNC_1(VAR_4, VAR_8);
 FUNC_0(!VAR_7);

 return VAR_6;
}
