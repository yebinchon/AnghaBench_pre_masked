
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Read ) (TYPE_2__*,void*,size_t*) ;} ;
struct TYPE_3__ {TYPE_2__* realStream; } ;
typedef int SRes ;
typedef TYPE_1__ CSecToRead ;


 int FUNC_0 (TYPE_2__*,void*,size_t*) ;

__attribute__((used)) static SRes FUNC_1(void *VAR_0, void *VAR_1, size_t *VAR_2)
{
   CSecToRead *VAR_3 = (CSecToRead *)VAR_0;
   return VAR_3->realStream->Read(VAR_3->realStream, VAR_1, VAR_2);
}
