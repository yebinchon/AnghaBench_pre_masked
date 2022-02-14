
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct device *VAR_0)
{
 unsigned int VAR_1 = FUNC_1(FUNC_0(0xca000000) + 4);
 FUNC_2(8, FUNC_0(0xcb000000) + 8);

 return VAR_1 & 8;
}
