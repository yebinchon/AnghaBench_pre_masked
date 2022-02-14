
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0, unsigned int *VAR_1, unsigned int *VAR_2,
     unsigned int *VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_7 = 1024L;
 VAR_6 = 62L;

 VAR_8 = VAR_7 * VAR_6;
 VAR_5 = VAR_0 / VAR_8;
 if (VAR_0 % VAR_8) {
  VAR_5++;
  VAR_8 = VAR_7 * VAR_5;
  VAR_6 = VAR_0 / VAR_8;

  if (VAR_0 % VAR_8) {
   VAR_6++;
   VAR_8 = VAR_5 * VAR_6;
   VAR_7 = VAR_0 / VAR_8;
  }
 }
 if (VAR_7 == 0)
  VAR_4 = (unsigned) -1;

 *VAR_1 = (unsigned int) VAR_7;
 *VAR_3 = (unsigned int) VAR_6;
 *VAR_2 = (unsigned int) VAR_5;
 return (VAR_4);
}
