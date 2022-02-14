
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(__u16 VAR_0, __u8 VAR_1)
{
 __u8 VAR_2 = VAR_1;

 int VAR_3;

 FUNC_1(VAR_0, 0, 1);

 FUNC_3(2);
 FUNC_0(VAR_0, 1);
 FUNC_3(1);

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {

  if ((VAR_2 >> VAR_3) & 0x01) {
   FUNC_1(VAR_0, 0, 1);
  } else {
   FUNC_1(VAR_0, 0, 0);
  }
  FUNC_3(2);
  FUNC_2(1);
  FUNC_0(VAR_0, 1);
  FUNC_3(1);
 }
}
