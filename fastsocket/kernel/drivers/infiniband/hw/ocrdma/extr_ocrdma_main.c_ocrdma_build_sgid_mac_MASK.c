
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subnet_prefix; } ;
union ib_gid {unsigned char* raw; TYPE_1__ global; } ;
typedef int u16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(union ib_gid *VAR_0, unsigned char *VAR_1,
      bool VAR_2, u16 VAR_3)
{
 VAR_0->global.subnet_prefix = FUNC_0(0xfe80000000000000LL);
 VAR_0->raw[8] = VAR_1[0] ^ 2;
 VAR_0->raw[9] = VAR_1[1];
 VAR_0->raw[10] = VAR_1[2];
 if (VAR_2) {
  VAR_0->raw[11] = VAR_3 >> 8;
  VAR_0->raw[12] = VAR_3 & 0xff;
 } else {
  VAR_0->raw[11] = 0xff;
  VAR_0->raw[12] = 0xfe;
 }
 VAR_0->raw[13] = VAR_1[3];
 VAR_0->raw[14] = VAR_1[4];
 VAR_0->raw[15] = VAR_1[5];
}
