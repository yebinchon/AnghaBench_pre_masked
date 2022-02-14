
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;

int FUNC_5(const char *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3, VAR_4;
 char VAR_5;
 unsigned int VAR_6[4];
 unsigned int *VAR_7 = VAR_6;

 for (;;)
    {





         VAR_2 = 0;
         VAR_3 = 10;
         if (*VAR_0 == '0')
         {
             if (*++VAR_0 == 'x' || *VAR_0 == 'X')
                 VAR_3 = 16, VAR_0++;
             else
                 VAR_3 = 8;
         }
         while ((VAR_5 = *VAR_0) != '\0')
         {
             if (FUNC_1((unsigned char) VAR_5))
             {
                 VAR_2 = (VAR_2 * VAR_3) + (VAR_5 - '0');
                 VAR_0++;
                 continue;
             }
             if (VAR_3 == 16 && FUNC_4((unsigned char) VAR_5))
             {
                 VAR_2 = (VAR_2 << 4) +
                     (VAR_5 + 10 - (FUNC_2((unsigned char) VAR_5) ? 'a' : 'A'));
                 VAR_0++;
                 continue;
             }
             break;
         }
         if (*VAR_0 == '.')
         {




             if (VAR_7 >= VAR_6 + 3 || VAR_2 > 0xff)
                 return 0;
             *VAR_7++ = VAR_2, VAR_0++;
         }
         else
             break;
     }




     while (*VAR_0)
         if (!FUNC_3((unsigned char) *VAR_0++))
             return 0;




     VAR_4 = VAR_7 - VAR_6 + 1;
     switch (VAR_4)
     {

         case 1:
             break;

         case 2:
             if (VAR_2 > 0xffffff)
                 return 0;
             VAR_2 |= VAR_6[0] << 24;
             break;

         case 3:
             if (VAR_2 > 0xffff)
                 return 0;
             VAR_2 |= (VAR_6[0] << 24) | (VAR_6[1] << 16);
             break;

         case 4:
             if (VAR_2 > 0xff)
                 return 0;
             VAR_2 |= (VAR_6[0] << 24) | (VAR_6[1] << 16) | (VAR_6[2] << 8);
             break;
     }

     *VAR_1 = FUNC_0(VAR_2);
     return 1;

}
