
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int node_t ;
struct TYPE_2__ {int headnode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (char*,...) ;

void FUNC_3 (node_t *VAR_5)
{
 int VAR_6;

 VAR_1 = 0;
 VAR_0 = 0;

 FUNC_2 ("--- WriteBSP ---\n");

 VAR_6 = VAR_3;
 VAR_2[VAR_4].headnode = FUNC_1 (VAR_5);
 FUNC_0 (VAR_5);

 FUNC_2 ("%5i nodes with faces\n", VAR_0);
 FUNC_2 ("%5i nodes without faces\n", VAR_1);
 FUNC_2 ("%5i faces\n", VAR_3-VAR_6);
}
