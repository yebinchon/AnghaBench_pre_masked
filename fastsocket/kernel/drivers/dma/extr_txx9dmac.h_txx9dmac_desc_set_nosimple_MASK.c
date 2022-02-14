
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct txx9dmac_dev {int dummy; } ;
struct TYPE_4__ {void* CCR; void* DAIR; void* SAIR; } ;
struct TYPE_3__ {void* CCR; void* DAIR; void* SAIR; } ;
struct txx9dmac_desc {TYPE_2__ hwdesc32; TYPE_1__ hwdesc; } ;


 scalar_t__ FUNC_0 (struct txx9dmac_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct txx9dmac_dev *VAR_0,
           struct txx9dmac_desc *VAR_1,
           u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_0)) {
  VAR_1->hwdesc.SAIR = VAR_2;
  VAR_1->hwdesc.DAIR = VAR_3;
  VAR_1->hwdesc.CCR = VAR_4;
 } else {
  VAR_1->hwdesc32.SAIR = VAR_2;
  VAR_1->hwdesc32.DAIR = VAR_3;
  VAR_1->hwdesc32.CCR = VAR_4;
 }
}
