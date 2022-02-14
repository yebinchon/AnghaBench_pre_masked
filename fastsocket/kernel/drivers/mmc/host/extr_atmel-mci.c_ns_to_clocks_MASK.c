
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_mci {int bus_hz; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct atmel_mci *VAR_0,
     unsigned int VAR_1)
{
 return (VAR_1 * (VAR_0->bus_hz / 1000000) + 999) / 1000;
}
