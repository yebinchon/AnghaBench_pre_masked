
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jint ;
struct TYPE_5__ {scalar_t__ (* GetEnv ) (TYPE_1__**,void**,int) ;} ;
typedef TYPE_1__* JavaVM ;
typedef int JNIEnv ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__**,void**,int) ;
 TYPE_1__** VAR_4 ;

jint FUNC_3(JavaVM * VAR_5, void * VAR_6)
{
    JNIEnv * VAR_7;
    if ((*VAR_5)->GetEnv(VAR_5, (void**) &VAR_7, VAR_2) != VAR_1)
        return -1;

    VAR_4 = VAR_5;

    FUNC_1();
    FUNC_0(VAR_0, (char *) VAR_3);

    return VAR_2;
}
