
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static unsigned FUNC_0(const unsigned char* VAR_3, size_t VAR_4, size_t VAR_5)
{
  unsigned VAR_6 = 0;
  size_t VAR_7, VAR_8;
  if(VAR_5 >= VAR_4) return 0;
  VAR_7 = VAR_0;
  if(VAR_5 + VAR_7 >= VAR_4) VAR_7 = VAR_4 - VAR_5;
  for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) VAR_6 ^= (VAR_3[VAR_5 + VAR_8] << (VAR_8 * VAR_2));
  return VAR_6 % VAR_1;
}
