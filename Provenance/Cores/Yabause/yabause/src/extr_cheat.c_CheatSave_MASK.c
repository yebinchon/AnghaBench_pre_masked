
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int type; int addr; int val; int enable; } ;
typedef TYPE_1__ cheatlist_struct ;
struct TYPE_9__ {scalar_t__ desc; } ;
struct TYPE_8__ {int member_1; int member_0; } ;
typedef TYPE_2__ IOCheck_struct ;
typedef int FILE ;


 int FUNC_0 (int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_5__*,int) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,void*,int,int,int *) ;

int FUNC_7(const char *VAR_2)
{
   FILE *VAR_3;
   int VAR_4;
   int VAR_5;
   IOCheck_struct VAR_6 = { 0, 0 };

   if (!VAR_2)
      return -1;

   if ((VAR_3 = FUNC_2(VAR_2, "wb")) == ((void*)0))
      return -1;

   FUNC_3(VAR_3, "YCHT");
   VAR_5 = VAR_1;

   FUNC_0(VAR_5);

   FUNC_6(&VAR_6, (void *)&VAR_5, sizeof(int), 1, VAR_3);

   for(VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   {
      u8 VAR_7;
      cheatlist_struct VAR_8;

      FUNC_4(&VAR_8, &VAR_0[VAR_4], sizeof(cheatlist_struct));

      FUNC_0(VAR_8.type);
      FUNC_0(VAR_8.addr);
      FUNC_0(VAR_8.val);
      FUNC_0(VAR_8.enable);

      FUNC_6(&VAR_6, (void *)&VAR_8.type, sizeof(int), 1, VAR_3);
      FUNC_6(&VAR_6, (void *)&VAR_8.addr, sizeof(u32), 1, VAR_3);
      FUNC_6(&VAR_6, (void *)&VAR_8.val, sizeof(u32), 1, VAR_3);
      VAR_7 = (u8)FUNC_5(VAR_0[VAR_4].desc)+1;
      FUNC_6(&VAR_6, (void *)&VAR_7, sizeof(u8), 1, VAR_3);
      FUNC_6(&VAR_6, (void *)VAR_0[VAR_4].desc, sizeof(char), VAR_7, VAR_3);
      FUNC_6(&VAR_6, (void *)&VAR_8.enable, sizeof(int), 1, VAR_3);
   }

   FUNC_1 (VAR_3);

   return 0;
}
