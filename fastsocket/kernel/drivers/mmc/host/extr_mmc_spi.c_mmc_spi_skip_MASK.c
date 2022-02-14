
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mmc_spi_host {TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__* status; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mmc_spi_host*,unsigned int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mmc_spi_host *VAR_2, unsigned long VAR_3,
   unsigned VAR_4, u8 VAR_5)
{
 u8 *VAR_6 = VAR_2->data->status;
 unsigned long VAR_7 = VAR_1;

 while (1) {
  int VAR_8;
  unsigned VAR_9;

  VAR_8 = FUNC_0(VAR_2, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   if (VAR_6[VAR_9] != VAR_5)
    return VAR_6[VAR_9];
  }

  if (FUNC_2(VAR_7 + VAR_3))
   break;





  if (FUNC_2(VAR_7+1))
   FUNC_1();
 }
 return -VAR_0;
}
