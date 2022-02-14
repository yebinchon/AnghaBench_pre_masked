
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Read ) (TYPE_2__*,void*,size_t*) ;} ;
struct TYPE_3__ {size_t size; size_t pos; void* buf; TYPE_2__* realStream; } ;
typedef int SRes ;
typedef TYPE_1__ CLookToRead ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*,size_t*) ;

__attribute__((used)) static SRes FUNC_1(void *VAR_2, const void **VAR_3, size_t *VAR_4)
{
   SRes VAR_5 = VAR_1;
   CLookToRead *VAR_6 = (CLookToRead *)VAR_2;
   size_t VAR_7 = VAR_6->size - VAR_6->pos;
   if (VAR_7 == 0 && *VAR_4 > 0)
   {
      VAR_6->pos = 0;
      VAR_7 = VAR_0;
      VAR_5 = VAR_6->realStream->Read(VAR_6->realStream, VAR_6->buf, &VAR_7);
      VAR_6->size = VAR_7;
   }
   if (VAR_7 < *VAR_4)
      *VAR_4 = VAR_7;
   *VAR_3 = VAR_6->buf + VAR_6->pos;
   return VAR_5;
}
