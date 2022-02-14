
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,void*,int,int,int *) ;

__attribute__((used)) static void FUNC_7(FILE * VAR_1)
{
   int VAR_2 = 0;
   u32 VAR_3 = 0;
   IOCheck_struct VAR_4 = { 0, 0 };

   for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   {
      VAR_3 = FUNC_1(VAR_0, VAR_2);
      FUNC_6(&VAR_4, (void *)&VAR_3, sizeof(u32), 1, VAR_1);
   }

   for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   {
      VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_3);
      FUNC_6(&VAR_4, (void *)&VAR_3, sizeof(u32), 1, VAR_1);
   }

   VAR_3 = FUNC_2(VAR_0, VAR_3);
   FUNC_6(&VAR_4, (void *)&VAR_3, sizeof(u32), 1, VAR_1);

   VAR_3 = FUNC_3(VAR_0, VAR_3);
   FUNC_6(&VAR_4, (void *)&VAR_3, sizeof(u32), 1, VAR_1);

   VAR_3 = FUNC_5(VAR_0, VAR_3);
   FUNC_6(&VAR_4, (void *)&VAR_3, sizeof(u32), 1, VAR_1);

   VAR_3 = FUNC_4(VAR_0, VAR_3);
   FUNC_6(&VAR_4, (void *)&VAR_3, sizeof(u32), 1, VAR_1);
}
