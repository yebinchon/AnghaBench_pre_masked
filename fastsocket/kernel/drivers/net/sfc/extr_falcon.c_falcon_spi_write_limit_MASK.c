
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_spi_device {size_t block_size; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;

__attribute__((used)) static size_t
FUNC_1(const struct efx_spi_device *VAR_1, size_t VAR_2)
{
 return FUNC_0(VAR_0,
     (VAR_1->block_size - (VAR_2 & (VAR_1->block_size - 1))));
}
