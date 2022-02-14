
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int htrees; } ;
struct TYPE_8__ {int htrees; } ;
struct TYPE_7__ {int htrees; } ;
struct TYPE_10__ {TYPE_3__ distance_hgroup; TYPE_2__ insert_copy_hgroup; TYPE_1__ literal_hgroup; int dist_context_map; int context_map; int context_modes; } ;
typedef TYPE_4__ BrotliDecoderState ;


 int FUNC_0 (TYPE_4__*,int ) ;

void FUNC_1(BrotliDecoderState* VAR_0) {
  FUNC_0(VAR_0, VAR_0->context_modes);
  FUNC_0(VAR_0, VAR_0->context_map);
  FUNC_0(VAR_0, VAR_0->dist_context_map);
  FUNC_0(VAR_0, VAR_0->literal_hgroup.htrees);
  FUNC_0(VAR_0, VAR_0->insert_copy_hgroup.htrees);
  FUNC_0(VAR_0, VAR_0->distance_hgroup.htrees);
}
