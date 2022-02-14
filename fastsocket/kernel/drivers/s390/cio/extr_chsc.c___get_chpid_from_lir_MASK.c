
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1)
{
 struct lir {
  u8 iq;
  u8 ic;
  u16 sci;

  u32 indesc[28];

  u32 andesc[28];

  u32 isinfo[28];
 } __attribute__ ((packed)) *VAR_2;

 VAR_2 = VAR_1;
 if (!(VAR_2->iq&0x80))

  return -VAR_0;
 if (!(VAR_2->indesc[0]&0xc0000000))

  return -VAR_0;
 if (!(VAR_2->indesc[0]&0x10000000))

  return -VAR_0;


 return (u16) (VAR_2->indesc[0]&0x000000ff);
}
