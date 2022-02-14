
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {int enabled; int sync_state; scalar_t__ spigot_open; scalar_t__ sync_buf_offs; scalar_t__ sync_trashed_count; scalar_t__ sync_key_len; scalar_t__ stream_running; scalar_t__ c_data_offs; scalar_t__ c_data_len; int * c_data_ptr; int * c_buf; int stream; } ;
struct pvr2_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_buffer*) ;
 int FUNC_1 (struct pvr2_ioread*) ;
 struct pvr2_buffer* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct pvr2_ioread *VAR_2)
{
 int VAR_3;
 struct pvr2_buffer *VAR_4;
 if (VAR_2->enabled) return 0;
 if (!(VAR_2->stream)) return 0;
 FUNC_3(VAR_1,
     "/*---TRACE_READ---*/ pvr2_ioread_start id=%p",VAR_2);
 while ((VAR_4 = FUNC_2(VAR_2->stream)) != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3 < 0) {
   FUNC_3(VAR_0,
       "/*---TRACE_READ---*/"
       " pvr2_ioread_start id=%p"
       " error=%d",
       VAR_2,VAR_3);
   FUNC_1(VAR_2);
   return VAR_3;
  }
 }
 VAR_2->enabled = !0;
 VAR_2->c_buf = ((void*)0);
 VAR_2->c_data_ptr = ((void*)0);
 VAR_2->c_data_len = 0;
 VAR_2->c_data_offs = 0;
 VAR_2->stream_running = 0;
 if (VAR_2->sync_key_len) {
  FUNC_3(VAR_0,
      "/*---TRACE_READ---*/ sync_state <== 1");
  VAR_2->sync_state = 1;
  VAR_2->sync_trashed_count = 0;
  VAR_2->sync_buf_offs = 0;
 }
 VAR_2->spigot_open = 0;
 return 0;
}
