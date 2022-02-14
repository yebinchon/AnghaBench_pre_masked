
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 if (!FUNC_0(VAR_6))
  return -VAR_0;

 FUNC_2(&VAR_4);

 VAR_7 = FUNC_1(VAR_3 + VAR_1) & VAR_2;
 VAR_7 |= (128 / VAR_6)-1;

 FUNC_4(VAR_7, VAR_3 + VAR_1);
 FUNC_3(&VAR_4);

 return 0;
}
