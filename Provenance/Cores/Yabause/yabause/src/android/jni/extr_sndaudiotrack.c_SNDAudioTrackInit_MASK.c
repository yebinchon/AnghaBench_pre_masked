
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u16 ;
typedef int * jobject ;
typedef int * jmethodID ;
typedef int * jclass ;
struct TYPE_15__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;} ;
struct TYPE_14__ {int (* CallStaticIntMethod ) (TYPE_1__**,int *,int *,int,int,int) ;int (* CallNonvirtualVoidMethod ) (TYPE_1__**,scalar_t__,int *,int *) ;scalar_t__ (* NewGlobalRef ) (TYPE_1__**,int *) ;int * (* NewObject ) (TYPE_1__**,int *,int *,int,int,int,int,int,int) ;int * (* GetStaticMethodID ) (TYPE_1__**,int *,char*,char*) ;int * (* GetMethodID ) (TYPE_1__**,int *,char*,char*) ;int * (* FindClass ) (TYPE_1__**,char*) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_2__**,void**,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int *) ;
 int FUNC_4 (TYPE_1__**,scalar_t__,int *,int *) ;
 int * FUNC_5 (TYPE_1__**,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__**,int *) ;
 int * FUNC_7 (TYPE_1__**,int *,char*,char*) ;
 int * FUNC_8 (TYPE_1__**,int *,char*,char*) ;
 int * FUNC_9 (TYPE_1__**,int *,char*,char*) ;
 int * FUNC_10 (TYPE_1__**,int *,char*,char*) ;
 int FUNC_11 (TYPE_1__**,int *,int *,int,int,int) ;
 int * FUNC_12 (TYPE_1__**,int *,int *,int,int,int,int,int,int) ;
 TYPE_2__** VAR_12 ;

__attribute__((used)) static int FUNC_13(void)
{
   int VAR_13 = 44100;
   int VAR_14 = 12;
   int VAR_15 = 2;
   JNIEnv * VAR_16;
   jobject VAR_17 = ((void*)0);
   jmethodID VAR_18 = ((void*)0);
   jmethodID VAR_19 = ((void*)0);
   jmethodID VAR_20 = ((void*)0);

   if ((*VAR_12)->GetEnv(VAR_12, (void**) &VAR_16, VAR_1) != VAR_0)
       return -1;

   VAR_2 = (*VAR_16)->FindClass(VAR_16, "android/media/AudioTrack");
   VAR_2 = (jclass) (*VAR_16)->NewGlobalRef(VAR_16, VAR_2);

   VAR_20 = (*VAR_16)->GetMethodID(VAR_16, VAR_2, "<init>", "(IIIIII)V");

   VAR_4 = (*VAR_16)->GetMethodID(VAR_16, VAR_2, "write", "([BII)I");

   VAR_18 = (*VAR_16)->GetMethodID(VAR_16, VAR_2, "play", "()V");

   VAR_19 = (*VAR_16)->GetStaticMethodID(VAR_16, VAR_2, "getMinBufferSize", "(III)I");

   VAR_5 = (*VAR_16)->CallStaticIntMethod(VAR_16, VAR_2, VAR_19, VAR_13, VAR_14, VAR_15);

   VAR_17 = (*VAR_16)->NewObject(VAR_16, VAR_2, VAR_20, 3 , VAR_13, VAR_14, VAR_15, VAR_5, 1 );

   VAR_3 = (*VAR_16)->NewGlobalRef(VAR_16, VAR_17);

   (*VAR_16)->CallNonvirtualVoidMethod(VAR_16, VAR_3, VAR_2, VAR_18);

   if ((VAR_11 = (u16 *)FUNC_0(2 * VAR_5)) == ((void*)0))
      return -1;
   FUNC_1(VAR_11, 0, VAR_7);

   VAR_10 = 100;
   VAR_8 = 100;
   VAR_7 = 85;
   VAR_9 = 0;
   VAR_6 = 0;

   return 0;
}
