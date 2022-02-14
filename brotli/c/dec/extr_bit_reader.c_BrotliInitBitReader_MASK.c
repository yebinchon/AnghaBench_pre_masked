
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bit_pos_; scalar_t__ val_; } ;
typedef TYPE_1__ BrotliBitReader ;



void FUNC_0(BrotliBitReader* const VAR_0) {
  VAR_0->val_ = 0;
  VAR_0->bit_pos_ = sizeof(VAR_0->val_) << 3;
}
