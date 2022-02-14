
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int ipath_flags; } ;
typedef int ipath_kreg ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_devdata const*,int ) ;
 int FUNC_1 (struct ipath_devdata const*,int ) ;

__attribute__((used)) static inline u64 FUNC_2(const struct ipath_devdata *VAR_1, ipath_kreg VAR_2)
{
 return (VAR_1->ipath_flags & VAR_0) ?
  FUNC_1(VAR_1, VAR_2) : FUNC_0(VAR_1, VAR_2);
}
