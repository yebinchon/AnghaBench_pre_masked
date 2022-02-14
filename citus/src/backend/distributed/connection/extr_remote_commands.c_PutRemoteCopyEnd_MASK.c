
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ copyBytesWrittenSinceLastFlush; int * pgConn; } ;
typedef int PGconn ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *) ;

bool
FUNC_5(MultiConnection *VAR_1, const char *VAR_2)
{
 PGconn *VAR_3 = VAR_1->pgConn;
 int VAR_4 = 0;
 bool VAR_5 = 1;

 if (FUNC_4(VAR_3) != VAR_0)
 {
  return 0;
 }

 FUNC_0(FUNC_2(VAR_3));

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (VAR_4 == -1)
 {
  return 0;
 }



 VAR_1->copyBytesWrittenSinceLastFlush = 0;

 return FUNC_1(VAR_1, VAR_5);
}
