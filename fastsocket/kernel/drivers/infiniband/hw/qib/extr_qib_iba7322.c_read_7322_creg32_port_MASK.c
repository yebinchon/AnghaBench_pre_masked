
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qib_pportdata {TYPE_2__* cpspec; TYPE_1__* dd; } ;
struct TYPE_4__ {int * cpregbase; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(const struct qib_pportdata *VAR_1,
     u16 VAR_2)
{
 if (!VAR_1->cpspec || !VAR_1->cpspec->cpregbase ||
     !(VAR_1->dd->flags & VAR_0))
  return 0;
 return FUNC_0(&VAR_1->cpspec->cpregbase[VAR_2]);
}
