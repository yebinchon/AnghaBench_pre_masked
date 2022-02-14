
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int lflags; scalar_t__ lid; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; scalar_t__ kregbase; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct qib_pportdata *VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_2->dd;

 return VAR_3 && (VAR_3->flags & VAR_1) && VAR_3->kregbase && VAR_2->lid &&
  (VAR_2->lflags & VAR_0);
}
