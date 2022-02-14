
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_5__ {int pgConn; } ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ExecStatusType ;
typedef scalar_t__ ConnStatusType ;
typedef int BatchQueryStatus ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__** VAR_6 ;
 int * FUNC_1 (TYPE_1__*,int) ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int VAR_10 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

BatchQueryStatus
FUNC_10(int32 VAR_11, void **VAR_12, int *VAR_13,
        int *VAR_14)
{
 MultiConnection *VAR_15 = ((void*)0);
 PGresult *VAR_16 = ((void*)0);
 ConnStatusType VAR_17 = VAR_5;
 ExecStatusType VAR_18 = VAR_8;
 BatchQueryStatus VAR_19 = VAR_3;
 bool VAR_20 = 1;

 FUNC_0(VAR_11 != VAR_7);
 VAR_15 = VAR_6[VAR_11];
 FUNC_0(VAR_15 != ((void*)0));


 (*VAR_12) = ((void*)0);
 (*VAR_13) = -1;
 (*VAR_14) = -1;

 VAR_17 = FUNC_6(VAR_15->pgConn);
 if (VAR_17 == VAR_4)
 {
  FUNC_8(VAR_10, (FUNC_9("could not maintain connection to worker node")));
  return VAR_2;
 }

 VAR_16 = FUNC_1(VAR_15, VAR_20);
 if (VAR_16 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_18 = FUNC_5(VAR_16);
 if (VAR_18 == VAR_9)
 {
  (*VAR_12) = (void **) VAR_16;
  (*VAR_13) = FUNC_4(VAR_16);
  (*VAR_14) = FUNC_3(VAR_16);
  VAR_19 = VAR_0;
 }
 else if (VAR_18 == VAR_8)
 {
  (*VAR_12) = (void **) VAR_16;
  VAR_19 = VAR_0;
 }
 else
 {
  FUNC_7(VAR_15, VAR_16, VAR_10);
  FUNC_2(VAR_16);
  VAR_19 = VAR_2;
 }

 return VAR_19;
}
