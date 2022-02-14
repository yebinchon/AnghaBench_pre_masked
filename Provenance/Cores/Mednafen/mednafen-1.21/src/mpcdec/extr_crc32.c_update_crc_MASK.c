
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_2, unsigned char *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = VAR_2;
 int VAR_6;

 if (!VAR_1)
  FUNC_0();
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = VAR_0[(VAR_5 ^ VAR_3[VAR_6]) & 0xff] ^ (VAR_5 >> 8);
 }
 return VAR_5;
}
