
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,...) ;
 int FUNC_1 (unsigned char const*,unsigned char*,size_t,size_t,unsigned char*,unsigned char const**) ;
 size_t FUNC_2 (char*) ;
 size_t FUNC_3 (char*) ;

size_t FUNC_4(const char *VAR_1, void *VAR_2, char *VAR_3)
{

 unsigned char *VAR_4 = (unsigned char *)VAR_3 + 8 - (((size_t)VAR_3) % 8);
 size_t *VAR_5 = (size_t *)VAR_4;
 unsigned int VAR_6 = 2*((((*VAR_1) & 2) == 2) ? 4 : 1) + 1;

 unsigned char *VAR_7 = VAR_4 + 8;
 const unsigned char **VAR_8 = (const unsigned char **)(VAR_7 + VAR_0);

 size_t VAR_9 = FUNC_3((char *)VAR_1);
 size_t VAR_10 = FUNC_2((char *)VAR_1);
 if (*VAR_5 + FUNC_3((char *)VAR_1) - 1 >= VAR_0)
 {
  if((*VAR_1 & 1) == 1)
   FUNC_1((const unsigned char *)VAR_1 + VAR_6, VAR_2, VAR_9, VAR_10, (unsigned char*)VAR_2, VAR_8);
  else
   FUNC_0(VAR_2, VAR_1 + VAR_6, VAR_9);
  *VAR_5 = 0;
 }
 else
 {
  if((*VAR_1 & 1) == 1)
   FUNC_1((const unsigned char *)VAR_1 + VAR_6, VAR_7 + *VAR_5, VAR_9, VAR_10, VAR_7, VAR_8);
  else
   FUNC_0(VAR_7 + *VAR_5, VAR_1 + VAR_6, VAR_9);
  FUNC_0(VAR_2, VAR_7 + *VAR_5, VAR_9);
  *VAR_5 += VAR_9;
 }
 return VAR_9;
}
