
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_8__ {int relationId; int shardId; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ ShardInterval ;
typedef int Oid ;
typedef int List ;


 char* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (char*) ;

List *
FUNC_9(ShardInterval *VAR_2, char *VAR_3,
      int32 VAR_4, bool VAR_5)
{
 int64 VAR_6 = VAR_2->shardId;
 char *VAR_7 = FUNC_0(VAR_2);
 List *VAR_8 = VAR_0;
 List *VAR_9 = VAR_0;
 List *VAR_10 = VAR_0;
 StringInfo VAR_11 = FUNC_7();
 Oid VAR_12 = VAR_2->relationId;

 VAR_8 = FUNC_2(VAR_12);
 VAR_8 =
  FUNC_3(VAR_8, VAR_6);

 VAR_10 = FUNC_6(VAR_10,
             VAR_8);





 if (VAR_5)
 {
  FUNC_4(VAR_11, VAR_1,
       FUNC_8(VAR_7),
       FUNC_8(VAR_7),
       FUNC_8(VAR_3),
       VAR_4);

  VAR_10 = FUNC_5(VAR_10,
             VAR_11->data);
 }

 VAR_9 = FUNC_1(VAR_12);
 VAR_9 = FUNC_3(VAR_9, VAR_6);

 VAR_10 = FUNC_6(VAR_10,
             VAR_9);

 return VAR_10;
}
