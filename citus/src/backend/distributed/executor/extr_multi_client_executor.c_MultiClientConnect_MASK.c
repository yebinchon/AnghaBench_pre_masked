
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
 TYPE_1__** VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int,char const*,int ,char const*,char const*) ;
 size_t VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

int32
FUNC_8(const char *VAR_9, uint32 VAR_10, const char *VAR_11,
       const char *VAR_12)
{
 MultiConnection *VAR_13 = ((void*)0);
 ConnStatusType VAR_14 = VAR_0;
 int32 VAR_15 = FUNC_0();
 int VAR_16 = VAR_4;

 if (VAR_15 == VAR_5)
 {
  FUNC_5(VAR_6, (FUNC_7("could not allocate connection in connection pool")));
  return VAR_15;
 }

 if (VAR_8 > VAR_7)
 {
  FUNC_5(VAR_3, (FUNC_6(VAR_2),
      FUNC_7("cannot open new connections after the first modification "
          "command within a transaction")));
 }


 VAR_13 = FUNC_2(VAR_16, VAR_9, VAR_10,
              VAR_12, VAR_11);

 VAR_14 = FUNC_3(VAR_13->pgConn);

 if (VAR_14 == VAR_0)
 {
  VAR_1[VAR_15] = VAR_13;
 }
 else
 {
  FUNC_4(VAR_13, VAR_6);
  FUNC_1(VAR_13);
  VAR_15 = VAR_5;
 }

 return VAR_15;
}
