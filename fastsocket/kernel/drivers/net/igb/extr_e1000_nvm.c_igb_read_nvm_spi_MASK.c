
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct e1000_nvm_info {scalar_t__ word_size; int address_bits; int opcode_bits; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__,int) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

s32 FUNC_7(struct e1000_hw *VAR_3, u16 VAR_4, u16 VAR_5, u16 *VAR_6)
{
 struct e1000_nvm_info *VAR_7 = &VAR_3->nvm;
 u32 VAR_8 = 0;
 s32 VAR_9;
 u16 VAR_10;
 u8 VAR_11 = VAR_2;




 if ((VAR_4 >= VAR_7->word_size) || (VAR_5 > (VAR_7->word_size - VAR_4)) ||
     (VAR_5 == 0)) {
  FUNC_0("nvm parameter(s) out of bounds\n");
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = VAR_7->ops.acquire(VAR_3);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9)
  goto release;

 FUNC_4(VAR_3);

 if ((VAR_7->address_bits == 8) && (VAR_4 >= 128))
  VAR_11 |= VAR_1;


 FUNC_3(VAR_3, VAR_11, VAR_7->opcode_bits);
 FUNC_3(VAR_3, (u16)(VAR_4*2), VAR_7->address_bits);





 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_10 = FUNC_2(VAR_3, 16);
  VAR_6[VAR_8] = (VAR_10 >> 8) | (VAR_10 << 8);
 }

release:
 VAR_7->ops.release(VAR_3);

out:
 return VAR_9;
}
