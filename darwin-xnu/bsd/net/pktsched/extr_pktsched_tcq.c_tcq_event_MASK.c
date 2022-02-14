
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcq_if {int tif_maxpri; struct tcq_class** tif_classes; int tif_ifq; } ;
struct tcq_class {int dummy; } ;
typedef int cqev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcq_if*,struct tcq_class*,int ) ;

void
FUNC_2(struct tcq_if *VAR_0, cqev_t VAR_1)
{
 struct tcq_class *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->tif_ifq);

 for (VAR_3 = 0; VAR_3 <= VAR_0->tif_maxpri; VAR_3++)
  if ((VAR_2 = VAR_0->tif_classes[VAR_3]) != ((void*)0))
   FUNC_1(VAR_0, VAR_2, VAR_1);
}
