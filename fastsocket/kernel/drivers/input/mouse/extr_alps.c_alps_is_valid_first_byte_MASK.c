
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_data {unsigned char mask0; unsigned char byte0; } ;



__attribute__((used)) static bool FUNC_0(struct alps_data *VAR_0,
         unsigned char VAR_1)
{
 return (VAR_1 & VAR_0->mask0) == VAR_0->byte0;
}
