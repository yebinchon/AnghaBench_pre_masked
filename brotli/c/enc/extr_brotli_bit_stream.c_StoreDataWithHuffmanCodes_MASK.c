
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {size_t cmd_prefix_; size_t insert_len_; int dist_prefix_; size_t dist_extra_; } ;
typedef TYPE_1__ Command ;


 int FUNC_0 (size_t const,size_t const,size_t*,size_t*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,size_t*,size_t*) ;

__attribute__((used)) static void FUNC_3(const uint8_t* VAR_0,
                                      size_t VAR_1,
                                      size_t VAR_2,
                                      const Command* VAR_3,
                                      size_t VAR_4,
                                      const uint8_t* VAR_5,
                                      const uint16_t* VAR_6,
                                      const uint8_t* VAR_7,
                                      const uint16_t* VAR_8,
                                      const uint8_t* VAR_9,
                                      const uint16_t* VAR_10,
                                      size_t* VAR_11,
                                      uint8_t* VAR_12) {
  size_t VAR_13 = VAR_1;
  size_t VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_4; ++VAR_14) {
    const Command VAR_15 = VAR_3[VAR_14];
    const size_t VAR_16 = VAR_15.cmd_prefix_;
    size_t VAR_17;
    FUNC_0(
        VAR_7[VAR_16], VAR_8[VAR_16], VAR_11, VAR_12);
    FUNC_2(&VAR_15, VAR_11, VAR_12);
    for (VAR_17 = VAR_15.insert_len_; VAR_17 != 0; --VAR_17) {
      const uint8_t VAR_18 = VAR_0[VAR_13 & VAR_2];
      FUNC_0(
          VAR_5[VAR_18], VAR_6[VAR_18], VAR_11, VAR_12);
      ++VAR_13;
    }
    VAR_13 += FUNC_1(&VAR_15);
    if (FUNC_1(&VAR_15) && VAR_15.cmd_prefix_ >= 128) {
      const size_t VAR_19 = VAR_15.dist_prefix_ & 0x3FF;
      const uint32_t VAR_20 = VAR_15.dist_prefix_ >> 10;
      const uint32_t VAR_21 = VAR_15.dist_extra_;
      FUNC_0(VAR_9[VAR_19], VAR_10[VAR_19],
                      VAR_11, VAR_12);
      FUNC_0(VAR_20, VAR_21, VAR_11, VAR_12);
    }
  }
}
