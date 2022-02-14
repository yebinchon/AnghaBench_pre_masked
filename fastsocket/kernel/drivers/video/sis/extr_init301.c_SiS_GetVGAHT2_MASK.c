
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned int SiS_VGAVT; unsigned int SiS_VGAVDE; unsigned int SiS_RVBHCMAX; unsigned int SiS_VT; unsigned int SiS_VDE; unsigned int SiS_RVBHCFACT; unsigned int SiS_HT; } ;



__attribute__((used)) static unsigned short
FUNC_0(struct SiS_Private *VAR_0)
{
  unsigned int VAR_1,VAR_2;

  VAR_2 = (VAR_0->SiS_VGAVT - VAR_0->SiS_VGAVDE) * VAR_0->SiS_RVBHCMAX;
  VAR_1 = (VAR_0->SiS_VT - VAR_0->SiS_VDE) * VAR_0->SiS_RVBHCFACT;
  VAR_1 = (VAR_1 * VAR_0->SiS_HT) / VAR_2;
  return (unsigned short)VAR_1;
}
