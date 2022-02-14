
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct efx_spi_device {unsigned int const munge_address; } ;



__attribute__((used)) static inline u8
FUNC_0(const struct efx_spi_device *VAR_0,
        const u8 VAR_1, const unsigned int VAR_2)
{
 return VAR_1 | (((VAR_2 >> 8) & VAR_0->munge_address) << 3);
}
