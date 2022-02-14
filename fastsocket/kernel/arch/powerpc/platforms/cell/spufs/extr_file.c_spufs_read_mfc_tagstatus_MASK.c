
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spu_context {int tagwait; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_mfc_tagstatus ) (struct spu_context*) ;int (* set_mfc_query ) (struct spu_context*,int,int) ;} ;


 int FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*,int,int) ;

__attribute__((used)) static int FUNC_2(struct spu_context *VAR_0, u32 *VAR_1)
{


 *VAR_1 = VAR_0->ops->read_mfc_tagstatus(VAR_0) & VAR_0->tagwait;
 VAR_0->tagwait &= ~*VAR_1;
 if (*VAR_1)
  return 1;



 VAR_0->ops->set_mfc_query(VAR_0, VAR_0->tagwait, 1);
 return 0;
}
