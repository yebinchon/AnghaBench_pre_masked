
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_3__ {int pgConn; } ;
typedef int ResultStatus ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ConnStatusType ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__** VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

ResultStatus
FUNC_6(int32 VAR_9)
{
 MultiConnection *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 ConnStatusType VAR_12 = VAR_5;
 ResultStatus VAR_13 = VAR_0;

 FUNC_0(VAR_9 != VAR_7);
 VAR_10 = VAR_6[VAR_9];
 FUNC_0(VAR_10 != ((void*)0));

 VAR_12 = FUNC_3(VAR_10->pgConn);
 if (VAR_12 == VAR_4)
 {
  FUNC_4(VAR_8, (FUNC_5("could not maintain connection to worker node")));
  return VAR_3;
 }


 VAR_11 = FUNC_1(VAR_10->pgConn);
 if (VAR_11 != 0)
 {
  int VAR_14 = FUNC_2(VAR_10->pgConn);
  if (VAR_14 == 0)
  {
   VAR_13 = VAR_2;
  }
  else
  {
   VAR_13 = VAR_1;
  }
 }
 else
 {
  FUNC_4(VAR_8, (FUNC_5("could not consume data from worker node")));
  VAR_13 = VAR_3;
 }

 return VAR_13;
}
