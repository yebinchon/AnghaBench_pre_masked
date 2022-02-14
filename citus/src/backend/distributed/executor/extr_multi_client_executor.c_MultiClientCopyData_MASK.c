
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef size_t int32 ;
struct TYPE_7__ {int pgConn; } ;
typedef int PGresult ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ExecStatusType ;
typedef int CopyStatus ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char**,int const) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (size_t,char*,int) ;

CopyStatus
FUNC_14(int32 VAR_11, int32 VAR_12, uint64 *VAR_13)
{
 MultiConnection *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 int VAR_17 = 0;
 const int VAR_18 = 1;
 CopyStatus VAR_19 = VAR_3;

 FUNC_0(VAR_11 != VAR_7);
 VAR_14 = VAR_4[VAR_11];
 FUNC_0(VAR_14 != ((void*)0));





 VAR_16 = FUNC_4(VAR_14->pgConn);
 if (VAR_16 == 0)
 {
  FUNC_10(VAR_9, (FUNC_12("could not read data from worker node")));
  return VAR_1;
 }


 VAR_17 = FUNC_6(VAR_14->pgConn, &VAR_15, VAR_18);
 while (VAR_17 > 0)
 {

  int VAR_20 = -1;
  VAR_10 = 0;

  if (VAR_13)
  {
   *VAR_13 += VAR_17;
  }

  VAR_20 = FUNC_13(VAR_12, VAR_15, VAR_17);
  if (VAR_20 != VAR_17)
  {

   if (VAR_10 == 0)
   {
    VAR_10 = VAR_5;
   }
   FUNC_10(VAR_6, (FUNC_11(),
       FUNC_12("could not append to copied file: %m")));
  }

  FUNC_5(VAR_15);

  VAR_17 = FUNC_6(VAR_14->pgConn, &VAR_15, VAR_18);
 }


 if (VAR_17 == 0)
 {

  VAR_19 = VAR_2;
 }
 else if (VAR_17 == -1)
 {

  bool VAR_21 = 1;
  PGresult *VAR_22 = FUNC_2(VAR_14, VAR_21);
  ExecStatusType VAR_23 = FUNC_7(VAR_22);

  if (VAR_23 == VAR_8)
  {
   VAR_19 = VAR_0;
  }
  else
  {
   VAR_19 = VAR_1;

   FUNC_9(VAR_14, VAR_22, VAR_9);
  }

  FUNC_3(VAR_22);
 }
 else if (VAR_17 == -2)
 {

  VAR_19 = VAR_1;

  FUNC_8(VAR_14, VAR_9);
 }


 if (VAR_17 < 0)
 {
  FUNC_1(VAR_14);
 }

 return VAR_19;
}
