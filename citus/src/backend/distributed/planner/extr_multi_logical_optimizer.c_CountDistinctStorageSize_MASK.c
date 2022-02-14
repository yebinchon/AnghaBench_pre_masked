
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int) ;
 double FUNC_1 (double,int) ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static int
FUNC_3(double VAR_0)
{
 double VAR_1 = FUNC_1((1.04 / VAR_0), 2);
 double VAR_2 = FUNC_0(VAR_1) / FUNC_0(2);


 int VAR_3 = (int) FUNC_2(VAR_2);
 if (VAR_3 < 4)
 {
  VAR_3 = 4;
 }
 else if (VAR_3 > 17)
 {
  VAR_3 = 17;
 }

 return VAR_3;
}
