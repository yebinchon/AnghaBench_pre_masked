
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_3__ {scalar_t__ (* Enqueue ) (TYPE_1__**,scalar_t__,int) ;} ;
typedef scalar_t__ SLresult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_1__**,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(u32 *VAR_8, u32 *VAR_9, u32 VAR_10)
{



   u32 VAR_11=0;
   int VAR_12;

   VAR_11 = (VAR_10 * sizeof(s16) * 2);


   FUNC_2((s32 *)VAR_8, (s32 *)VAR_9, (s16 *)(((u8 *)VAR_7[VAR_3])+VAR_6[VAR_3] ), VAR_11 / sizeof(s16) / 2);

   VAR_6[VAR_3] += VAR_11;

   if (VAR_6[VAR_3] >= VAR_4) {

      if (!VAR_5) {


         SLresult VAR_13;
         FUNC_1(VAR_3);
         VAR_13 = (*VAR_2)->Enqueue(VAR_2, VAR_7[VAR_3], VAR_6[VAR_3]);
         if (VAR_1 != VAR_13) {
            FUNC_0("Fail to Add queue");
               return;
         }
      }
      VAR_12 = VAR_3+1;
      if( VAR_12 >= VAR_0 ) { VAR_12 = 0; }
      VAR_3 = VAR_12;

   }

}
