
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_user_info {int dummy; } ;
struct ipath_devdata {int ipath_cfgports; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipath_devdata* FUNC_0 (int) ;
 int FUNC_1 (struct ipath_devdata*,int,struct file*,struct ipath_user_info const*) ;
 int FUNC_2 (struct ipath_devdata*) ;

__attribute__((used)) static int FUNC_3(int VAR_3, struct file *VAR_4,
     const struct ipath_user_info *VAR_5)
{
 struct ipath_devdata *VAR_6 = FUNC_0(VAR_3);
 int VAR_7, VAR_8;

 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto bail;
 }

 if (!FUNC_2(VAR_6)) {
  VAR_7 = -VAR_1;
  goto bail;
 }

 for (VAR_8 = 1; VAR_8 < VAR_6->ipath_cfgports; VAR_8++) {
  VAR_7 = FUNC_1(VAR_6, VAR_8, VAR_4, VAR_5);
  if (VAR_7 != -VAR_0)
   goto bail;
 }
 VAR_7 = -VAR_0;

bail:
 return VAR_7;
}
