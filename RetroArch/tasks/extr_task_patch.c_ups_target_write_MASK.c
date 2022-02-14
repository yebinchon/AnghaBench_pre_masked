
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ups_data {size_t target_offset; size_t target_length; int target_checksum; int * target_data; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct ups_data *VAR_0, uint8_t VAR_1)
{

   if (VAR_0 && VAR_0->target_offset < VAR_0->target_length)
   {
      VAR_0->target_data[VAR_0->target_offset] = VAR_1;
      VAR_0->target_checksum =
         ~(FUNC_0(~VAR_0->target_checksum, &VAR_1, 1));
   }

   if (VAR_0)
      VAR_0->target_offset++;
}
