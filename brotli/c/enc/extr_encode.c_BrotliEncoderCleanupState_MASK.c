
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int literal_buf_; int command_buf_; int large_table_; int hasher_; int ringbuffer_; int commands_; int storage_; int memory_manager_; } ;
typedef int MemoryManager ;
typedef TYPE_1__ BrotliEncoderState ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(BrotliEncoderState* VAR_0) {
  MemoryManager* VAR_1 = &VAR_0->memory_manager_;
  if (FUNC_1(VAR_1)) {
    FUNC_2(VAR_1);
    return;
  }
  FUNC_0(VAR_1, VAR_0->storage_);
  FUNC_0(VAR_1, VAR_0->commands_);
  FUNC_4(VAR_1, &VAR_0->ringbuffer_);
  FUNC_3(VAR_1, &VAR_0->hasher_);
  FUNC_0(VAR_1, VAR_0->large_table_);
  FUNC_0(VAR_1, VAR_0->command_buf_);
  FUNC_0(VAR_1, VAR_0->literal_buf_);
}
