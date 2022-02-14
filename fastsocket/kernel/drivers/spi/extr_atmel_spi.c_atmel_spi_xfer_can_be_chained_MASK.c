
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ delay_usecs; int cs_change; } ;



__attribute__((used)) static inline int FUNC_0(struct spi_transfer *VAR_0)
{
 return VAR_0->delay_usecs == 0 && !VAR_0->cs_change;
}
