
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_spi_device {unsigned int device_id; int size; int addr_len; int munge_address; int erase_command; int erase_size; int block_size; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_5,
      struct efx_spi_device *VAR_6,
      unsigned int VAR_7, u32 VAR_8)
{
 if (VAR_8 != 0) {
  VAR_6->device_id = VAR_7;
  VAR_6->size =
   1 << FUNC_0(VAR_8, VAR_4);
  VAR_6->addr_len =
   FUNC_0(VAR_8, VAR_0);
  VAR_6->munge_address = (VAR_6->size == 1 << 9 &&
          VAR_6->addr_len == 1);
  VAR_6->erase_command =
   FUNC_0(VAR_8, VAR_2);
  VAR_6->erase_size =
   1 << FUNC_0(VAR_8,
      VAR_3);
  VAR_6->block_size =
   1 << FUNC_0(VAR_8,
      VAR_1);
 } else {
  VAR_6->size = 0;
 }
}
