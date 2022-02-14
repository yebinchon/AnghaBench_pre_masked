
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, u_char *VAR_1, int VAR_2)
{ u_char VAR_3 = 0;
  u_char VAR_4 = 0;

  if (VAR_2 < 2) return(VAR_3);
  if (*VAR_1 == 0xA1)
   { VAR_3 = *(++VAR_1) + 2;
     if (VAR_3 > VAR_2) return(0);
     VAR_2 = VAR_3 - 2;
     if (VAR_2 < 3) return(0);
     if ((*(++VAR_1) != 0x0A) || (*(++VAR_1) != 1)) return(0);
     VAR_4 = *(++VAR_1);
     VAR_2 -= 3;
     VAR_1++;
     if (VAR_2 < 2) return(0);
     if (*VAR_1++ != 0x12) return(0);
     if (*VAR_1 > VAR_2) return(0);
     VAR_2 = *VAR_1++;
   }
  else
   if (*VAR_1 == 0x80)
    { VAR_3 = *(++VAR_1) + 2;
      if (VAR_3 > VAR_2) return(0);
      VAR_2 = VAR_3 - 2;
      VAR_1++;
    }
   else
    return(0);

  FUNC_0(VAR_0,"%d ",VAR_4);
  VAR_0 += FUNC_1(VAR_0);
  if (!VAR_2)
    *VAR_0++ = '-';
  else
   while (VAR_2--)
     *VAR_0++ = *VAR_1++;
  *VAR_0 = '\0';
  return(VAR_3);
}
