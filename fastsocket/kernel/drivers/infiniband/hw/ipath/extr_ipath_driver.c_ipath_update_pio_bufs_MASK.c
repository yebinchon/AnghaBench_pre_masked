
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {unsigned long* ipath_pioavailshadow; int ipath_flags; int* ipath_pioavailkernel; int volatile* ipath_pioavailregs_dma; int ipath_pioavregs; } ;
typedef int volatile __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned long long,unsigned long,unsigned long long,unsigned long,unsigned long long,unsigned long,unsigned long long,unsigned long) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int volatile) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 const unsigned VAR_9 = (unsigned)VAR_6->ipath_pioavregs;
 if (!VAR_6->ipath_pioavailregs_dma) {
  FUNC_1("Update shadow pioavail, but regs_dma NULL!\n");
  return;
 }
 if (VAR_4 & VAR_3) {

  volatile __le64 *VAR_10 = VAR_6->ipath_pioavailregs_dma;
  unsigned long *VAR_11 = VAR_6->ipath_pioavailshadow;

  FUNC_0(VAR_2, "Refill avail, dma0=%llx shad0=%lx, "
      "d1=%llx s1=%lx, d2=%llx s2=%lx, d3=%llx "
      "s3=%lx\n",
      (unsigned long long) FUNC_2(VAR_10[0]),
      VAR_11[0],
      (unsigned long long) FUNC_2(VAR_10[1]),
      VAR_11[1],
      (unsigned long long) FUNC_2(VAR_10[2]),
      VAR_11[2],
      (unsigned long long) FUNC_2(VAR_10[3]),
      VAR_11[3]);
  if (VAR_9 > 4)
   FUNC_0(
    VAR_2, "2nd group, dma4=%llx shad4=%lx, "
    "d5=%llx s5=%lx, d6=%llx s6=%lx, "
    "d7=%llx s7=%lx\n",
    (unsigned long long) FUNC_2(VAR_10[4]),
    VAR_11[4],
    (unsigned long long) FUNC_2(VAR_10[5]),
    VAR_11[5],
    (unsigned long long) FUNC_2(VAR_10[6]),
    VAR_11[6],
    (unsigned long long) FUNC_2(VAR_10[7]),
    VAR_11[7]);
 }
 FUNC_3(&VAR_5, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  u64 VAR_12, VAR_13, VAR_14, VAR_15;



  if (VAR_8 > 3 && (VAR_6->ipath_flags & VAR_1))
   VAR_14 = FUNC_2(VAR_6->ipath_pioavailregs_dma[VAR_8 ^ 1]);
  else
   VAR_14 = FUNC_2(VAR_6->ipath_pioavailregs_dma[VAR_8]);
  VAR_13 = VAR_6->ipath_pioavailkernel[VAR_8] &
   ~(VAR_6->ipath_pioavailshadow[VAR_8] ^ VAR_14);
  VAR_12 = VAR_13 << VAR_0;
  if (VAR_13 && (VAR_12 & VAR_6->ipath_pioavailshadow[VAR_8])) {
   VAR_15 = VAR_6->ipath_pioavailshadow[VAR_8] & ~VAR_12;
   VAR_15 |= VAR_14 & VAR_12;
   VAR_6->ipath_pioavailshadow[VAR_8] = VAR_15;
  }
 }
 FUNC_4(&VAR_5, VAR_7);
}
