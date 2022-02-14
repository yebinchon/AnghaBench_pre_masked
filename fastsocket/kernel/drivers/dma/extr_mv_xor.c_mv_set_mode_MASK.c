
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_xor_chan {int current_type; TYPE_2__* device; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int FUNC_1 (struct mv_xor_chan*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct mv_xor_chan *VAR_4,
          enum dma_transaction_type VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = FUNC_2(FUNC_1(VAR_4));

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_3;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_4(VAR_0, VAR_4->device->common.dev,
      "error: unsupported operation %d.\n",
      VAR_5);
  FUNC_0();
  return;
 }

 VAR_7 &= ~0x7;
 VAR_7 |= VAR_6;
 FUNC_3(VAR_7, FUNC_1(VAR_4));
 VAR_4->current_type = VAR_5;
}
