
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_flags; scalar_t__ ipath_lid; scalar_t__ ipath_kregbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct ipath_devdata *VAR_4)
{
 return VAR_4 &&
  (VAR_4->ipath_flags & VAR_3) &&
  VAR_4->ipath_kregbase &&
  VAR_4->ipath_lid &&
  !(VAR_4->ipath_flags & (VAR_1 | VAR_0
         | VAR_2));
}
