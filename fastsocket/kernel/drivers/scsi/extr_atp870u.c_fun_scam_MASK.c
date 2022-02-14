
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_unit {int* ioport; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned short,unsigned int) ;

__attribute__((used)) static unsigned char FUNC_2(struct atp_unit *VAR_0, unsigned short int *VAR_1)
{
 unsigned int VAR_2;
 unsigned short int VAR_3, VAR_4;
 unsigned char VAR_5;

 VAR_2 = VAR_0->ioport[0] + 0x1c;
 FUNC_1(*VAR_1, VAR_2);
FUN_D7:
 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2);
  VAR_5 = (unsigned char) (VAR_4 >> 8);
  if ((VAR_4 & 0x8000) != 0) {
   goto FUN_D7;
  }
 }
 *VAR_1 |= 0x4000;
 FUNC_1(*VAR_1, VAR_2);
 *VAR_1 &= 0xdfff;
 FUNC_1(*VAR_1, VAR_2);
FUN_D5:
 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if ((FUNC_0(VAR_2) & 0x2000) != 0) {
   goto FUN_D5;
  }
 }
 *VAR_1 |= 0x8000;
 *VAR_1 &= 0xe0ff;
 FUNC_1(*VAR_1, VAR_2);
 *VAR_1 &= 0xbfff;
 FUNC_1(*VAR_1, VAR_2);
FUN_D6:
 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if ((FUNC_0(VAR_2) & 0x4000) != 0) {
   goto FUN_D6;
  }
 }

 return VAR_5;
}
