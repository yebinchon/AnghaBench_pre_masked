
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int mode_bit_map; scalar_t__ cmd_offset; } ;
struct TYPE_9__ {scalar_t__ data_len; int data_off; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {scalar_t__ op; scalar_t__ offset; } ;
union init_op {TYPE_5__ if_mode; TYPE_4__ arr_wr; TYPE_3__ zero; TYPE_2__ write; TYPE_1__ raw; } ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct bnx2x {int dummy; } ;


 size_t FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__* FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int * FUNC_3 (struct bnx2x*) ;
 scalar_t__* FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,scalar_t__) ;
 int FUNC_6 (struct bnx2x*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct bnx2x*,scalar_t__,int ,int ,int) ;
 int FUNC_8 (struct bnx2x*,scalar_t__,scalar_t__ const*,scalar_t__) ;
 int FUNC_9 (struct bnx2x*,scalar_t__,scalar_t__ const*,scalar_t__) ;
 int FUNC_10 (struct bnx2x*,scalar_t__,scalar_t__ const*,scalar_t__) ;
 int FUNC_11 (struct bnx2x*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_12(struct bnx2x *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u16 VAR_5 =
  FUNC_4(VAR_2)[FUNC_0(VAR_3, VAR_4,
           VAR_1)];
 u16 VAR_6 =
  FUNC_4(VAR_2)[FUNC_0(VAR_3, VAR_4,
           VAR_0)];
 const union init_op *VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 const u32 *VAR_12, *VAR_13;


 if (VAR_5 == VAR_6)
  return;

 VAR_13 = FUNC_1(VAR_2);

 for (VAR_8 = VAR_5; VAR_8 < VAR_6; VAR_8++) {

  VAR_7 = (const union init_op *)&(FUNC_3(VAR_2)[VAR_8]);

  VAR_9 = VAR_7->raw.op;
  VAR_10 = VAR_7->raw.offset;




  VAR_11 = VAR_7->arr_wr.data_len;
  VAR_12 = VAR_13 + VAR_7->arr_wr.data_off;

  switch (VAR_9) {
  case 135:
   FUNC_5(VAR_2, VAR_10);
   break;
  case 131:
   FUNC_6(VAR_2, VAR_10, VAR_7->write.val);
   break;
  case 134:
   FUNC_8(VAR_2, VAR_10, VAR_12, VAR_11);
   break;
  case 133:
   FUNC_10(VAR_2, VAR_10, VAR_12, VAR_11);
   break;
  case 128:
   FUNC_7(VAR_2, VAR_10, 0, VAR_7->zero.len, 0);
   break;
  case 132:
   FUNC_7(VAR_2, VAR_10, 0, VAR_7->zero.len, 1);
   break;
  case 129:
   FUNC_11(VAR_2, VAR_10, VAR_11,
      VAR_7->arr_wr.data_off);
   break;
  case 130:
   FUNC_9(VAR_2, VAR_10, VAR_12, VAR_11);
   break;
  case 137:



   if ((FUNC_2(VAR_2) &
    VAR_7->if_mode.mode_bit_map) !=
    VAR_7->if_mode.mode_bit_map)
    VAR_8 += VAR_7->if_mode.cmd_offset;
   break;
  case 136:



   if ((FUNC_2(VAR_2) &
    VAR_7->if_mode.mode_bit_map) == 0)
    VAR_8 += VAR_7->if_mode.cmd_offset;
   break;
  default:


   break;
  }
 }
}
