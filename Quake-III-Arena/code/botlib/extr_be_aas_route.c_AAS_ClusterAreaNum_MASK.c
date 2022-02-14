
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* portals; TYPE_1__* areasettings; } ;
struct TYPE_5__ {int frontcluster; int* clusterareanum; } ;
struct TYPE_4__ {int cluster; int clusterareanum; } ;


 TYPE_3__ VAR_0 ;

__inline int FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_0.areasettings[VAR_2].cluster;
 if (VAR_4 > 0) return VAR_0.areasettings[VAR_2].clusterareanum;
 else
 {
  VAR_3 = VAR_0.portals[-VAR_4].frontcluster != VAR_1;
  return VAR_0.portals[-VAR_4].clusterareanum[VAR_3];
 }
}
