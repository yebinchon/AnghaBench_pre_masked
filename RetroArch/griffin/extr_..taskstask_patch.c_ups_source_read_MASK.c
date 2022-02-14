
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ups_data {scalar_t__ source_offset; scalar_t__ source_length; int* source_data; int source_checksum; } ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static uint8_t FUNC_1(struct ups_data *VAR_0)
{
   if (VAR_0 && VAR_0->source_offset < VAR_0->source_length)
   {
      uint8_t VAR_1 = VAR_0->source_data[VAR_0->source_offset++];
      VAR_0->source_checksum =
         ~(FUNC_0(~VAR_0->source_checksum, &VAR_1, 1));
      return VAR_1;
   }
   return 0x00;
}
