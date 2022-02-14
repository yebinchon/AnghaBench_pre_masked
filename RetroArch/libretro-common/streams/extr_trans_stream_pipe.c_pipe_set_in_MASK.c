
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pipe_trans_stream {int in_size; int const* in; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, const uint8_t *VAR_1, uint32_t VAR_2)
{
   struct pipe_trans_stream *VAR_3 = (struct pipe_trans_stream *) VAR_0;
   VAR_3->in = VAR_1;
   VAR_3->in_size = VAR_2;
}
