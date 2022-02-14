
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int relationAccessMode; } ;
struct TYPE_5__ {int relationId; } ;
typedef int ShardPlacementAccessType ;
typedef TYPE_1__ RelationAccessHashKey ;
typedef TYPE_2__ RelationAccessHashEntry ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,TYPE_1__*,int ,int*) ;

__attribute__((used)) static void
FUNC_1(Oid VAR_2, ShardPlacementAccessType VAR_3)
{
 RelationAccessHashKey VAR_4;
 RelationAccessHashEntry *VAR_5;
 bool VAR_6 = 0;

 VAR_4.relationId = VAR_2;

 VAR_5 = FUNC_0(VAR_1, &VAR_4, VAR_0, &VAR_6);
 if (!VAR_6)
 {
  VAR_5->relationAccessMode = 0;
 }


 VAR_5->relationAccessMode |= (1 << (VAR_3));
}
