
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcq_if {int tif_maxpri; struct tcq_class** tif_classes; int tif_ifq; } ;
struct tcq_class {scalar_t__ cl_handle; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct tcq_class *
FUNC_1(struct tcq_if *VAR_0, u_int32_t VAR_1)
{
 struct tcq_class *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->tif_ifq);

 for (VAR_3 = VAR_0->tif_maxpri; VAR_3 >= 0; VAR_3--)
  if ((VAR_2 = VAR_0->tif_classes[VAR_3]) != ((void*)0) &&
      VAR_2->cl_handle == VAR_1)
   return (VAR_2);

 return (((void*)0));
}
