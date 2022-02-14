
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char const*,int const*,int*,int,int) ;

__attribute__((used)) static
void
FUNC_2(const unsigned char *VAR_0, const int *VAR_1, int *VAR_2, int VAR_3) {
  int VAR_4, VAR_5;
  int VAR_6;

  VAR_5 = VAR_3;
  if((VAR_3 % 2) == 0) {
    VAR_5--;
    if(VAR_0[VAR_1[VAR_2[VAR_5 / 2]]] < VAR_0[VAR_1[VAR_2[VAR_5]]]) { FUNC_0(VAR_2[VAR_5], VAR_2[VAR_5 / 2]); }
  }

  for(VAR_4 = VAR_5 / 2 - 1; 0 <= VAR_4; --VAR_4) { FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5); }
  if((VAR_3 % 2) == 0) { FUNC_0(VAR_2[0], VAR_2[VAR_5]); FUNC_1(VAR_0, VAR_1, VAR_2, 0, VAR_5); }
  for(VAR_4 = VAR_5 - 1; 0 < VAR_4; --VAR_4) {
    VAR_6 = VAR_2[0], VAR_2[0] = VAR_2[VAR_4];
    FUNC_1(VAR_0, VAR_1, VAR_2, 0, VAR_4);
    VAR_2[VAR_4] = VAR_6;
  }
}
