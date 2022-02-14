
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int ipath_flags; } ;
typedef int ipath_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (struct ipath_devdata*) ;

__attribute__((used)) static u64 FUNC_2(struct ipath_devdata *VAR_2, ipath_err_t VAR_3)
{
 u64 VAR_4 = 0;

 FUNC_1(VAR_2);
 if ((VAR_3 & VAR_0) &&
     !(VAR_2->ipath_flags & VAR_1)) {







  FUNC_0("Ignoring packet errors %llx, because link not "
     "ACTIVE\n", (unsigned long long) VAR_3);
  VAR_4 = VAR_3 & VAR_0;
 }

 return VAR_4;
}
