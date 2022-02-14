
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {TYPE_1__* ops; int tagwait; } ;
struct mfc_dma_command {int dummy; } ;
struct TYPE_2__ {int (* send_mfc_command ) (struct spu_context*,struct mfc_dma_command*) ;int (* set_mfc_query ) (struct spu_context*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct spu_context*,struct mfc_dma_command*) ;
 int FUNC_1 (struct spu_context*,int ,int) ;
 int FUNC_2 (struct spu_context*,struct mfc_dma_command*) ;

__attribute__((used)) static int FUNC_3(struct spu_context *VAR_1,
    struct mfc_dma_command VAR_2,
    int *VAR_3)
{
 *VAR_3 = VAR_1->ops->send_mfc_command(VAR_1, &VAR_2);
 if (*VAR_3 == -VAR_0) {


  VAR_1->ops->set_mfc_query(VAR_1, VAR_1->tagwait, 1);


  *VAR_3 = VAR_1->ops->send_mfc_command(VAR_1, &VAR_2);
  if (*VAR_3 == -VAR_0)
   return 0;
 }
 return 1;
}
