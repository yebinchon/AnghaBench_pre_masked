
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned short,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned char *VAR_8)
{
 int VAR_9;
 unsigned short VAR_10, VAR_11;
 unsigned char VAR_12[] = {
  0xfd, 0xff,
  0xdf, 0xff,
  0x7f, 0xff,
  0xff, 0xfe,
  0xff, 0xfd,
  0xff, 0xf7,
  0xff, 0xbf,
  0xff, 0x7f,
 }, *VAR_13 = VAR_12;






 unsigned short VAR_14[] = {
  0xcc04, 0xf0cf,
  0xc40c, 0xf0cf,
  0x4c0c, 0xf0cf,
  0xcc0c, 0xf0cd,
  0xcc0c, 0xf0c7,
  0xcc0c, 0xf04f,
  0xcc0c, 0xd0cf,
  0xcc0c, 0x70cf,
 }, *VAR_15 = VAR_14;


 VAR_11 = (FUNC_1(VAR_1) & (~0xcc0c));
 VAR_10 = (FUNC_1(VAR_3) & (~0xf0cf));

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {

  FUNC_3((VAR_11 | *VAR_15++), VAR_1);
  FUNC_3((VAR_10 | *VAR_15++), VAR_3);
  FUNC_4(5);


  FUNC_2(*VAR_13++, VAR_2);
  FUNC_2(*VAR_13++, VAR_4);
  FUNC_4(50);


  *VAR_8++ = FUNC_0(VAR_0);
  *VAR_8++ = FUNC_0(VAR_5);
 }

 FUNC_2(0xff, VAR_2);
 FUNC_2(0xff, VAR_4);


 FUNC_3((VAR_11 | (0x5555 & 0xcc0c)),VAR_1);
 FUNC_3((VAR_10 | (0x5555 & 0xf0cf)),VAR_3);


 *VAR_8++ = FUNC_0(VAR_6);
 *VAR_8++ = FUNC_0(VAR_7);
}
