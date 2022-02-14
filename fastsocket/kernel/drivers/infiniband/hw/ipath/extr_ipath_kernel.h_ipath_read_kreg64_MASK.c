
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int ipath_flags; int * ipath_kregbase; } ;
typedef size_t ipath_kreg ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u64 FUNC_1(const struct ipath_devdata *VAR_1,
        ipath_kreg VAR_2)
{
 if (!VAR_1->ipath_kregbase || !(VAR_1->ipath_flags & VAR_0))
  return -1;

 return FUNC_0(&VAR_1->ipath_kregbase[VAR_2]);
}
