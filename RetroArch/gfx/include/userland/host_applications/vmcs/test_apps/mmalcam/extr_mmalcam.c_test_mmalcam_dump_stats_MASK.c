
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buffer_count; int frame_count; int frames_skipped; int frames_discarded; int eos_seen; int maximum_frame_bytes; int total_bytes; int corrupt_macroblocks; } ;
typedef TYPE_1__ MMAL_PARAMETER_STATISTICS_T ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, MMAL_PARAMETER_STATISTICS_T* VAR_1)
{
   FUNC_0("[%s]\n", VAR_0);
   FUNC_0("buffer_count: %u\n", VAR_1->buffer_count);
   FUNC_0("frame_count: %u\n", VAR_1->frame_count);
   FUNC_0("frames_skipped: %u\n", VAR_1->frames_skipped);
   FUNC_0("frames_discarded: %u\n", VAR_1->frames_discarded);
   FUNC_0("eos_seen: %u\n", VAR_1->eos_seen);
   FUNC_0("maximum_frame_bytes: %u\n", VAR_1->maximum_frame_bytes);
   FUNC_0("total_bytes_hi: %u\n", (uint32_t)(VAR_1->total_bytes >> 32));
   FUNC_0("total_bytes_lo: %u\n", (uint32_t)(VAR_1->total_bytes));
   FUNC_0("corrupt_macroblocks: %u\n", VAR_1->corrupt_macroblocks);
}
