
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LodePNGColorType ;


 unsigned int FUNC_0 (unsigned char**,unsigned int*,unsigned int*,unsigned char*,size_t,int ,unsigned int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned int FUNC_2 (unsigned char**,size_t*,char const*) ;

unsigned FUNC_3(unsigned char** VAR_0, unsigned* VAR_1, unsigned* VAR_2, const char* VAR_3,
                             LodePNGColorType VAR_4, unsigned VAR_5)
{
  unsigned char* VAR_6;
  size_t VAR_7;
  unsigned VAR_8;
  VAR_8 = FUNC_2(&VAR_6, &VAR_7, VAR_3);
  if(!VAR_8) VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_7, VAR_4, VAR_5);
  FUNC_1(VAR_6);
  return VAR_8;
}
