
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_5__ {int pgConn; } ;
typedef scalar_t__ PostgresPollingStatusType ;
typedef TYPE_1__ MultiConnection ;
typedef int ConnectStatus ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__* VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_13 ;

ConnectStatus
FUNC_4(int32 VAR_14)
{
 MultiConnection *VAR_15 = ((void*)0);
 PostgresPollingStatusType VAR_16 = VAR_10;
 ConnectStatus VAR_17 = VAR_5;

 FUNC_0(VAR_14 != VAR_8);
 VAR_15 = VAR_6[VAR_14];
 FUNC_0(VAR_15 != ((void*)0));

 VAR_16 = VAR_7[VAR_14];
 if (VAR_16 == VAR_10)
 {
  VAR_17 = VAR_4;
 }
 else if (VAR_16 == VAR_11)
 {
  bool VAR_18 = FUNC_1(VAR_15, VAR_11);
  if (VAR_18)
  {
   VAR_7[VAR_14] = FUNC_2(VAR_15->pgConn);
   VAR_17 = VAR_1;
  }
  else
  {
   VAR_17 = VAR_2;
  }
 }
 else if (VAR_16 == VAR_12)
 {
  bool VAR_19 = FUNC_1(VAR_15, VAR_12);
  if (VAR_19)
  {
   VAR_7[VAR_14] = FUNC_2(VAR_15->pgConn);
   VAR_17 = VAR_1;
  }
  else
  {
   VAR_17 = VAR_3;
  }
 }
 else if (VAR_16 == VAR_9)
 {
  FUNC_3(VAR_15, VAR_13);

  VAR_17 = VAR_0;
 }

 return VAR_17;
}
