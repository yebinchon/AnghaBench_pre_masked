
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int result ;


 unsigned char FUNC_0 (char*) ;

__attribute__((used)) static inline unsigned long FUNC_1(char *VAR_0, int *VAR_1)
{
 unsigned char VAR_2;
 int VAR_3, VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = 0;
 VAR_4 = 0;
 VAR_6 = 0;

 while (1) {
  VAR_2 = FUNC_0(VAR_0);
  VAR_0++;
  VAR_3 |= (VAR_2 & 0x7f) << VAR_4;
  VAR_4 += 7;
  VAR_6++;

  if (!(VAR_2 & 0x80))
   break;
 }


 VAR_5 = 8 * sizeof(VAR_3);

 if ((VAR_4 < VAR_5) && (VAR_2 & 0x40))
  VAR_3 |= (-1 << VAR_4);

 *VAR_1 = VAR_3;

 return VAR_6;
}
