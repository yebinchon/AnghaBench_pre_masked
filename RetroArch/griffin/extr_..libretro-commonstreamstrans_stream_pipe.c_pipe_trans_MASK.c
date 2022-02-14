
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pipe_trans_stream {scalar_t__ out_size; scalar_t__ in_size; int out; int in; } ;
typedef enum trans_stream_error { ____Placeholder_trans_stream_error } trans_stream_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(
   void *VAR_2, bool VAR_3,
   uint32_t *VAR_4, uint32_t *VAR_5,
   enum trans_stream_error *VAR_6)
{
   struct pipe_trans_stream *VAR_7 = (struct pipe_trans_stream *) VAR_2;

   if (VAR_7->out_size < VAR_7->in_size)
   {
      FUNC_0(VAR_7->out, VAR_7->in, VAR_7->out_size);
      *VAR_4 = *VAR_5 = VAR_7->out_size;
      VAR_7->in += VAR_7->out_size;
      VAR_7->out += VAR_7->out_size;
      *VAR_6 = VAR_0;
      return 0;
   }
   else
   {
      FUNC_0(VAR_7->out, VAR_7->in, VAR_7->in_size);
      *VAR_4 = *VAR_5 = VAR_7->in_size;
      VAR_7->in += VAR_7->in_size;
      VAR_7->out += VAR_7->in_size;
      *VAR_6 = VAR_1;
      return 1;
   }
}
