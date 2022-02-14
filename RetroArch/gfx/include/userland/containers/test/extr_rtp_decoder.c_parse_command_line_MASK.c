
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(int VAR_5, char **VAR_6)
{
   int VAR_7 = 1;

   while (VAR_7 < VAR_5)
   {
      if (*VAR_6[VAR_7] != '-')
         break;

      switch (VAR_6[VAR_7][1])
      {
      case 'h':
         VAR_0 = 1;
         break;
      case 's':
         VAR_7++;
         if (VAR_7 >= VAR_5)
            break;
         VAR_1 = VAR_6[VAR_7];
         VAR_2 = (FUNC_1(VAR_1, "pktfile:", 8) == 0);
         break;
      case 'v':
         {
            const char *VAR_8 = &VAR_6[VAR_7][2];

            VAR_4 = 1;
            while (*VAR_8++ == 'v')
               VAR_4++;
         }
         break;
      default: FUNC_0(((void*)0), "Unrecognised option: %s", VAR_6[VAR_7]); return;
      }

      VAR_7++;
   }

   if (VAR_7 < VAR_5)
      VAR_3 = VAR_6[VAR_7];
}
