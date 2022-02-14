
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * normal; int dist; } ;
struct TYPE_6__ {int leaf; TYPE_2__ plane; } ;
typedef TYPE_1__ vportal_t ;
typedef TYPE_2__ plane_t ;
struct TYPE_8__ {int numportals; TYPE_1__** portals; } ;
typedef TYPE_3__ leaf_t ;


 int FUNC_0 (char*,int,int ,int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(leaf_t *VAR_1)
{
 int VAR_2;
 vportal_t *VAR_3;
 plane_t VAR_4;

 for (VAR_2=0 ; VAR_2<VAR_1->numportals ; VAR_2++)
 {
  VAR_3 = VAR_1->portals[VAR_2];
  VAR_4 = VAR_3->plane;
  FUNC_0 ("portal %4i to leaf %4i : %7.1f : (%4.1f, %4.1f, %4.1f)\n",(int)(VAR_3-VAR_0),VAR_3->leaf,VAR_4.dist, VAR_4.normal[0], VAR_4.normal[1], VAR_4.normal[2]);
 }
}
