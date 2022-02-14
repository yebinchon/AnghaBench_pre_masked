
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; (VAR_2 < VAR_1); VAR_2++)
  VAR_3 += (((0x1 << VAR_2) & VAR_0) ? 1 : 0);
 return VAR_3;
}
