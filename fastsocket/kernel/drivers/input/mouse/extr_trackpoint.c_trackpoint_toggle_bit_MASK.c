
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned char) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_1 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ps2dev *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{

 if (VAR_3 < 0x20 || VAR_3 >= 0x2F)
  return -1;

 if (FUNC_1(VAR_2, ((void*)0), FUNC_0(0, 0, VAR_0)) ||
     FUNC_1(VAR_2, ((void*)0), FUNC_0(0, 0, VAR_1)) ||
     FUNC_1(VAR_2, ((void*)0), FUNC_0(0, 0, VAR_3)) ||
     FUNC_1(VAR_2, ((void*)0), FUNC_0(0, 0, VAR_4))) {
  return -1;
 }

 return 0;
}
