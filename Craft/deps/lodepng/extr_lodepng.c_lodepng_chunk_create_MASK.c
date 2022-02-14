
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,unsigned int) ;

unsigned FUNC_3(unsigned char** VAR_0, size_t* VAR_1, unsigned VAR_2,
                              const char* VAR_3, const unsigned char* VAR_4)
{
  unsigned VAR_5;
  unsigned char *VAR_6, *VAR_7;
  size_t VAR_8 = (*VAR_1) + VAR_2 + 12;
  if(VAR_8 < VAR_2 + 12 || VAR_8 < (*VAR_1)) return 77;
  VAR_7 = (unsigned char*)FUNC_1(*VAR_0, VAR_8);
  if(!VAR_7) return 83;
  (*VAR_0) = VAR_7;
  (*VAR_1) = VAR_8;
  VAR_6 = &(*VAR_0)[(*VAR_1) - VAR_2 - 12];


  FUNC_2(VAR_6, (unsigned)VAR_2);


  VAR_6[4] = VAR_3[0];
  VAR_6[5] = VAR_3[1];
  VAR_6[6] = VAR_3[2];
  VAR_6[7] = VAR_3[3];


  for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) VAR_6[8 + VAR_5] = VAR_4[VAR_5];


  FUNC_0(VAR_6);

  return 0;
}
