
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;} ;
struct TYPE_5__ {int (* DeleteGlobalRef ) (TYPE_1__**,int ) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__**,void**,int ) ;
 int FUNC_2 (TYPE_1__**,int ) ;
 TYPE_2__** VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
   JNIEnv * VAR_5;

   if ((*VAR_4)->GetEnv(VAR_4, (void**) &VAR_5, VAR_1) != VAR_0)
       return;

   FUNC_0(VAR_3);
   VAR_3 = ((void*)0);

   (*VAR_5)->DeleteGlobalRef(VAR_5, VAR_2);
}
