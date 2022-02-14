
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned long *VAR_0, u32 VAR_1)
{
 int VAR_2 = sizeof(unsigned long);

 if (!FUNC_1())
  return;






 if (VAR_1 <= 0x1fff) {
  FUNC_0(VAR_1, VAR_0 + 0x000 / VAR_2);
  FUNC_0(VAR_1, VAR_0 + 0x800 / VAR_2);
 } else if ((VAR_1 >= 0xc0000000) && (VAR_1 <= 0xc0001fff)) {
  VAR_1 &= 0x1fff;
  FUNC_0(VAR_1, VAR_0 + 0x400 / VAR_2);
  FUNC_0(VAR_1, VAR_0 + 0xc00 / VAR_2);
 }
}
