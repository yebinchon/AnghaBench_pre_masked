
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int numClusters; int clusterBytes; int * visibility; int vised; } ;


 TYPE_1__ VAR_0 ;

byte *FUNC_0 (int VAR_1) {
 if (VAR_1 < 0 || VAR_1 >= VAR_0.numClusters || !VAR_0.vised ) {
  return VAR_0.visibility;
 }

 return VAR_0.visibility + VAR_1 * VAR_0.clusterBytes;
}
