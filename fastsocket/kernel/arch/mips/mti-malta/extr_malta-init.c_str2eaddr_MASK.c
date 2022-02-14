
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  unsigned char VAR_3;

  if((*VAR_1 == '.') || (*VAR_1 == ':'))
   VAR_1++;
  VAR_3 = FUNC_0(*VAR_1++) << 4;
  VAR_3 |= (FUNC_0(*VAR_1++));
  VAR_0[VAR_2] = VAR_3;
 }
}
