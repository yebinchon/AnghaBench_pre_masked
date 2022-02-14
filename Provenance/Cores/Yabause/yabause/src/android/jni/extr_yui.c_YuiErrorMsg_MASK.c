
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jstring ;
typedef int jmethodID ;
typedef int jclass ;
struct TYPE_9__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;} ;
struct TYPE_8__ {int (* CallVoidMethod ) (TYPE_1__**,int ,int ,int ) ;int (* NewStringUTF ) (TYPE_1__**,char const*) ;int (* GetMethodID ) (TYPE_1__**,int ,char*,char*) ;int (* GetObjectClass ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__**,void**,int ) ;
 int FUNC_1 (TYPE_1__**,int ) ;
 int FUNC_2 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_3 (TYPE_1__**,char const*) ;
 int FUNC_4 (TYPE_1__**,int ,int ,int ) ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;

void FUNC_5(const char *VAR_4)
{
    jclass VAR_5;
    jmethodID VAR_6;
    jstring VAR_7;
    JNIEnv * VAR_8;
    if ((*VAR_3)->GetEnv(VAR_3, (void**) &VAR_8, VAR_1) != VAR_0)
        return;

    VAR_5 = (*VAR_8)->GetObjectClass(VAR_8, VAR_2);
    VAR_6 = (*VAR_8)->GetMethodID(VAR_8, VAR_5, "errorMsg", "(Ljava/lang/String;)V");
    VAR_7 = (*VAR_8)->NewStringUTF(VAR_8, VAR_4);
    (*VAR_8)->CallVoidMethod(VAR_8, VAR_2, VAR_6, VAR_7);
}
