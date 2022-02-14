
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {int ipath_pioavregs; int ipath_flags; int* ipath_pioavailshadow; int* ipath_pioavailkernel; int * ipath_pioavailregs_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned long long,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipath_devdata *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_2, VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_3->ipath_pioavregs; VAR_4++) {
  u64 VAR_7, VAR_8;

  VAR_5 = (VAR_4 > 3 && (VAR_3->ipath_flags & VAR_1)) ?
   VAR_4 ^ 1 : VAR_4;
  VAR_7 = FUNC_1(VAR_3->ipath_pioavailregs_dma[VAR_5]);




  VAR_8 = VAR_3->ipath_pioavailshadow[VAR_4];
  VAR_3->ipath_pioavailshadow[VAR_4] = VAR_7 |
   ((~VAR_3->ipath_pioavailkernel[VAR_4] <<
   VAR_0) &
   0xaaaaaaaaaaaaaaaaULL);
  if (VAR_8 != VAR_3->ipath_pioavailshadow[VAR_4])
   FUNC_0("shadow[%d] was %Lx, now %lx\n",
    VAR_4, (unsigned long long) VAR_8,
    VAR_3->ipath_pioavailshadow[VAR_4]);
 }
 FUNC_3(&VAR_2, VAR_6);
}
