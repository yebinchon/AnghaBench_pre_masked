
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {int pgConn; } ;
typedef int StringInfo ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int,char*,scalar_t__) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ,char*,char*,int) ;

__attribute__((used)) static bool
FUNC_8(char *VAR_2, uint32 VAR_3, char *VAR_4,
       StringInfo VAR_5)
{
 int VAR_6 = VAR_1;
 MultiConnection *VAR_7 =
  FUNC_2(VAR_6, VAR_2, VAR_3);
 bool VAR_8 = 0;
 PGresult *VAR_9 = ((void*)0);
 bool VAR_10 = 1;

 if (FUNC_5(VAR_7->pgConn) != VAR_0)
 {
  FUNC_7(VAR_5, "failed to connect to %s:%d", VAR_2,
       (int) VAR_3);
  return 0;
 }

 FUNC_6(VAR_7, VAR_4);
 VAR_9 = FUNC_3(VAR_7, VAR_10);
 VAR_8 = FUNC_1(VAR_7, VAR_9, VAR_5);

 FUNC_4(VAR_9);


 FUNC_0(VAR_7);

 return VAR_8;
}
