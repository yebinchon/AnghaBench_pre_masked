
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jstring ;
typedef int jmethodID ;
typedef int jclass ;
typedef int jboolean ;
struct TYPE_10__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;} ;
struct TYPE_9__ {scalar_t__ (* GetStringLength ) (TYPE_1__**,int ) ;char const* (* GetStringUTFChars ) (TYPE_1__**,int ,int *) ;int (* CallObjectMethod ) (TYPE_1__**,int ,int ) ;int (* GetMethodID ) (TYPE_1__**,int ,char*,char*) ;int (* GetObjectClass ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__**,void**,int ) ;
 int FUNC_1 (TYPE_1__**,int ) ;
 int FUNC_2 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_3 (TYPE_1__**,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int ) ;
 char const* FUNC_5 (TYPE_1__**,int ,int *) ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;

const char * FUNC_6()
{
    jclass VAR_4;
    jmethodID VAR_5;
    jstring VAR_6;
    jboolean VAR_7;
    JNIEnv * VAR_8;
    if ((*VAR_3)->GetEnv(VAR_3, (void**) &VAR_8, VAR_1) != VAR_0)
        return ((void*)0);

    VAR_4 = (*VAR_8)->GetObjectClass(VAR_8, VAR_2);
    VAR_5 = (*VAR_8)->GetMethodID(VAR_8, VAR_4, "getMemoryPath", "()Ljava/lang/String;");
    VAR_6 = (*VAR_8)->CallObjectMethod(VAR_8, VAR_2, VAR_5);
    if ((*VAR_8)->GetStringLength(VAR_8, VAR_6) == 0)
        return ((void*)0);
    else
        return (*VAR_8)->GetStringUTFChars(VAR_8, VAR_6, &VAR_7);
}
