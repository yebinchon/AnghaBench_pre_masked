
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct byte4 {char* s; unsigned int n; } ;


 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, unsigned long VAR_1, size_t VAR_2) {
 union byte4 {
  char s[4];
  unsigned int n;
 } VAR_3;

 while (VAR_2 >= 4) {
  VAR_2 -= 4;
  VAR_3.n = FUNC_0(VAR_1);
  FUNC_1(VAR_0, VAR_3.s, 4);
  VAR_1 += 4;
  VAR_0 += 4;
 }
}
