
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int release; int acquire; } ;
struct e1000_nvm_info {int opcode_bits; int delay_usec; int override; int page_size; int address_bits; int word_size; TYPE_2__ ops; int type; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_10)
{
 struct e1000_nvm_info *VAR_11 = &VAR_10->nvm;
 u32 VAR_12 = FUNC_0(VAR_4);
 u16 VAR_13;

 VAR_11->opcode_bits = 8;
 VAR_11->delay_usec = 1;
 switch (VAR_11->override) {
 case 129:
  VAR_11->page_size = 32;
  VAR_11->address_bits = 16;
  break;
 case 128:
  VAR_11->page_size = 8;
  VAR_11->address_bits = 8;
  break;
 default:
  VAR_11->page_size = VAR_12 & VAR_0 ? 32 : 8;
  VAR_11->address_bits = VAR_12 & VAR_0 ? 16 : 8;
  break;
 }

 switch (VAR_10->mac.type) {
 case 132:
 case 131:
 case 130:
  if (((VAR_12 >> 15) & 0x3) == 0x3) {
   VAR_11->type = VAR_8;
   VAR_11->word_size = 2048;



   VAR_12 &= ~VAR_1;
   FUNC_1(VAR_4, VAR_12);
   break;
  }

 default:
  VAR_11->type = VAR_7;
  VAR_13 = (u16)((VAR_12 & VAR_2) >>
      VAR_3);



  VAR_13 += VAR_5;


  if (VAR_13 > 14)
   VAR_13 = 14;
  VAR_11->word_size = 1 << VAR_13;
  break;
 }


 switch (VAR_10->mac.type) {
 case 131:
 case 130:
  VAR_11->ops.acquire = VAR_6;
  VAR_11->ops.release = VAR_9;
  break;
 default:
  break;
 }

 return 0;
}
