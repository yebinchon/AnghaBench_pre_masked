
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct pvscsi_ctx {TYPE_1__* sgl; } ;
struct PVSCSISGElement {scalar_t__ flags; int length; int addr; } ;
struct TYPE_2__ {struct PVSCSISGElement* sge; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_3(struct pvscsi_ctx *VAR_1,
        struct scatterlist *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;
 struct PVSCSISGElement *VAR_5;

 FUNC_0(VAR_3 > VAR_0);

 VAR_5 = &VAR_1->sgl->sge[0];
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++) {
  VAR_5[VAR_4].addr = FUNC_1(VAR_2);
  VAR_5[VAR_4].length = FUNC_2(VAR_2);
  VAR_5[VAR_4].flags = 0;
 }
}
