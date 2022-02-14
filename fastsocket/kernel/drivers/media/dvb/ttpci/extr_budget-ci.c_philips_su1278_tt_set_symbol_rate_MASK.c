
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {int dummy; } ;
typedef int ratio ;


 int FUNC_0 (struct dvb_frontend*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0, 0x0e, 0x44);
 if (VAR_1 >= 10000000) {
  FUNC_0(VAR_0, 0x13, 0x97);
  FUNC_0(VAR_0, 0x14, 0x95);
  FUNC_0(VAR_0, 0x15, 0xc9);
  FUNC_0(VAR_0, 0x17, 0x8c);
  FUNC_0(VAR_0, 0x1a, 0xfe);
  FUNC_0(VAR_0, 0x1c, 0x7f);
  FUNC_0(VAR_0, 0x2d, 0x09);
 } else {
  FUNC_0(VAR_0, 0x13, 0x99);
  FUNC_0(VAR_0, 0x14, 0x8d);
  FUNC_0(VAR_0, 0x15, 0xce);
  FUNC_0(VAR_0, 0x17, 0x43);
  FUNC_0(VAR_0, 0x1a, 0x1d);
  FUNC_0(VAR_0, 0x1c, 0x12);
  FUNC_0(VAR_0, 0x2d, 0x05);
 }
 FUNC_0(VAR_0, 0x0e, 0x23);
 FUNC_0(VAR_0, 0x0f, 0x94);
 FUNC_0(VAR_0, 0x10, 0x39);
 FUNC_0(VAR_0, 0x15, 0xc9);

 FUNC_0(VAR_0, 0x1f, (VAR_2 >> 16) & 0xff);
 FUNC_0(VAR_0, 0x20, (VAR_2 >> 8) & 0xff);
 FUNC_0(VAR_0, 0x21, (VAR_2) & 0xf0);

 return 0;
}
