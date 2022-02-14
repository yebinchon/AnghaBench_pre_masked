
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_frontend {int dummy; } ;
typedef int ratio ;


 int FUNC_0 (struct dvb_frontend*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u8 VAR_3 = 0;
 u8 VAR_4 = 0;
 u8 VAR_5;

 VAR_3 = 0xb5;
 if (VAR_1 < 2000000)
  VAR_4 = 0x86;
 else if (VAR_1 < 5000000)
  VAR_4 = 0x89;
 else if (VAR_1 < 15000000)
  VAR_4 = 0x8f;
 else if (VAR_1 < 45000000)
  VAR_4 = 0x95;

 VAR_5 = 0x14;
 if (VAR_1 < 4000000)
  VAR_5 = 0x10;

 FUNC_0(VAR_0, 0x13, VAR_3);
 FUNC_0(VAR_0, 0x14, VAR_4);
 FUNC_0(VAR_0, 0x1f, (VAR_2 >> 16) & 0xff);
 FUNC_0(VAR_0, 0x20, (VAR_2 >> 8) & 0xff);
 FUNC_0(VAR_0, 0x21, (VAR_2) & 0xf0);
 FUNC_0(VAR_0, 0x0f, 0x80 | VAR_5);

 return 0;
}
