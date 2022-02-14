
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_3(u8 VAR_1, const char *VAR_2)
{
   FILE *VAR_3;
   int VAR_4;
   IOCheck_struct VAR_5 = { 0, 0 };

   if ((VAR_3 = FUNC_1(VAR_2, "wb")) == ((void*)0))
      return -1;

   for (VAR_4 = (VAR_1 * 0x20); VAR_4 < ((VAR_1+1) * 0x20); VAR_4 += 2)
   {



      FUNC_2(&VAR_5, (void *)&VAR_0[VAR_4+1], 1, 1, VAR_3);
      FUNC_2(&VAR_5, (void *)&VAR_0[VAR_4], 1, 1, VAR_3);

   }

   FUNC_0(VAR_3);
   return 0;
}
