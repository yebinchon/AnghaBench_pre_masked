
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int relationAccessMode; } ;
struct TYPE_5__ {int relationId; } ;
typedef int ShardPlacementAccessType ;
typedef int RelationAccessMode ;
typedef TYPE_1__ RelationAccessHashKey ;
typedef TYPE_2__ RelationAccessHashEntry ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,TYPE_1__*,int ,int*) ;

__attribute__((used)) static RelationAccessMode
FUNC_2(Oid VAR_6, ShardPlacementAccessType VAR_7)
{
 RelationAccessHashKey VAR_8;
 RelationAccessHashEntry *VAR_9;
 int VAR_10 = 0;
 bool VAR_11 = 0;
 int VAR_12 = VAR_7 + VAR_1;


 if (!FUNC_0())
 {
  return VAR_2;
 }

 VAR_8.relationId = VAR_6;

 VAR_9 = FUNC_1(VAR_5, &VAR_8, VAR_0, &VAR_11);
 if (!VAR_11)
 {

  return VAR_2;
 }


 VAR_10 = VAR_9->relationAccessMode;
 if (!(VAR_10 & (1 << VAR_7)))
 {

  return VAR_2;
 }

 if (VAR_10 & (1 << VAR_12))
 {
  return VAR_3;
 }
 else
 {
  return VAR_4;
 }
}
