
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int ) ;
 int FUNC_1 (struct ipath_devdata*,int ) ;

__attribute__((used)) static int FUNC_2(struct ipath_devdata *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = 0;

 for (VAR_3 = 7; VAR_3 >= 0; --VAR_3) {
  VAR_4 <<= 1;
  FUNC_0(VAR_2, VAR_0);
  VAR_4 |= FUNC_1(VAR_2, 0);
  FUNC_0(VAR_2, VAR_1);
 }
 return VAR_4;
}
