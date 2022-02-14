
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,int) ;
 unsigned long FUNC_4 (unsigned long,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static long FUNC_8(unsigned long VAR_7,
      unsigned long VAR_8, unsigned long VAR_9,
      unsigned long VAR_10, unsigned long VAR_11,
      int VAR_12, int VAR_13)
{
 unsigned long VAR_14;
 u64 VAR_15, VAR_16, VAR_17;


 if (VAR_11 & VAR_1)
  return -1;

 if (!(VAR_11 & VAR_0))
  FUNC_0("hpte_insert(group=%lx, va=%016lx, pa=%016lx, "
   "rflags=%lx, vflags=%lx, psize=%d)\n",
  VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

 VAR_15 = FUNC_4(VAR_8, VAR_12, VAR_3) |
  VAR_11 | VAR_2;
 VAR_16 = FUNC_3(VAR_9, VAR_12) | VAR_10;

 if (!(VAR_11 & VAR_0))
  FUNC_0(" hpte_v=%016lx, hpte_r=%016lx\n", VAR_15, VAR_16);

 if (VAR_10 & VAR_5)
  VAR_16 &= ~VAR_4;

 FUNC_5(&VAR_6);
 VAR_14 = FUNC_2(VAR_7);
 if (VAR_14 == 0) {
  if (!(VAR_11 & VAR_0))
   FUNC_0(" full\n");
  FUNC_6(&VAR_6);
  return -1;
 }

 VAR_14 = FUNC_1(0, VAR_7, VAR_14 << 48,
  VAR_15, VAR_16, &VAR_17);
 FUNC_6(&VAR_6);






 if (FUNC_7(VAR_14 != 0)) {
  if (!(VAR_11 & VAR_0))
   FUNC_0(" lpar err %lx\n", VAR_14);
  return -2;
 }
 if (!(VAR_11 & VAR_0))
  FUNC_0(" -> slot: %lx\n", VAR_17);


 return (VAR_17 ^ VAR_7) & 15;
}
