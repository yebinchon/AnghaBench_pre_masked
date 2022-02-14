
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct qfq_if {int qif_maxclasses; struct qfq_class** qif_class_tbl; int qif_ifq; } ;
struct qfq_class {int cl_handle; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct qfq_class *
FUNC_1(struct qfq_if *VAR_0, u_int32_t VAR_1)
{
 struct qfq_class *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->qif_ifq);





 VAR_3 = VAR_1 % VAR_0->qif_maxclasses;
 if ((VAR_2 = VAR_0->qif_class_tbl[VAR_3]) != ((void*)0) && VAR_2->cl_handle == VAR_1)
  return (VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->qif_maxclasses; VAR_3++)
  if ((VAR_2 = VAR_0->qif_class_tbl[VAR_3]) != ((void*)0) &&
      VAR_2->cl_handle == VAR_1)
   return (VAR_2);

 return (((void*)0));
}
