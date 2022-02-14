
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu_context {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {size_t (* read ) (struct spu_context*,void*,size_t,int *) ;int (* get ) (struct spu_context*) ;} ;


 int FUNC_0 (void*,size_t,char*,int ) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_1 (struct spu_context*,void*,size_t,int *) ;
 int FUNC_2 (struct spu_context*) ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_1, struct spu_context *VAR_2, void *VAR_3,
    size_t VAR_4, loff_t *VAR_5)
{
 u64 VAR_6;
 int VAR_7;

 if (VAR_0[VAR_1].read)
  return VAR_0[VAR_1].read(VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6 = VAR_0[VAR_1].get(VAR_2);
 VAR_7 = FUNC_0(VAR_3, VAR_4, "0x%.16llx", VAR_6);
 if (VAR_7 >= VAR_4)
  return VAR_4;
 return ++VAR_7;
}
