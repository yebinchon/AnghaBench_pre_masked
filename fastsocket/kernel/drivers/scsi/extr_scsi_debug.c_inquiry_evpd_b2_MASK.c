
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_3)
{
 FUNC_0(VAR_3, 0, 0x8);
 VAR_3[0] = 0;

 if (VAR_0)
  VAR_3[1] = 1 << 7;

 if (VAR_1)
  VAR_3[1] |= 1 << 6;

 if (VAR_2)
  VAR_3[1] |= 1 << 5;

 return 0x8;
}
