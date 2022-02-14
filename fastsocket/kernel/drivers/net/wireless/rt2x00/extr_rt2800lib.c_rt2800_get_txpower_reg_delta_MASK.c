
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int cap_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct rt2x00_dev *VAR_1,
     int VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_0, &VAR_1->cap_flags))
  return 0;
 VAR_4 = VAR_2 - VAR_3;
 return FUNC_0(VAR_4, 0);
}
