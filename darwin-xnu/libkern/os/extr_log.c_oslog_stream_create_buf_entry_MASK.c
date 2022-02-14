
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct oslog_stream_buf_entry_s {int dummy; } ;
struct firehose_tracepoint_s {int dummy; } ;
typedef int oslog_stream_link_type_t ;
typedef TYPE_2__* oslog_stream_buf_entry_t ;
typedef TYPE_3__* firehose_tracepoint_t ;
struct TYPE_10__ {int ftid_value; } ;
typedef TYPE_4__ firehose_tracepoint_id_u ;
struct TYPE_7__ {int ftid_value; } ;
struct TYPE_9__ {size_t ft_length; int ft_data; TYPE_1__ ft_id; int ft_thread; } ;
struct TYPE_8__ {int size; TYPE_3__* metadata; int timestamp; int type; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int ,void const*,size_t) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static oslog_stream_buf_entry_t
FUNC_4(oslog_stream_link_type_t VAR_0, firehose_tracepoint_id_u VAR_1,
    uint64_t VAR_2, const void* VAR_3, size_t VAR_4)
{
 oslog_stream_buf_entry_t VAR_5 = ((void*)0);
 firehose_tracepoint_t VAR_6 = ((void*)0);
 size_t VAR_7 = 0;

 if (!VAR_3) {
  return ((void*)0);
 }

 VAR_7 = sizeof(struct oslog_stream_buf_entry_s) +
   sizeof(struct firehose_tracepoint_s) + VAR_4;
 VAR_5 = (oslog_stream_buf_entry_t) FUNC_1(VAR_7);
 if (!VAR_5) {
  return ((void*)0);
 }

 VAR_5->type = VAR_0;
 VAR_5->timestamp = VAR_2;
 VAR_5->size = sizeof(struct firehose_tracepoint_s) + VAR_4;

 VAR_6 = VAR_5->metadata;
 VAR_6->ft_thread = FUNC_3(FUNC_0());
 VAR_6->ft_id.ftid_value = VAR_1.ftid_value;
 VAR_6->ft_length = VAR_4;
 FUNC_2(VAR_6->ft_data, VAR_3, VAR_4);

 return VAR_5;
}
