
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int * jobject ;
typedef int * jmethodID ;
typedef int jint ;
typedef scalar_t__ jclass ;
struct TYPE_9__ {char* (* GetStringUTFChars ) (TYPE_1__**,int *,int ) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,int *,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__**,int *,scalar_t__,int *,int ) ;
 int FUNC_2 (TYPE_1__**,scalar_t__,char*) ;
 int FUNC_3 (TYPE_1__**,int *,scalar_t__,char*,char*) ;
 int FUNC_4 (TYPE_1__**,int *,scalar_t__,char*,char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,char const*,size_t) ;
 char* FUNC_9 (TYPE_1__**,int *,int ) ;
 int FUNC_10 (TYPE_1__**,int *,char const*) ;

__attribute__((used)) static bool FUNC_11(char *VAR_0,
      int *VAR_1, int *VAR_2, size_t VAR_3, int VAR_4)
{
   jobject VAR_5 = ((void*)0);
   jmethodID VAR_6 = ((void*)0);
   jobject VAR_7 = ((void*)0);
   jmethodID VAR_8 = ((void*)0);
   jclass VAR_9 = 0;
   const char *VAR_10 = ((void*)0);
   JNIEnv *VAR_11 = (JNIEnv*)FUNC_7();

   if (!VAR_11)
      goto error;

   FUNC_6("Using old lookup");

   FUNC_2(VAR_11, VAR_9, "android/view/InputDevice");
   if (!VAR_9)
      goto error;

   FUNC_4(VAR_11, VAR_8, VAR_9, "getDevice",
         "(I)Landroid/view/InputDevice;");
   if (!VAR_8)
      goto error;

   FUNC_1(VAR_11, VAR_7, VAR_9, VAR_8, (jint)VAR_4);
   if (!VAR_7)
   {
      FUNC_5("Failed to find device for ID: %d\n", VAR_4);
      goto error;
   }

   FUNC_3(VAR_11, VAR_6, VAR_9, "getName", "()Ljava/lang/String;");
   if (!VAR_6)
      goto error;

   FUNC_0(VAR_11, VAR_5, VAR_7, VAR_6);
   if (!VAR_5)
   {
      FUNC_5("Failed to find name for device ID: %d\n", VAR_4);
      goto error;
   }

   VAR_0[0] = '\0';

   VAR_10 = (*VAR_11)->GetStringUTFChars(VAR_11, VAR_5, 0);
   if (VAR_10)
      FUNC_8(VAR_0, VAR_10, VAR_3);
   (*VAR_11)->ReleaseStringUTFChars(VAR_11, VAR_5, VAR_10);

   FUNC_6("device name: %s\n", VAR_0);

   return 1;
error:
   return 0;
}
