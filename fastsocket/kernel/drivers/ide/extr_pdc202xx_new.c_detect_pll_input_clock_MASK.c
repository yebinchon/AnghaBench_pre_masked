
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (char*,long,...) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,unsigned long) ;
 long FUNC_5 (unsigned long) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_0)
{
 struct timeval VAR_1, VAR_2;
 long VAR_3, VAR_4;
 long VAR_5, VAR_6;
 u8 VAR_7;

 VAR_3 = FUNC_5(VAR_0);
 FUNC_1(&VAR_1);


 FUNC_4(0x01, VAR_0 + 0x01);
 VAR_7 = FUNC_2(VAR_0 + 0x03);
 FUNC_0("scr1[%02X]\n", VAR_7);
 FUNC_4(VAR_7 | 0x40, VAR_0 + 0x03);


 FUNC_3(10);

 VAR_4 = FUNC_5(VAR_0);
 FUNC_1(&VAR_2);


 FUNC_4(0x01, VAR_0 + 0x01);
 VAR_7 = FUNC_2(VAR_0 + 0x03);
 FUNC_0("scr1[%02X]\n", VAR_7);
 FUNC_4(VAR_7 & ~0x40, VAR_0 + 0x03);





 VAR_6 = (VAR_2.tv_sec - VAR_1.tv_sec) * 1000000 +
  (VAR_2.tv_usec - VAR_1.tv_usec);
 VAR_5 = ((VAR_3 - VAR_4) & 0x3fffffff) / 10 *
  (10000000 / VAR_6);

 FUNC_0("start[%ld] end[%ld]\n", VAR_3, VAR_4);

 return VAR_5;
}
