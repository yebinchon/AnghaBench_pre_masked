
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 char VAR_2[16];
 int VAR_3 = 0;

 FUNC_0(VAR_1 > 16);
 FUNC_1(VAR_2, VAR_1);


 while (VAR_1 >= 8) {
  *((__u64 *)VAR_0) ^= *((__u64 *)(VAR_2+VAR_3));
  FUNC_2();
  VAR_3 += 8;
  VAR_1 -= 8;
 }
 FUNC_2();
}
