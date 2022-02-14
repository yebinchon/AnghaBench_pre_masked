
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef size_t int32 ;
struct TYPE_6__ {int pgConn; } ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ConnStatusType ;


 size_t FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int,char const*,int ,char const*,char const*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

int32
FUNC_8(const char *VAR_12, uint32 VAR_13, const char *VAR_14,
      const char *VAR_15)
{
 MultiConnection *VAR_16 = ((void*)0);
 ConnStatusType VAR_17 = VAR_1;
 int32 VAR_18 = FUNC_0();
 int VAR_19 = VAR_6;

 if (VAR_18 == VAR_7)
 {
  FUNC_5(VAR_9, (FUNC_7("could not allocate connection in connection pool")));
  return VAR_18;
 }

 if (VAR_11 > VAR_10)
 {
  FUNC_5(VAR_5, (FUNC_6(VAR_4),
      FUNC_7("cannot open new connections after the first modification "
          "command within a transaction")));
 }


 VAR_16 = FUNC_4(VAR_19, VAR_12, VAR_13,
             VAR_15, VAR_14);
 VAR_17 = FUNC_2(VAR_16->pgConn);






 if (VAR_17 != VAR_0)
 {
  VAR_2[VAR_18] = VAR_16;
  VAR_3[VAR_18] = VAR_8;
 }
 else
 {
  FUNC_3(VAR_16, VAR_9);
  FUNC_1(VAR_16);

  VAR_18 = VAR_7;
 }

 return VAR_18;
}
