
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {scalar_t__ usercount; int v; } ;
struct TYPE_3__ {int numvertexes; TYPE_2__* vertexes; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_1 ;

int FUNC_3(vec3_t VAR_2)
{
 if (VAR_1.numvertexes == 0) VAR_1.numvertexes = 1;
 if (VAR_1.numvertexes >= VAR_0)
  FUNC_0("MAX_TH_VERTEXES");
 FUNC_2(VAR_2, VAR_1.vertexes[VAR_1.numvertexes].v);
 VAR_1.vertexes[VAR_1.numvertexes].usercount = 0;
 FUNC_1(&VAR_1.vertexes[VAR_1.numvertexes]);
 VAR_1.numvertexes++;
 return VAR_1.numvertexes-1;
}
