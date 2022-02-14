
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bps_data {int modify_checksum; int modify_offset; int * modify_data; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static uint8_t FUNC_1(struct bps_data *VAR_0)
{
   uint8_t VAR_1 = VAR_0->modify_data[VAR_0->modify_offset++];
   VAR_0->modify_checksum = ~(FUNC_0(
         ~VAR_0->modify_checksum, &VAR_1, 1));
   return VAR_1;
}
