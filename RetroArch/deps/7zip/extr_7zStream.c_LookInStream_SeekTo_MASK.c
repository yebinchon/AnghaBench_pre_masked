
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_4__ {int (* Seek ) (TYPE_1__*,int *,int ) ;} ;
typedef int SRes ;
typedef TYPE_1__ ILookInStream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;

SRes FUNC_1(ILookInStream *VAR_1, uint64_t VAR_2)
{
   int64_t VAR_3 = VAR_2;
   return VAR_1->Seek(VAR_1, &VAR_3, VAR_0);
}
