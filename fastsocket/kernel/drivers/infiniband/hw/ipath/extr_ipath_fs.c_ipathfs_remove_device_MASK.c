
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,struct ipath_devdata*) ;

int FUNC_1(struct ipath_devdata *VAR_1)
{
 int VAR_2;

 if (VAR_0 == ((void*)0)) {
  VAR_2 = 0;
  goto bail;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);

bail:
 return VAR_2;
}
