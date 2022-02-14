
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int * jobject ;
typedef int * jmethodID ;
typedef int jint ;
typedef int * jclass ;
struct TYPE_10__ {char* (* GetStringUTFChars ) (TYPE_1__**,int *,int ) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,int *,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (TYPE_1__**,int,int *,int *) ;
 int FUNC_1 (TYPE_1__**,int *,int *,int *) ;
 int FUNC_2 (TYPE_1__**,int *,int *,int *,int ) ;
 int FUNC_3 (TYPE_1__**,int *,char*) ;
 int FUNC_4 (TYPE_1__**,int *,int *,char*,char*) ;
 int FUNC_5 (TYPE_1__**,int *,int *,char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,char const*,size_t) ;
 char* FUNC_10 (TYPE_1__**,int *,int ) ;
 int FUNC_11 (TYPE_1__**,int *,char const*) ;

__attribute__((used)) static bool FUNC_12(char *VAR_0,
      int *VAR_1, int *VAR_2, size_t VAR_3, int VAR_4)
{
   jmethodID VAR_5 = ((void*)0);
   jmethodID VAR_6 = ((void*)0);
   jmethodID VAR_7 = ((void*)0);
   jobject VAR_8 = ((void*)0);
   jobject VAR_9 = ((void*)0);
   jmethodID VAR_10 = ((void*)0);
   jclass VAR_11 = ((void*)0);
   const char *VAR_12 = ((void*)0);
   JNIEnv *VAR_13 = (JNIEnv*)FUNC_8();

   if (!VAR_13)
      goto error;

   FUNC_7("Using new lookup");

   FUNC_3(VAR_13, VAR_11, "android/view/InputDevice");
   if (!VAR_11)
      goto error;

   FUNC_5(VAR_13, VAR_10, VAR_11, "getDevice",
         "(I)Landroid/view/InputDevice;");
   if (!VAR_10)
      goto error;

   FUNC_2(VAR_13, VAR_8, VAR_11, VAR_10, (jint)VAR_4);
   if (!VAR_8)
   {
      FUNC_6("Failed to find device for ID: %d\n", VAR_4);
      goto error;
   }

   FUNC_4(VAR_13, VAR_7, VAR_11, "getName", "()Ljava/lang/String;");
   if (!VAR_7)
      goto error;

   FUNC_1(VAR_13, VAR_9, VAR_8, VAR_7);
   if (!VAR_9)
   {
      FUNC_6("Failed to find name for device ID: %d\n", VAR_4);
      goto error;
   }

   VAR_0[0] = '\0';

   VAR_12 = (*VAR_13)->GetStringUTFChars(VAR_13, VAR_9, 0);
   if (VAR_12)
      FUNC_9(VAR_0, VAR_12, VAR_3);
   (*VAR_13)->ReleaseStringUTFChars(VAR_13, VAR_9, VAR_12);

   FUNC_7("device name: %s\n", VAR_0);

   FUNC_4(VAR_13, VAR_5, VAR_11, "getVendorId", "()I");
   if (!VAR_5)
      goto error;

   FUNC_0(VAR_13, *VAR_1, VAR_8, VAR_5);

   FUNC_7("device vendor id: %d\n", *VAR_1);

   FUNC_4(VAR_13, VAR_6, VAR_11, "getProductId", "()I");
   if (!VAR_6)
      goto error;

   *VAR_2 = 0;
   FUNC_0(VAR_13, *VAR_2, VAR_8, VAR_6);

   FUNC_7("device product id: %d\n", *VAR_2);

   return 1;
error:
   return 0;
}
