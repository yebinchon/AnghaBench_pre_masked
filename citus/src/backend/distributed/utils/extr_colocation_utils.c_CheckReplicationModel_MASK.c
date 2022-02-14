
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char replicationModel; } ;
typedef int Oid ;
typedef TYPE_1__ DistTableCacheEntry ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (int ) ;

void
FUNC_5(Oid VAR_1, Oid VAR_2)
{
 DistTableCacheEntry *VAR_3 = ((void*)0);
 DistTableCacheEntry *VAR_4 = ((void*)0);
 char VAR_5 = 0;
 char VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_1);
 VAR_5 = VAR_3->replicationModel;

 VAR_4 = FUNC_0(VAR_2);
 VAR_6 = VAR_4->replicationModel;

 if (VAR_5 != VAR_6)
 {
  char *VAR_7 = FUNC_4(VAR_1);
  char *VAR_8 = FUNC_4(VAR_2);

  FUNC_1(VAR_0, (FUNC_3("cannot colocate tables %s and %s",
          VAR_7, VAR_8),
      FUNC_2("Replication models don't match for %s and %s.",
          VAR_7, VAR_8)));
 }
}
