
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shardId; int relationId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;


 int FUNC_0 (char**,int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

char *
FUNC_6(ShardInterval *VAR_0)
{
 Oid VAR_1 = FUNC_3(VAR_0->relationId);
 char *VAR_2 = FUNC_1(VAR_1);
 char *VAR_3 = FUNC_2(VAR_0->relationId);
 char *VAR_4 = ((void*)0);

 VAR_4 = FUNC_4(VAR_3);
 FUNC_0(&VAR_4, VAR_0->shardId);
 VAR_4 = FUNC_5(VAR_2, VAR_4);

 return VAR_4;
}
