
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



u_char *
FUNC_0(u_char * VAR_0, int VAR_1, u_char VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u_char *VAR_7 = VAR_0 + VAR_1;


 VAR_0++;
 VAR_4 = (*VAR_0++) & 0xf;
 VAR_0 += VAR_4;
 VAR_0++;
 VAR_5 = 0;
 VAR_6 = 0;

 while (VAR_0 < VAR_7) {
  if ((*VAR_0 & 0xf0) == 0x90) {
   VAR_5 = *VAR_0 & 0x07;
   if (!(*VAR_0 & 0x08))
    VAR_6 = VAR_5;
  }
  if (*VAR_0 & 0x80)
   VAR_0++;
  else {
   if (VAR_5 == VAR_3) {
    if (*VAR_0 == VAR_2)
                                  {
                                    if ((VAR_7 - VAR_0) < 2)
                                      return(((void*)0));
                                    if (*(VAR_0+1) > (VAR_7 - (VAR_0+2)))
                                      return(((void*)0));
                                    return (VAR_0);
                                  }

    if (*VAR_0 > VAR_2)
     return (((void*)0));
   }
   VAR_0++;
   VAR_4 = *VAR_0++;
   VAR_0 += VAR_4;
   VAR_5 = VAR_6;
  }
 }
 return (((void*)0));
}
