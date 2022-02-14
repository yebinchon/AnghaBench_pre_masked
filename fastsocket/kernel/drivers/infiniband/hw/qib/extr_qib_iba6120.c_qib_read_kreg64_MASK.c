
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u16 ;
struct qib_devdata {int flags; int * kregbase; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u64 FUNC_1(const struct qib_devdata *VAR_1,
      const u16 VAR_2)
{
 if (!VAR_1->kregbase || !(VAR_1->flags & VAR_0))
  return -1;

 return FUNC_0(&VAR_1->kregbase[VAR_2]);
}
