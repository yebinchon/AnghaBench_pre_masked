
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_spi_device {int dummy; } ;
struct efx_nic {int dummy; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 unsigned int FUNC_1 (struct efx_spi_device const*,int ,size_t) ;
 int FUNC_2 (struct efx_nic*,struct efx_spi_device const*,unsigned int,size_t,int const*,int *,size_t) ;
 int FUNC_3 (struct efx_nic*,struct efx_spi_device const*) ;
 int FUNC_4 (struct efx_spi_device const*,size_t) ;
 scalar_t__ FUNC_5 (int *,int const*,size_t) ;
 size_t FUNC_6 (size_t,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(struct efx_nic *VAR_7, const struct efx_spi_device *VAR_8,
   loff_t VAR_9, size_t VAR_10, size_t *VAR_11, const u8 *VAR_12)
{
 u8 VAR_13[VAR_2];
 size_t VAR_14, VAR_15 = 0;
 unsigned int VAR_16;
 int VAR_17 = 0;

 while (VAR_15 < VAR_10) {
  VAR_17 = FUNC_2(VAR_7, VAR_8, VAR_4, -1, ((void*)0), ((void*)0), 0);
  if (VAR_17)
   break;

  VAR_14 = FUNC_6(VAR_10 - VAR_15,
    FUNC_4(VAR_8, VAR_9 + VAR_15));
  VAR_16 = FUNC_1(VAR_8, VAR_5, VAR_9 + VAR_15);
  VAR_17 = FUNC_2(VAR_7, VAR_8, VAR_16, VAR_9 + VAR_15,
        VAR_12 + VAR_15, ((void*)0), VAR_14);
  if (VAR_17)
   break;

  VAR_17 = FUNC_3(VAR_7, VAR_8);
  if (VAR_17)
   break;

  VAR_16 = FUNC_1(VAR_8, VAR_3, VAR_9 + VAR_15);
  VAR_17 = FUNC_2(VAR_7, VAR_8, VAR_16, VAR_9 + VAR_15,
        ((void*)0), VAR_13, VAR_14);
  if (FUNC_5(VAR_13, VAR_12 + VAR_15, VAR_14)) {
   VAR_17 = -VAR_1;
   break;
  }

  VAR_15 += VAR_14;


  FUNC_0();
  if (FUNC_7(VAR_6)) {
   VAR_17 = -VAR_0;
   break;
  }
 }

 if (VAR_11)
  *VAR_11 = VAR_15;
 return VAR_17;
}
