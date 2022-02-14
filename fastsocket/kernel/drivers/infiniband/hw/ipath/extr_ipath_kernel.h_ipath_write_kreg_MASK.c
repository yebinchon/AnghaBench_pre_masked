
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int * ipath_kregbase; } ;
typedef size_t ipath_kreg ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(const struct ipath_devdata *VAR_0,
        ipath_kreg VAR_1, u64 VAR_2)
{
 if (VAR_0->ipath_kregbase)
  FUNC_0(VAR_2, &VAR_0->ipath_kregbase[VAR_1]);
}
