
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3c_data {int nmtus; unsigned short* mtus; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct t3c_data *VAR_0, unsigned short VAR_1)
{
 int VAR_2 = 0;

 while (VAR_2 < VAR_0->nmtus - 1 && VAR_0->mtus[VAR_2 + 1] <= VAR_1)
  ++VAR_2;
 return VAR_2;
}
