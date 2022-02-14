
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ lgwin; int dist; } ;
struct TYPE_7__ {scalar_t__* buffer_; int mask_; } ;
struct TYPE_10__ {int num_commands_; scalar_t__ last_processed_pos_; TYPE_2__ params; scalar_t__* dist_cache_; TYPE_1__ ringbuffer_; TYPE_3__* commands_; } ;
struct TYPE_9__ {int copy_len_; int dist_prefix_; int cmd_prefix_; int insert_len_; } ;
typedef TYPE_3__ Command ;
typedef TYPE_4__ BrotliEncoderState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ,size_t,int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(BrotliEncoderState* VAR_2, uint32_t* VAR_3,
                              uint32_t* VAR_4) {
  Command* VAR_5 = &VAR_2->commands_[VAR_2->num_commands_ - 1];
  const uint8_t* VAR_6 = VAR_2->ringbuffer_.buffer_;
  const uint32_t VAR_7 = VAR_2->ringbuffer_.mask_;
  uint64_t VAR_8 =
      (((uint64_t)1) << VAR_2->params.lgwin) - VAR_1;
  uint64_t VAR_9 = VAR_5->copy_len_ & 0x1FFFFFF;
  uint64_t VAR_10 = VAR_2->last_processed_pos_ - VAR_9;
  uint64_t VAR_11 = VAR_10 < VAR_8 ?
      VAR_10 : VAR_8;
  uint64_t VAR_12 = (uint64_t)VAR_2->dist_cache_[0];
  uint32_t VAR_13 = FUNC_0(VAR_5,
                                                      &VAR_2->params.dist);
  if (VAR_13 < VAR_0 ||
      VAR_13 - (VAR_0 - 1) == VAR_12) {
    if (VAR_12 <= VAR_11) {
      while (*VAR_3 != 0 && VAR_6[*VAR_4 & VAR_7] ==
             VAR_6[(*VAR_4 - VAR_12) & VAR_7]) {
        VAR_5->copy_len_++;
        (*VAR_3)--;
        (*VAR_4)++;
      }
    } else {
    }

    FUNC_1(VAR_5->insert_len_,
                  (size_t)((int)(VAR_5->copy_len_ & 0x1FFFFFF) +
                           (int)(VAR_5->copy_len_ >> 25)),
                  FUNC_2((VAR_5->dist_prefix_ & 0x3FF) == 0),
                  &VAR_5->cmd_prefix_);
  }
}
