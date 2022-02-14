
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int int64 ;
struct TYPE_2__ {int groupId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int ShardPlacement ;
typedef int RelayFileState ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int const,int const,int ) ;
 int * FUNC_1 (int ,int ) ;
 int * VAR_2 ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;

List *
FUNC_5(Oid VAR_3, int64 VAR_4, List *VAR_5,
       int VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_3(VAR_5);
 int VAR_9 = 0;
 int VAR_10 = 0;
 List *VAR_11 = VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  int VAR_12 = (VAR_6 + VAR_9) % VAR_8;
  WorkerNode *VAR_13 = (WorkerNode *) FUNC_4(VAR_5, VAR_12);
  uint32 VAR_14 = VAR_13->groupId;
  const RelayFileState VAR_15 = VAR_0;
  const uint64 VAR_16 = 0;
  uint64 VAR_17 = 0;
  ShardPlacement *VAR_18 = ((void*)0);

  VAR_17 = FUNC_0(VAR_4, VAR_1,
               VAR_15, VAR_16, VAR_14);
  VAR_18 = FUNC_1(VAR_4, VAR_17);
  VAR_11 = FUNC_2(VAR_11, VAR_18);

  VAR_10++;
  if (VAR_10 >= VAR_7)
  {
   break;
  }
 }

 return VAR_11;
}
