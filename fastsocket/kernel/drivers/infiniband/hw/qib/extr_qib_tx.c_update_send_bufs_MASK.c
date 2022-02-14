
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_devdata {unsigned int pioavregs; int* pioavailkernel; int* pioavailshadow; int pioavail_lock; int * pioavailregs_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_1)
{
 unsigned long VAR_2;
 unsigned VAR_3;
 const unsigned VAR_4 = VAR_1->pioavregs;
 if (!VAR_1->pioavailregs_dma)
  return;
 FUNC_1(&VAR_1->pioavail_lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  u64 VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_7 = FUNC_0(VAR_1->pioavailregs_dma[VAR_3]);
  VAR_6 = VAR_1->pioavailkernel[VAR_3] &
   ~(VAR_1->pioavailshadow[VAR_3] ^ VAR_7);
  VAR_5 = VAR_6 << VAR_0;
  if (VAR_6 && (VAR_5 & VAR_1->pioavailshadow[VAR_3])) {
   VAR_8 = VAR_1->pioavailshadow[VAR_3] & ~VAR_5;
   VAR_8 |= VAR_7 & VAR_5;
   VAR_1->pioavailshadow[VAR_3] = VAR_8;
  }
 }
 FUNC_2(&VAR_1->pioavail_lock, VAR_2);
}
