
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int jmethodID ;
typedef int jclass ;
struct TYPE_8__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;} ;
struct TYPE_7__ {int (* CallIntMethod ) (TYPE_1__**,int ,int ) ;int (* GetMethodID ) (TYPE_1__**,int ,char*,char*) ;int (* GetObjectClass ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__**,void**,int ) ;
 int FUNC_1 (TYPE_1__**,int ) ;
 int FUNC_2 (TYPE_1__**,int ,char*,char*) ;
 int FUNC_3 (TYPE_1__**,int ,int ) ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;

int FUNC_4()
{
    jclass VAR_4;
    jmethodID VAR_5;
    JNIEnv * VAR_6;
    if ((*VAR_3)->GetEnv(VAR_3, (void**) &VAR_6, VAR_1) != VAR_0)
        return -1;

    VAR_4 = (*VAR_6)->GetObjectClass(VAR_6, VAR_2);
    VAR_5 = (*VAR_6)->GetMethodID(VAR_6, VAR_4, "getCartridgeType", "()I");
    return (*VAR_6)->CallIntMethod(VAR_6, VAR_2, VAR_5);
}
