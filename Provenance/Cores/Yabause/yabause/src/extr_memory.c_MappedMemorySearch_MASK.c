
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int s8 ;
typedef int s16 ;
struct TYPE_8__ {int addr; } ;
typedef TYPE_1__ result_struct ;


 int FUNC_0 (int,int,int,TYPE_1__*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int*,int,int*,int ,int*,int) ;
 int FUNC_5 (int,int,int,char const*,TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char const*,char*,unsigned long*) ;
 scalar_t__ FUNC_9 (char const*,int *,int) ;
 scalar_t__ FUNC_10 (char const*,int *,int) ;

result_struct *FUNC_11(u32 VAR_0, u32 VAR_1, int VAR_2,
                                  const char *VAR_3,
                                  result_struct *VAR_4, u32 *VAR_5)
{
   u32 VAR_6=0;
   result_struct *VAR_7;
   u32 VAR_8=0;
   unsigned long VAR_9;
   int VAR_10=0;
   u32 VAR_11;

   if ((VAR_7 = (result_struct *)FUNC_7(sizeof(result_struct) * VAR_5[0])) == ((void*)0))
      return ((void*)0);

   switch (VAR_2 & 0x70)
   {
      case 130:
      case 132:
      case 133:
      {

         if (FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3,
                          VAR_7, VAR_5) == 0)
         {
            VAR_5[0] = 0;
            FUNC_6(VAR_7);
            return ((void*)0);
         }

         return VAR_7;
      }
      case 136:
         FUNC_8(VAR_3, "%08lx", &VAR_9);
         break;
      case 129:
         VAR_9 = (unsigned long)FUNC_10(VAR_3, ((void*)0), 10);
         VAR_10 = 0;
         break;
      case 131:
         VAR_9 = (unsigned long)FUNC_9(VAR_3, ((void*)0), 10);
         VAR_10 = 1;
         break;
   }

   if (VAR_4)
   {
      VAR_11 = VAR_4[VAR_6].addr;
      VAR_6++;
   }
   else
      VAR_11 = VAR_0;


   for (;;)
   {
       u32 VAR_12=0;
       u32 VAR_13;


       switch (VAR_2 & 0x3)
       {
          case 139:
             VAR_12 = FUNC_1(VAR_11);

             if (VAR_10)
                VAR_12 = (s8)VAR_12;

             if (FUNC_4(VAR_4, VAR_5, VAR_8, &VAR_6, VAR_11+1, &VAR_13, VAR_1))
                return VAR_7;
             break;
          case 128:
             VAR_12 = FUNC_3(VAR_11);

             if (VAR_10)
                VAR_12 = (s16)VAR_12;

             if (FUNC_4(VAR_4, VAR_5, VAR_8, &VAR_6, VAR_11+2, &VAR_13, VAR_1))
                return VAR_7;
             break;
          case 134:
             VAR_12 = FUNC_2(VAR_11);

             if (FUNC_4(VAR_4, VAR_5, VAR_8, &VAR_6, VAR_11+4, &VAR_13, VAR_1))
                return VAR_7;
             break;
          default:
             VAR_5[0] = 0;
             if (VAR_7)
                FUNC_6(VAR_7);
             return ((void*)0);
       }


       switch (VAR_2 & 0xC)
       {
          case 138:
             if (VAR_12 == VAR_9)
                FUNC_0(VAR_11, VAR_12, VAR_2, VAR_7, &VAR_8);
             break;
          case 135:
             if ((!VAR_10 && VAR_12 < VAR_9) || (VAR_10 && (signed)VAR_12 < (signed)VAR_9))
                FUNC_0(VAR_11, VAR_12, VAR_2, VAR_7, &VAR_8);
             break;
          case 137:
             if ((!VAR_10 && VAR_12 > VAR_9) || (VAR_10 && (signed)VAR_12 > (signed)VAR_9))
                FUNC_0(VAR_11, VAR_12, VAR_2, VAR_7, &VAR_8);
             break;
          default:
             VAR_5[0] = 0;
             if (VAR_7)
                FUNC_6(VAR_7);
             return ((void*)0);
       }

       VAR_11 = VAR_13;
   }

   VAR_5[0] = VAR_8;
   return VAR_7;
}
