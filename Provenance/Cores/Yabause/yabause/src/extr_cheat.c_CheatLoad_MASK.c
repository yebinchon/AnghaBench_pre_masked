
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int cheatlist_struct ;
struct TYPE_7__ {int type; int addr; int val; int enable; } ;
struct TYPE_6__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (void*,int ,int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_9(const char *VAR_3)
{
   FILE *VAR_4;
   int VAR_5;
   char VAR_6[4];
   char VAR_7[256];
   IOCheck_struct VAR_8 = { 0, 0 };

   if (!VAR_3)
      return -1;

   if ((VAR_4 = FUNC_4(VAR_3, "rb")) == ((void*)0))
      return -1;

   FUNC_8(&VAR_8, (void *)VAR_6, 1, 4, VAR_4);
   if (FUNC_7(VAR_6, "YCHT", 4) != 0)
   {
      FUNC_3(VAR_4);
      return -2;
   }

   FUNC_1();

   FUNC_8(&VAR_8, (void *)&VAR_2, sizeof(int), 1, VAR_4);

   FUNC_2(VAR_2);


   if (VAR_2 >= VAR_1)
   {
      VAR_0 = FUNC_6(VAR_0, sizeof(cheatlist_struct) * (VAR_1 * 2));
      FUNC_5((void *)VAR_0, 0, sizeof(cheatlist_struct) * (VAR_1 * 2));
      VAR_1 *= 2;
   }

   for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      u8 VAR_9;

      FUNC_8(&VAR_8, (void *)&VAR_0[VAR_5].type, sizeof(int), 1, VAR_4);
      FUNC_8(&VAR_8, (void *)&VAR_0[VAR_5].addr, sizeof(u32), 1, VAR_4);
      FUNC_8(&VAR_8, (void *)&VAR_0[VAR_5].val, sizeof(u32), 1, VAR_4);
      FUNC_8(&VAR_8, (void *)&VAR_9, sizeof(u8), 1, VAR_4);
      FUNC_8(&VAR_8, (void *)VAR_7, sizeof(char), VAR_9, VAR_4);
      FUNC_0(VAR_5, VAR_7);
      FUNC_8(&VAR_8, (void *)&VAR_0[VAR_5].enable, sizeof(int), 1, VAR_4);

      FUNC_2(VAR_0[VAR_5].type);
      FUNC_2(VAR_0[VAR_5].addr);
      FUNC_2(VAR_0[VAR_5].val);
      FUNC_2(VAR_0[VAR_5].enable);

   }

   FUNC_3 (VAR_4);

   return 0;
}
