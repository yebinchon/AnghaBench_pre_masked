
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bootrom_header {int data_size; scalar_t__ block_checksum; scalar_t__ target_addr; scalar_t__ command; scalar_t__ payload; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct i2400m_bootrom_header*) ;

void FUNC_2(struct i2400m_bootrom_header *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  int VAR_1;
  u32 VAR_2 = 0;
  const u32 *VAR_3 = (void *) VAR_0->payload;
  for (VAR_1 = 0; VAR_1 < VAR_0->data_size / 4; VAR_1++)
   VAR_2 += FUNC_0(*VAR_3++);
  VAR_2 += VAR_0->command + VAR_0->target_addr + VAR_0->data_size;
  VAR_0->block_checksum = FUNC_0(VAR_2);
 }
}
