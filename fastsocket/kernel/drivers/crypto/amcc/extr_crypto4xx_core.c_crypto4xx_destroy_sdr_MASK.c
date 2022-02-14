
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto4xx_device {int scatter_buffer_size; int scatter_buffer_pa; int * scatter_buffer_va; TYPE_1__* core_dev; int sdr_pa; int * sdr; } ;
struct ce_sd {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct crypto4xx_device *VAR_1)
{
 if (VAR_1->sdr != ((void*)0))
  FUNC_0(VAR_1->core_dev->device,
      sizeof(struct ce_sd) * VAR_0,
      VAR_1->sdr, VAR_1->sdr_pa);

 if (VAR_1->scatter_buffer_va != ((void*)0))
  FUNC_0(VAR_1->core_dev->device,
      VAR_1->scatter_buffer_size * VAR_0,
      VAR_1->scatter_buffer_va,
      VAR_1->scatter_buffer_pa);
}
