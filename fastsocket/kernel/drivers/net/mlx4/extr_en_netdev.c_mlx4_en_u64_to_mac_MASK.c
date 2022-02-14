
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_1[VAR_0 + 2], u64 VAR_2)
{
 int VAR_3;
 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; --VAR_3) {
  VAR_1[VAR_3] = VAR_2 & 0xff;
  VAR_2 >>= 8;
 }
 FUNC_0(&VAR_1[VAR_0], 0, 2);
}
