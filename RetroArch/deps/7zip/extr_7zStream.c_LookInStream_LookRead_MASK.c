
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* Skip ) (TYPE_1__*,size_t) ;int (* Look ) (TYPE_1__*,void const**,size_t*) ;} ;
typedef int SRes ;
typedef TYPE_1__ ILookInStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,void const*,size_t) ;
 int FUNC_2 (TYPE_1__*,void const**,size_t*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;

SRes FUNC_4(ILookInStream *VAR_1, void *VAR_2, size_t *VAR_3)
{
   const void *VAR_4;
   if (*VAR_3 == 0)
      return VAR_0;
   FUNC_0(VAR_1->Look(VAR_1, &VAR_4, VAR_3));
   FUNC_1(VAR_2, VAR_4, *VAR_3);
   return VAR_1->Skip(VAR_1, *VAR_3);
}
