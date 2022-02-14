
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {TYPE_1__* world; } ;
struct TYPE_3__ {int numClusters; int clusterBytes; int const* vis; int const* novis; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static const byte *FUNC_0 (int VAR_1) {
 if (!VAR_0.world || !VAR_0.world->vis || VAR_1 < 0 || VAR_1 >= VAR_0.world->numClusters ) {
  return VAR_0.world->novis;
 }

 return VAR_0.world->vis + VAR_1 * VAR_0.world->clusterBytes;
}
