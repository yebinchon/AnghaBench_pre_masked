
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ distance_postfix_bits; scalar_t__ num_direct_distance_codes; } ;
struct TYPE_9__ {int cmd_prefix_; int dist_extra_; int dist_prefix_; } ;
typedef TYPE_1__ Command ;
typedef TYPE_2__ BrotliDistanceParams ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int *,int *) ;

__attribute__((used)) static void FUNC_3(Command* VAR_0,
                                      size_t VAR_1,
                                      const BrotliDistanceParams* VAR_2,
                                      const BrotliDistanceParams* VAR_3) {
  size_t VAR_4;

  if (VAR_2->distance_postfix_bits == VAR_3->distance_postfix_bits &&
      VAR_2->num_direct_distance_codes ==
      VAR_3->num_direct_distance_codes) {
    return;
  }

  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
    Command* VAR_5 = &VAR_0[VAR_4];
    if (FUNC_0(VAR_5) && VAR_5->cmd_prefix_ >= 128) {
      FUNC_2(FUNC_1(VAR_5, VAR_2),
                               VAR_3->num_direct_distance_codes,
                               VAR_3->distance_postfix_bits,
                               &VAR_5->dist_prefix_,
                               &VAR_5->dist_extra_);
    }
  }
}
