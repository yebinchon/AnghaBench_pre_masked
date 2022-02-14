
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
typedef int qboolean ;
typedef int node_t ;


 int FUNC_0 (int *,char*,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int*,int *) ;
 char* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;

qboolean FUNC_6 (tree_t *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 vec3_t VAR_7;
 char *VAR_8;
 qboolean VAR_9;
 node_t *VAR_10;

 VAR_10 = VAR_3->headnode;
 FUNC_1("------ FloodEntities -------\n");
 VAR_9 = 0;
 VAR_3->outside_node.occupied = 0;


 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
 {
  FUNC_0(&VAR_0[VAR_4], "origin", VAR_7);
  if (FUNC_4(VAR_7, VAR_2)) continue;

  VAR_8 = FUNC_3(&VAR_0[VAR_4], "classname");
  VAR_7[2] += 1;




  if (!FUNC_5(VAR_8, "info_player_start"))
  {
   for (VAR_5 = -16; VAR_5 <= 16; VAR_5 += 16)
   {
    for (VAR_6 = -16; VAR_6 <= 16; VAR_6 += 16)
    {
     VAR_7[0] += VAR_5;
     VAR_7[1] += VAR_6;
     if (FUNC_2(VAR_10, VAR_7, &VAR_0[VAR_4]))
     {
      VAR_9 = 1;
      VAR_5 = 999;
      break;
     }
     VAR_7[0] -= VAR_5;
     VAR_7[1] -= VAR_6;
    }
   }
  }
  else
  {
   if (FUNC_2(VAR_10, VAR_7, &VAR_0[VAR_4]))
   {
    VAR_9 = 1;
   }
  }
 }

 if (!VAR_9)
 {
  FUNC_1("WARNING: no entities inside\n");
 }
 else if (VAR_3->outside_node.occupied)
 {
  FUNC_1("WARNING: entity reached from outside\n");
 }

 return (qboolean)(VAR_9 && !VAR_3->outside_node.occupied);
}
