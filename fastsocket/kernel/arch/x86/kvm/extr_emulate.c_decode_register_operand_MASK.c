
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct operand {int bytes; int val; int orig_val; void* ptr; int type; } ;
struct decode_cache {unsigned int modrm_reg; int rex_prefix; int d; int b; int op_bytes; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct operand *VAR_3,
        struct decode_cache *VAR_4,
        int VAR_5)
{
 unsigned VAR_6 = VAR_4->modrm_reg;
 int VAR_7 = VAR_4->rex_prefix == 0;

 if (!(VAR_4->d & VAR_1))
  VAR_6 = (VAR_4->b & 7) | ((VAR_4->rex_prefix & 1) << 3);
 VAR_3->type = VAR_2;
 if ((VAR_4->d & VAR_0) && !VAR_5) {
  VAR_3->ptr = FUNC_0(VAR_6, VAR_4->regs, VAR_7);
  VAR_3->val = *(u8 *)VAR_3->ptr;
  VAR_3->bytes = 1;
 } else {
  VAR_3->ptr = FUNC_0(VAR_6, VAR_4->regs, 0);
  VAR_3->bytes = VAR_4->op_bytes;
  switch (VAR_3->bytes) {
  case 2:
   VAR_3->val = *(u16 *)VAR_3->ptr;
   break;
  case 4:
   VAR_3->val = *(u32 *)VAR_3->ptr;
   break;
  case 8:
   VAR_3->val = *(u64 *) VAR_3->ptr;
   break;
  }
 }
 VAR_3->orig_val = VAR_3->val;
}
