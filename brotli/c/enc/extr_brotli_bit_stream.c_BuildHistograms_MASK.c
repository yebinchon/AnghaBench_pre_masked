
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int cmd_prefix_; size_t insert_len_; int dist_prefix_; } ;
typedef int HistogramLiteral ;
typedef int HistogramDistance ;
typedef int HistogramCommand ;
typedef TYPE_1__ Command ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int const) ;

__attribute__((used)) static void FUNC_4(const uint8_t* VAR_0,
                            size_t VAR_1,
                            size_t VAR_2,
                            const Command* VAR_3,
                            size_t VAR_4,
                            HistogramLiteral* VAR_5,
                            HistogramCommand* VAR_6,
                            HistogramDistance* VAR_7) {
  size_t VAR_8 = VAR_1;
  size_t VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
    const Command VAR_10 = VAR_3[VAR_9];
    size_t VAR_11;
    FUNC_1(VAR_6, VAR_10.cmd_prefix_);
    for (VAR_11 = VAR_10.insert_len_; VAR_11 != 0; --VAR_11) {
      FUNC_3(VAR_5, VAR_0[VAR_8 & VAR_2]);
      ++VAR_8;
    }
    VAR_8 += FUNC_0(&VAR_10);
    if (FUNC_0(&VAR_10) && VAR_10.cmd_prefix_ >= 128) {
      FUNC_2(VAR_7, VAR_10.dist_prefix_ & 0x3FF);
    }
  }
}
