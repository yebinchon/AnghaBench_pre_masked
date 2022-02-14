
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu_context {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* status_read ) (struct spu_context*) ;} ;


 int FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (struct spu_context*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, u64 *VAR_1)
{
 struct spu_context *VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;
 *VAR_1 = VAR_2->ops->status_read(VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
