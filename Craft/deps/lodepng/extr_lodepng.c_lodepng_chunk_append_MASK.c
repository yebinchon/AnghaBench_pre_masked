
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char*,size_t) ;

unsigned FUNC_2(unsigned char** VAR_0, size_t* VAR_1, const unsigned char* VAR_2)
{
  unsigned VAR_3;
  unsigned VAR_4 = FUNC_0(VAR_2) + 12;
  unsigned char *VAR_5, *VAR_6;
  size_t VAR_7 = (*VAR_1) + VAR_4;
  if(VAR_7 < VAR_4 || VAR_7 < (*VAR_1)) return 77;

  VAR_6 = (unsigned char*)FUNC_1(*VAR_0, VAR_7);
  if(!VAR_6) return 83;
  (*VAR_0) = VAR_6;
  (*VAR_1) = VAR_7;
  VAR_5 = &(*VAR_0)[VAR_7 - VAR_4];

  for(VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) VAR_5[VAR_3] = VAR_2[VAR_3];

  return 0;
}
