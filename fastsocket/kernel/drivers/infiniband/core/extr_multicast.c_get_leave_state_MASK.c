
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int join_state; } ;
struct mcast_group {TYPE_1__ rec; int * members; } ;



__attribute__((used)) static u8 FUNC_0(struct mcast_group *VAR_0)
{
 u8 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  if (!VAR_0->members[VAR_2])
   VAR_1 |= (0x1 << VAR_2);

 return VAR_1 & VAR_0->rec.join_state;
}
