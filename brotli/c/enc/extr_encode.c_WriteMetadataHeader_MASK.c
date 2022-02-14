
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {size_t last_bytes_bits_; int last_bytes_; } ;
typedef TYPE_1__ BrotliEncoderState ;


 int FUNC_0 (int,size_t const,size_t*,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(
    BrotliEncoderState* VAR_0, const size_t VAR_1, uint8_t* VAR_2) {
  size_t VAR_3;
  VAR_3 = VAR_0->last_bytes_bits_;
  VAR_2[0] = (uint8_t)VAR_0->last_bytes_;
  VAR_2[1] = (uint8_t)(VAR_0->last_bytes_ >> 8);
  VAR_0->last_bytes_ = 0;
  VAR_0->last_bytes_bits_ = 0;

  FUNC_0(1, 0, &VAR_3, VAR_2);
  FUNC_0(2, 3, &VAR_3, VAR_2);
  FUNC_0(1, 0, &VAR_3, VAR_2);
  if (VAR_1 == 0) {
    FUNC_0(2, 0, &VAR_3, VAR_2);
  } else {
    uint32_t VAR_4 = (VAR_1 == 1) ? 0 :
        (FUNC_1((uint32_t)VAR_1 - 1) + 1);
    uint32_t VAR_5 = (VAR_4 + 7) / 8;
    FUNC_0(2, VAR_5, &VAR_3, VAR_2);
    FUNC_0(8 * VAR_5, VAR_1 - 1, &VAR_3, VAR_2);
  }
  return (VAR_3 + 7u) >> 3;
}
