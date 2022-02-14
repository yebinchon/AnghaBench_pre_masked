
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_4__ {scalar_t__ occupied; } ;
struct TYPE_5__ {TYPE_1__ outside_node; int * headnode; } ;
typedef TYPE_2__ tree_t ;
typedef scalar_t__ qboolean ;
typedef int node_t ;


 int FUNC_0 (int *,char*,int*) ;
 scalar_t__ FUNC_1 (int *,int*,int *) ;
 char* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int*,int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

qboolean FUNC_5( tree_t *VAR_6 ) {
 int VAR_7;
 vec3_t VAR_8;
 const char *VAR_9;
 qboolean VAR_10;
 node_t *VAR_11;

 VAR_11 = VAR_6->headnode;
 FUNC_4 ("--- FloodEntities ---\n");
 VAR_10 = VAR_3;
 VAR_6->outside_node.occupied = 0;

 VAR_0 = 0;
 for (VAR_7=1 ; VAR_7<VAR_2 ; VAR_7++)
 {
  FUNC_0 (&VAR_1[VAR_7], "origin", VAR_8);
  if (FUNC_3(VAR_8, VAR_5))
   continue;

  VAR_9 = FUNC_2 (&VAR_1[VAR_7], "classname");

  VAR_8[2] += 1;

  if (FUNC_1 (VAR_11, VAR_8, &VAR_1[VAR_7]))
   VAR_10 = VAR_4;
 }

 FUNC_4("%5i flooded leafs\n", VAR_0 );

 if (!VAR_10)
 {
  FUNC_4 ("no entities in open -- no filling\n");
 }
 else if (VAR_6->outside_node.occupied)
 {
  FUNC_4 ("entity reached from outside -- no filling\n");
 }

 return (qboolean)(VAR_10 && !VAR_6->outside_node.occupied);
}
