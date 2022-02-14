
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcq_if {int tif_maxpri; int tif_ifq; struct tcq_class** tif_classes; } ;
struct tcq_class {int cl_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcq_if*,struct tcq_class*,int ,int *,int *) ;

void
FUNC_5(struct tcq_if *VAR_0)
{
 struct tcq_class *VAR_1;
 int VAR_2;

 FUNC_1(VAR_0->tif_ifq);

 for (VAR_2 = 0; VAR_2 <= VAR_0->tif_maxpri; VAR_2++) {
  if ((VAR_1 = VAR_0->tif_classes[VAR_2]) != ((void*)0) && !FUNC_3(&VAR_1->cl_q))
   FUNC_4(VAR_0, VAR_1, 0, ((void*)0), ((void*)0));
 }
 FUNC_2(FUNC_0(VAR_0->tif_ifq) == 0);
}
