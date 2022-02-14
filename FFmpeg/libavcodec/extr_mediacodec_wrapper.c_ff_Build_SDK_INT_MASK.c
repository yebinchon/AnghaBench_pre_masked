
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int jfieldID ;
typedef int jclass ;
struct TYPE_7__ {int (* GetStaticIntField ) (TYPE_1__**,int ,int ) ;int (* DeleteLocalRef ) (TYPE_1__**,int ) ;int (* GetStaticFieldID ) (TYPE_1__**,int ,char*,char*) ;int (* FindClass ) (TYPE_1__**,char*) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef int AVCodecContext ;


 int FUNC_0 (TYPE_1__**,int *,int) ;
 int FUNC_1 (TYPE_1__**,char*) ;
 int FUNC_2 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_3 (TYPE_1__**,int ,int ) ;
 int FUNC_4 (TYPE_1__**,int ) ;

int FUNC_5(AVCodecContext *VAR_0)
{
    int VAR_1 = -1;
    JNIEnv *VAR_2 = ((void*)0);
    jclass VAR_3;
    jfieldID VAR_4;
    FUNC_0(VAR_2, VAR_0, -1);

    VAR_3 = (*VAR_2)->FindClass(VAR_2, "android/os/Build$VERSION");
    VAR_4 = (*VAR_2)->GetStaticFieldID(VAR_2, VAR_3, "SDK_INT", "I");
    VAR_1 = (*VAR_2)->GetStaticIntField(VAR_2, VAR_3, VAR_4);
    (*VAR_2)->DeleteLocalRef(VAR_2, VAR_3);
    return VAR_1;
}
