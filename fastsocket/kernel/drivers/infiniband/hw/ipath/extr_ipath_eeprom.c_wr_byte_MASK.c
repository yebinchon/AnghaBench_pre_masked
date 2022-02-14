
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int dummy; } ;


 int FUNC_0 (struct ipath_devdata*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int) ;

__attribute__((used)) static int FUNC_3(struct ipath_devdata *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
  VAR_5 = (VAR_3 >> VAR_4) & 1;
  FUNC_2(VAR_2, VAR_5);
  FUNC_1(VAR_2, VAR_0);
  FUNC_1(VAR_2, VAR_1);
 }
 return (!FUNC_0(VAR_2)) ? 1 : 0;
}
