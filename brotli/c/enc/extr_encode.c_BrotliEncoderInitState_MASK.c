
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* dist_cache_; int saved_dist_cache_; scalar_t__ cmd_alloc_size_; scalar_t__ commands_; int ringbuffer_; void* is_initialized_; void* is_last_block_emitted_; int stream_state_; scalar_t__ total_out_; scalar_t__ available_out_; int * next_out_; int * literal_buf_; int * command_buf_; scalar_t__ cmd_code_numbits_; scalar_t__ large_table_size_; int * large_table_; int hasher_; scalar_t__ storage_; scalar_t__ storage_size_; scalar_t__ prev_byte2_; scalar_t__ prev_byte_; scalar_t__ last_processed_pos_; scalar_t__ last_flush_pos_; scalar_t__ last_insert_len_; scalar_t__ num_literals_; scalar_t__ num_commands_; scalar_t__ input_pos_; int params; } ;
typedef TYPE_1__ BrotliEncoderState ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static void FUNC_4(BrotliEncoderState* VAR_2) {
  FUNC_0(&VAR_2->params);
  VAR_2->input_pos_ = 0;
  VAR_2->num_commands_ = 0;
  VAR_2->num_literals_ = 0;
  VAR_2->last_insert_len_ = 0;
  VAR_2->last_flush_pos_ = 0;
  VAR_2->last_processed_pos_ = 0;
  VAR_2->prev_byte_ = 0;
  VAR_2->prev_byte2_ = 0;
  VAR_2->storage_size_ = 0;
  VAR_2->storage_ = 0;
  FUNC_1(&VAR_2->hasher_);
  VAR_2->large_table_ = ((void*)0);
  VAR_2->large_table_size_ = 0;
  VAR_2->cmd_code_numbits_ = 0;
  VAR_2->command_buf_ = ((void*)0);
  VAR_2->literal_buf_ = ((void*)0);
  VAR_2->next_out_ = ((void*)0);
  VAR_2->available_out_ = 0;
  VAR_2->total_out_ = 0;
  VAR_2->stream_state_ = VAR_1;
  VAR_2->is_last_block_emitted_ = VAR_0;
  VAR_2->is_initialized_ = VAR_0;

  FUNC_2(&VAR_2->ringbuffer_);

  VAR_2->commands_ = 0;
  VAR_2->cmd_alloc_size_ = 0;


  VAR_2->dist_cache_[0] = 4;
  VAR_2->dist_cache_[1] = 11;
  VAR_2->dist_cache_[2] = 15;
  VAR_2->dist_cache_[3] = 16;


  FUNC_3(VAR_2->saved_dist_cache_, VAR_2->dist_cache_, sizeof(VAR_2->saved_dist_cache_));
}
