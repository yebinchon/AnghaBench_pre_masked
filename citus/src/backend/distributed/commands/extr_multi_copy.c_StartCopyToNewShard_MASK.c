
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_10__ {TYPE_1__* relation; } ;
struct TYPE_9__ {int connectionList; int shardId; } ;
struct TYPE_8__ {char* relname; char* schemaname; } ;
typedef TYPE_2__ ShardConnections ;
typedef TYPE_3__ CopyStmt ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int,int) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static int64
FUNC_3(ShardConnections *VAR_1, CopyStmt *VAR_2,
     bool VAR_3)
{
 char *VAR_4 = VAR_2->relation->relname;
 char *VAR_5 = VAR_2->relation->schemaname;
 char *VAR_6 = FUNC_2(VAR_5, VAR_4);
 int64 VAR_7 = FUNC_0(VAR_6);
 bool VAR_8 = 1;

 VAR_1->shardId = VAR_7;

 VAR_1->connectionList = VAR_0;


 FUNC_1(VAR_2, VAR_1, VAR_8,
         VAR_3);

 return VAR_7;
}
