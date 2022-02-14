
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pgConn; } ;
typedef int StringInfo ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ConnStatusType ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8(MultiConnection *VAR_1, bool *VAR_2,
        StringInfo VAR_3)
{
 bool VAR_4 = 1;
 ConnStatusType VAR_5 = FUNC_5(VAR_1->pgConn);
 int VAR_6 = 0;
 PGresult *VAR_7 = ((void*)0);
 bool VAR_8 = 0;

 *VAR_2 = 0;
 FUNC_7(VAR_3);

 if (VAR_5 == VAR_0)
 {
  FUNC_6(VAR_3, "connection lost");
  return VAR_4;
 }

 VAR_6 = FUNC_2(VAR_1->pgConn);
 if (VAR_6 == 0)
 {
  FUNC_6(VAR_3, "query result unavailable");
  return VAR_4;
 }


 if (FUNC_4(VAR_1->pgConn) != 0)
 {
  VAR_4 = 0;
  return VAR_4;
 }


 VAR_7 = FUNC_3(VAR_1->pgConn);
 VAR_8 = FUNC_0(VAR_1, VAR_7, VAR_3);
 FUNC_1(VAR_7);

 *VAR_2 = VAR_8;
 VAR_4 = 1;
 return 1;
}
