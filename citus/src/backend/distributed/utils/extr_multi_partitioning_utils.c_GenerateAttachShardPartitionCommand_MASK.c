
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_8__ {scalar_t__ relationId; int shardId; } ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ ShardInterval ;
typedef scalar_t__ Oid ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int ,char*,int ,char*,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 TYPE_1__* FUNC_11 () ;
 char* FUNC_12 (char*) ;

char *
FUNC_13(ShardInterval *VAR_5)
{
 Oid VAR_6 = FUNC_10(VAR_5->relationId);
 char *VAR_7 = FUNC_9(VAR_6);
 char *VAR_8 = FUNC_12(VAR_7);

 char *VAR_9 = FUNC_1(VAR_5->relationId);
 char *VAR_10 = FUNC_12(VAR_9);
 int VAR_11 = FUNC_3(VAR_5);

 Oid VAR_12 = VAR_3;
 char *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 uint64 VAR_15 = VAR_2;

 StringInfo VAR_16 = FUNC_11();

 Oid VAR_17 = FUNC_2(VAR_5->relationId);
 if (VAR_17 == VAR_3)
 {
  FUNC_5(VAR_1, (FUNC_6(VAR_0),
      FUNC_8("cannot attach partition"),
      FUNC_7("Referenced relation cannot be found.")));
 }

 VAR_12 = FUNC_10(VAR_17);
 VAR_13 = FUNC_9(VAR_12);
 VAR_14 = FUNC_12(VAR_13);
 VAR_15 = FUNC_0(VAR_17, VAR_11);

 FUNC_4(VAR_16,
      VAR_4, VAR_15,
      VAR_14, VAR_5->shardId,
      VAR_8, VAR_10);

 return VAR_16->data;
}
