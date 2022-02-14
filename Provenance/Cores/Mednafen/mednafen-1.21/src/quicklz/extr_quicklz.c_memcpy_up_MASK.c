
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned int) ;

__attribute__((used)) static __inline void FUNC_1(unsigned char *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{



 if(VAR_2 > 8 && VAR_1 + VAR_2 < VAR_0)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
 {
  unsigned char *VAR_3 = VAR_0 + VAR_2;
  while(VAR_0 < VAR_3)
  {
   *VAR_0 = *VAR_1;
   VAR_0++;
   VAR_1++;
  }
 }
}
