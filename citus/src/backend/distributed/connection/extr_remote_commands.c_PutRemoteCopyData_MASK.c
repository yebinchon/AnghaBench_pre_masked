
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
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int) ;
 scalar_t__ FUNC_4 (int *) ;

bool
FUNC_5(MultiConnection *VAR_2, const char *VAR_3, int VAR_4)
{
 PGconn *VAR_5 = VAR_2->pgConn;
 int VAR_6 = 0;
 bool VAR_7 = 1;

 if (FUNC_4(VAR_5) != VAR_0)
 {
  return 0;
 }

 FUNC_0(FUNC_2(VAR_5));

 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4);
 if (VAR_6 == -1)
 {
  return 0;
 }
 VAR_2->copyBytesWrittenSinceLastFlush += VAR_4;
 if (VAR_2->copyBytesWrittenSinceLastFlush > VAR_1)
 {
  VAR_2->copyBytesWrittenSinceLastFlush = 0;
  return FUNC_1(VAR_2, VAR_7);
 }

 return 1;
}
