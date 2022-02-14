
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int s16 ;
typedef scalar_t__ jbyteArray ;
struct TYPE_8__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;} ;
struct TYPE_7__ {int (* CallNonvirtualIntMethod ) (TYPE_1__**,int ,int ,int ,scalar_t__,int ,int) ;int (* SetByteArrayRegion ) (TYPE_1__**,scalar_t__,int ,int,int *) ;scalar_t__ (* NewByteArray ) (TYPE_1__**,int) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__**,void**,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int) ;
 int FUNC_3 (TYPE_1__**,scalar_t__,int ,int,int *) ;
 int FUNC_4 (TYPE_1__**,int ,int ,int ,scalar_t__,int ,int) ;
 TYPE_2__** VAR_9 ;

__attribute__((used)) static void FUNC_5(u32 *VAR_10, u32 *VAR_11, u32 VAR_12)
{
   u32 VAR_13=0;

   VAR_13 = (VAR_12 * sizeof(s16) * 2);

   FUNC_0((s32 *)VAR_10, (s32 *)VAR_11, (s16 *)(((u8 *)VAR_8)+VAR_7), VAR_13 / sizeof(s16) / 2);

   VAR_7 += VAR_13;

   if (VAR_7 > VAR_5) {
      if (! VAR_6) {
         JNIEnv * VAR_14;
         jbyteArray VAR_15;

         if ((*VAR_9)->GetEnv(VAR_9, (void**) &VAR_14, VAR_1) != VAR_0)
             return;

         VAR_15 = (*VAR_14)->NewByteArray(VAR_14, VAR_7);
         if(VAR_15) {
            (*VAR_14)->SetByteArrayRegion(VAR_14, VAR_15, 0, VAR_7, (u8 *) VAR_8);
         }

         (*VAR_14)->CallNonvirtualIntMethod(VAR_14, VAR_3, VAR_2, VAR_4, VAR_15, 0, VAR_7);
      }

      VAR_7 = 0;
   }
}
