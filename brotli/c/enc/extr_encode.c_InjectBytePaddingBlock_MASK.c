
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__* u8; } ;
struct TYPE_5__ {int last_bytes_; size_t last_bytes_bits_; int available_out_; scalar_t__* next_out_; TYPE_1__ tiny_buf_; } ;
typedef TYPE_2__ BrotliEncoderState ;



__attribute__((used)) static void FUNC_0(BrotliEncoderState* VAR_0) {
  uint32_t VAR_1 = VAR_0->last_bytes_;
  size_t VAR_2 = VAR_0->last_bytes_bits_;
  uint8_t* VAR_3;
  VAR_0->last_bytes_ = 0;
  VAR_0->last_bytes_bits_ = 0;

  VAR_1 |= 0x6u << VAR_2;
  VAR_2 += 6;


  if (VAR_0->next_out_) {
    VAR_3 = VAR_0->next_out_ + VAR_0->available_out_;
  } else {
    VAR_3 = VAR_0->tiny_buf_.u8;
    VAR_0->next_out_ = VAR_3;
  }
  VAR_3[0] = (uint8_t)VAR_1;
  if (VAR_2 > 8) VAR_3[1] = (uint8_t)(VAR_1 >> 8);
  if (VAR_2 > 16) VAR_3[2] = (uint8_t)(VAR_1 >> 16);
  VAR_0->available_out_ += (VAR_2 + 7) >> 3;
}
