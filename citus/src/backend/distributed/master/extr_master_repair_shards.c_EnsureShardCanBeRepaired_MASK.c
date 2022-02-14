
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_3__ {scalar_t__ shardState; } ;
typedef TYPE_1__ ShardPlacement ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int *,char*,int ,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int64 VAR_4, char *VAR_5, int32 VAR_6,
       char *VAR_7, int32 VAR_8)
{
 List *VAR_9 = FUNC_1(VAR_4);
 ShardPlacement *VAR_10 = ((void*)0);
 ShardPlacement *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 bool VAR_13 = 0;

 VAR_10 = FUNC_0(VAR_9, VAR_5,
             VAR_6, VAR_12);
 if (VAR_10->shardState != VAR_2)
 {
  FUNC_2(VAR_1, (FUNC_3(VAR_0),
      FUNC_4("source placement must be in finalized state")));
 }

 VAR_11 = FUNC_0(VAR_9, VAR_7,
             VAR_8, VAR_13);
 if (VAR_11->shardState != VAR_3)
 {
  FUNC_2(VAR_1, (FUNC_3(VAR_0),
      FUNC_4("target placement must be in inactive state")));
 }
}
