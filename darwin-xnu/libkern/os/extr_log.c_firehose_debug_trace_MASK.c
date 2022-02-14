
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ firehose_tracepoint_id_t ;
typedef scalar_t__ firehose_stream_t ;


 int FUNC_0 (char*,unsigned int,unsigned char const,unsigned char const,...) ;

firehose_tracepoint_id_t
FUNC_1(firehose_stream_t VAR_0, firehose_tracepoint_id_t VAR_1,
  uint64_t VAR_2, const char *VAR_3, const void *VAR_4, size_t VAR_5)
{
 FUNC_0("[os_log stream 0x%x trace_id 0x%llx timestamp %llu format '%s' data %p len %lu]\n",
   (unsigned int)VAR_0, (unsigned long long)VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);
 size_t VAR_6;
 const unsigned char *VAR_7 = (const unsigned char *)VAR_4;
 for (VAR_6=0; VAR_6 < VAR_5; VAR_6 += 8) {
  FUNC_0(">oslog 0x%08x: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
    (unsigned int)VAR_6,
    (VAR_6+0) < VAR_5 ? VAR_7[VAR_6+0] : 0,
    (VAR_6+1) < VAR_5 ? VAR_7[VAR_6+1] : 0,
    (VAR_6+2) < VAR_5 ? VAR_7[VAR_6+2] : 0,
    (VAR_6+3) < VAR_5 ? VAR_7[VAR_6+3] : 0,
    (VAR_6+4) < VAR_5 ? VAR_7[VAR_6+4] : 0,
    (VAR_6+5) < VAR_5 ? VAR_7[VAR_6+5] : 0,
    (VAR_6+6) < VAR_5 ? VAR_7[VAR_6+6] : 0,
    (VAR_6+7) < VAR_5 ? VAR_7[VAR_6+7] : 0
   );
 }
 return VAR_1;
}
