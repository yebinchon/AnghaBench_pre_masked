
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
typedef int dlist_head ;
struct TYPE_13__ {int connections; } ;
struct TYPE_12__ {int database; int user; int port; int hostname; } ;
struct TYPE_11__ {int connectionNode; } ;
typedef TYPE_1__ MultiConnection ;
typedef TYPE_2__ ConnectionHashKey ;
typedef TYPE_3__ ConnectionHashEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char const* FUNC_0 () ;
 char const* FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,scalar_t__) ;
 TYPE_3__* FUNC_11 (int ,TYPE_2__*,int ,int*) ;
 int FUNC_12 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_13 (char const*) ;

MultiConnection *
FUNC_14(uint32 VAR_11, const char *VAR_12, int32 VAR_13, const
        char *VAR_14, const char *VAR_15)
{
 ConnectionHashKey VAR_16;
 ConnectionHashEntry *VAR_17 = ((void*)0);
 MultiConnection *VAR_18;
 bool VAR_19;


 FUNC_12(VAR_16.hostname, VAR_12, VAR_9);
 if (FUNC_13(VAR_12) > VAR_9)
 {
  FUNC_8(VAR_6, (FUNC_9(VAR_5),
      FUNC_10("hostname exceeds the maximum length of %d",
          VAR_9)));
 }

 VAR_16.port = VAR_13;
 if (VAR_14)
 {
  FUNC_12(VAR_16.user, VAR_14, VAR_10);
 }
 else
 {
  FUNC_12(VAR_16.user, FUNC_1(), VAR_10);
 }
 if (VAR_15)
 {
  FUNC_12(VAR_16.database, VAR_15, VAR_10);
 }
 else
 {
  FUNC_12(VAR_16.database, FUNC_0(), VAR_10);
 }

 if (VAR_4 == VAR_1)
 {
  VAR_4 = VAR_0;
 }







 VAR_17 = FUNC_11(VAR_3, &VAR_16, VAR_8, &VAR_19);
 if (!VAR_19)
 {
  VAR_17->connections = FUNC_3(VAR_2,
            sizeof(dlist_head));
  FUNC_6(VAR_17->connections);
 }


 if (!(VAR_11 & VAR_7))
 {

  VAR_18 = FUNC_2(VAR_17->connections, VAR_11);
  if (VAR_18)
  {
   return VAR_18;
  }
 }





 VAR_18 = FUNC_5(&VAR_16);

 FUNC_7(VAR_17->connections, &VAR_18->connectionNode);

 FUNC_4(VAR_18);

 return VAR_18;
}
