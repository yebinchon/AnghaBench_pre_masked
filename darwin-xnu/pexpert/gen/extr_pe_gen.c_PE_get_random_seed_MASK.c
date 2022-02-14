
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (int ,char*,void**,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 scalar_t__ VAR_0 ;

uint32_t
FUNC_2(unsigned char *VAR_1, uint32_t VAR_2)
{
 DTEntry VAR_3;
 uint32_t VAR_4 = 0;
 void *VAR_5;

        if ((FUNC_1(((void*)0), "/chosen", &VAR_3) == VAR_0)
     && (FUNC_0(VAR_3, "random-seed",
    (void **)&VAR_5, &VAR_4) == VAR_0)) {
  unsigned char *VAR_6;
  unsigned int VAR_7;
  unsigned int VAR_8 = 0;

  VAR_6 = (unsigned char *)VAR_5;

  if (VAR_4 > VAR_2) VAR_4 = VAR_2;





  for (VAR_7=0 ; VAR_7< VAR_4; VAR_7++, VAR_6++, VAR_1++) {
   *VAR_1 = *VAR_6;
   VAR_8 += *VAR_6 == (unsigned char)0;
   *VAR_6 = (unsigned char)0;
  }
  if (VAR_8 == VAR_4)

   VAR_4 = 0;
 }

 return(VAR_4);
}
