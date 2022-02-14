
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int buffer ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {char* status; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;


 int FUNC_0 (int *,char*,char*,...) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 () ;
 char FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (char*,int ,int *) ;
 size_t FUNC_6 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*,size_t) ;

int FUNC_8(int VAR_5, char **VAR_6)
{
   char VAR_7[VAR_0];
   VC_CONTAINER_IO_T *VAR_8, *VAR_9;
   VC_CONTAINER_STATUS_T VAR_10;
   size_t VAR_11;
   bool VAR_12 = 1;

   if (VAR_5 < 3)
   {
      FUNC_0(((void*)0), "Usage:\n%s <read URI> <write URI>\n", VAR_6[0]);
      return 1;
   }

   VAR_8 = FUNC_5(VAR_6[1], VAR_2, &VAR_10);
   if (!VAR_8)
   {
      FUNC_0(((void*)0), "Opening <%s> for read failed: %d\n", VAR_6[1], VAR_10);
      return 2;
   }

   VAR_9 = FUNC_5(VAR_6[2], VAR_3, &VAR_10);
   if (!VAR_9)
   {
      FUNC_4(VAR_8);
      FUNC_0(((void*)0), "Opening <%s> for write failed: %d\n", VAR_6[2], VAR_10);
      return 3;
   }

   FUNC_3(1);

   while (VAR_12)
   {
      size_t VAR_13 = 0;

      VAR_11 = FUNC_6(VAR_8, VAR_7, sizeof(VAR_7));
      while (VAR_12 && VAR_13 < VAR_11)
      {
         VAR_13 += FUNC_7(VAR_9, VAR_7 + VAR_13, VAR_11 - VAR_13);
         VAR_12 &= (VAR_9->status == VAR_4);
      }
      VAR_12 &= (VAR_8->status == VAR_4);

      if (FUNC_1())
      {
         char VAR_14 = FUNC_2();

         switch (VAR_14)
         {
         case 'q':
         case 'Q':
         case 0x04:
         case 0x1A:
         case 0x1B:
            VAR_12 = 0;
            break;
         default:
            ;
         }
      }
   }

   if (VAR_8->status != VAR_4 && VAR_8->status != VAR_1)
   {
      FUNC_0(((void*)0), "Read failed: %d\n", VAR_8->status);
   }

   if (VAR_9->status != VAR_4)
   {
      FUNC_0(((void*)0), "Write failed: %d\n", VAR_9->status);
   }

   FUNC_4(VAR_8);
   FUNC_4(VAR_9);

   FUNC_3(0);

   return 0;
}
