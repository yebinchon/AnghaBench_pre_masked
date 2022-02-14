
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int brotli_free_func ;
typedef scalar_t__ brotli_alloc_func ;
struct TYPE_8__ {int * htrees; int * codes; } ;
struct TYPE_7__ {int * htrees; int * codes; } ;
struct TYPE_6__ {int * htrees; int * codes; } ;
struct TYPE_9__ {int canny_ringbuffer_allocation; int* dist_rb; int mtf_upper_bound; int transforms; int dictionary; int * block_len_trees; int * block_type_trees; scalar_t__ dist_rb_idx; scalar_t__ max_distance; scalar_t__ window_bits; scalar_t__ should_wrap_ringbuffer; scalar_t__ is_metadata; scalar_t__ is_uncompressed; scalar_t__ is_last_metablock; TYPE_3__ distance_hgroup; TYPE_2__ insert_copy_hgroup; TYPE_1__ literal_hgroup; int * dist_context_map_slice; int * context_map_slice; int * dist_context_map; int * context_modes; int * context_map; scalar_t__ ringbuffer_mask; scalar_t__ new_ringbuffer_size; scalar_t__ ringbuffer_size; int * ringbuffer; scalar_t__ partial_pos_out; scalar_t__ rb_roundtrips; scalar_t__ pos; scalar_t__ loop_counter; scalar_t__ buffer_length; int substate_read_block_length; int substate_decode_uint8; int substate_uncompressed; int substate_metablock_header; scalar_t__ large_window; int state; int br; scalar_t__ error_code; void* memory_manager_opaque; int free_func; scalar_t__ alloc_func; } ;
typedef TYPE_4__ BrotliDecoderState ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

BROTLI_BOOL FUNC_3(BrotliDecoderState* VAR_8,
    brotli_alloc_func VAR_9, brotli_free_func VAR_10, void* VAR_11) {
  if (!VAR_9) {
    VAR_8->alloc_func = VAR_6;
    VAR_8->free_func = VAR_7;
    VAR_8->memory_manager_opaque = 0;
  } else {
    VAR_8->alloc_func = VAR_9;
    VAR_8->free_func = VAR_10;
    VAR_8->memory_manager_opaque = VAR_11;
  }

  VAR_8->error_code = 0;

  FUNC_2(&VAR_8->br);
  VAR_8->state = VAR_4;
  VAR_8->large_window = 0;
  VAR_8->substate_metablock_header = VAR_1;
  VAR_8->substate_uncompressed = VAR_3;
  VAR_8->substate_decode_uint8 = VAR_0;
  VAR_8->substate_read_block_length = VAR_2;

  VAR_8->buffer_length = 0;
  VAR_8->loop_counter = 0;
  VAR_8->pos = 0;
  VAR_8->rb_roundtrips = 0;
  VAR_8->partial_pos_out = 0;

  VAR_8->block_type_trees = ((void*)0);
  VAR_8->block_len_trees = ((void*)0);
  VAR_8->ringbuffer = ((void*)0);
  VAR_8->ringbuffer_size = 0;
  VAR_8->new_ringbuffer_size = 0;
  VAR_8->ringbuffer_mask = 0;

  VAR_8->context_map = ((void*)0);
  VAR_8->context_modes = ((void*)0);
  VAR_8->dist_context_map = ((void*)0);
  VAR_8->context_map_slice = ((void*)0);
  VAR_8->dist_context_map_slice = ((void*)0);

  VAR_8->literal_hgroup.codes = ((void*)0);
  VAR_8->literal_hgroup.htrees = ((void*)0);
  VAR_8->insert_copy_hgroup.codes = ((void*)0);
  VAR_8->insert_copy_hgroup.htrees = ((void*)0);
  VAR_8->distance_hgroup.codes = ((void*)0);
  VAR_8->distance_hgroup.htrees = ((void*)0);

  VAR_8->is_last_metablock = 0;
  VAR_8->is_uncompressed = 0;
  VAR_8->is_metadata = 0;
  VAR_8->should_wrap_ringbuffer = 0;
  VAR_8->canny_ringbuffer_allocation = 1;

  VAR_8->window_bits = 0;
  VAR_8->max_distance = 0;
  VAR_8->dist_rb[0] = 16;
  VAR_8->dist_rb[1] = 15;
  VAR_8->dist_rb[2] = 11;
  VAR_8->dist_rb[3] = 4;
  VAR_8->dist_rb_idx = 0;
  VAR_8->block_type_trees = ((void*)0);
  VAR_8->block_len_trees = ((void*)0);

  VAR_8->mtf_upper_bound = 63;

  VAR_8->dictionary = FUNC_0();
  VAR_8->transforms = FUNC_1();

  return VAR_5;
}
