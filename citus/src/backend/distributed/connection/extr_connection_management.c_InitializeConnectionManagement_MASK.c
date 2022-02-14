
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
struct TYPE_6__ {int keysize; int entrysize; int hcxt; int match; int hash; } ;
typedef TYPE_1__ HASHCTL ;
typedef int ConnectionHashKey ;
typedef int ConnectionHashEntry ;
typedef int ConnParamsHashEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (char*,int,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(void)
{
 HASHCTL VAR_13, VAR_14;
 uint32 VAR_15 = 0;






 VAR_4 = FUNC_0(VAR_12,
               "Connection Context",
               VAR_2,
               VAR_0,
               VAR_1);


 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.keysize = sizeof(ConnectionHashKey);
 VAR_13.entrysize = sizeof(ConnectionHashEntry);
 VAR_13.hash = VAR_7;
 VAR_13.match = VAR_6;
 VAR_13.hcxt = VAR_4;
 VAR_15 = (VAR_10 | VAR_11 | VAR_9 | VAR_8);

 FUNC_2(&VAR_14, &VAR_13, sizeof(HASHCTL));
 VAR_14.entrysize = sizeof(ConnParamsHashEntry);

 VAR_5 = FUNC_1("citus connection cache (host,port,user,database)",
         64, &VAR_13, VAR_15);

 VAR_3 = FUNC_1("citus connparams cache (host,port,user,database)",
         64, &VAR_14, VAR_15);
}
