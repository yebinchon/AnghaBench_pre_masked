
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOHcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static DOHcode FUNC_0(unsigned char *VAR_3, size_t VAR_4,
                         unsigned int *VAR_5)
{
  unsigned char VAR_6;
  do {
    if(VAR_4 < (*VAR_5 + 1))
      return VAR_1;
    VAR_6 = VAR_3[*VAR_5];
    if((VAR_6 & 0xc0) == 0xc0) {

      if(VAR_4 < (*VAR_5 + 2))
        return VAR_1;
      *VAR_5 += 2;
      break;
    }
    if(VAR_6 & 0xc0)
      return VAR_0;
    if(VAR_4 < (*VAR_5 + 1 + VAR_6))
      return VAR_1;
    *VAR_5 += 1 + VAR_6;
  } while(VAR_6);
  return VAR_2;
}
