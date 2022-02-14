
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = 1;
 char VAR_3 = 0;
 int VAR_4;

 if (VAR_1 > 1000000000UL) {
  VAR_2 = 100000000UL;
  VAR_3 = 'G';
 } else if (VAR_1 > 1000000UL) {
  VAR_2 = 100000UL;
  VAR_3 = 'M';
 } else if (VAR_1 > 1000UL) {
  VAR_2 = 100;
  VAR_3 = 'K';
 }

 VAR_1 /= VAR_2;
 VAR_4 = FUNC_1(VAR_0, "%ld",VAR_1);
 if (VAR_3) {
  VAR_0[VAR_4] = VAR_3;
  VAR_4++;
  VAR_0[VAR_4] = 0;
 }
 if (VAR_2 != 1) {
  FUNC_0(VAR_0 + VAR_4 - 2, VAR_0 + VAR_4 - 3, 4);
  VAR_0[VAR_4-2] = '.';
  VAR_4++;
 }
 return VAR_4;
}
