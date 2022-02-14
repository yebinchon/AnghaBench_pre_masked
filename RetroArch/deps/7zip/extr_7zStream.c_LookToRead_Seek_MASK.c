
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int (* Seek ) (TYPE_2__*,int *,int ) ;} ;
struct TYPE_3__ {TYPE_2__* realStream; scalar_t__ size; scalar_t__ pos; } ;
typedef int SRes ;
typedef int ESzSeek ;
typedef TYPE_1__ CLookToRead ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static SRes FUNC_1(void *VAR_0, int64_t *VAR_1, ESzSeek VAR_2)
{
   CLookToRead *VAR_3 = (CLookToRead *)VAR_0;
   VAR_3->pos = VAR_3->size = 0;
   return VAR_3->realStream->Seek(VAR_3->realStream, VAR_1, VAR_2);
}
