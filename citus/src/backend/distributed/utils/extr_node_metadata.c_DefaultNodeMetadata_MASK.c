
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shouldHaveShards; int groupId; int nodeRack; } ;
typedef TYPE_1__ NodeMetadata ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NodeMetadata
FUNC_0()
{
 NodeMetadata VAR_2 = {
  .nodeRack = VAR_1,
  .shouldHaveShards = 1,
  .groupId = VAR_0,
 };
 return VAR_2;
}
