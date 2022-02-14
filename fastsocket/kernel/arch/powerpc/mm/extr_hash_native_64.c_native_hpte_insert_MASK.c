
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; unsigned long r; } ;


 int FUNC_0 (char*,int,unsigned long,unsigned long,...) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,int,int) ;
 struct hash_pte* VAR_4 ;
 int FUNC_4 (struct hash_pte*) ;
 int FUNC_5 (struct hash_pte*) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_5, unsigned long VAR_6,
   unsigned long VAR_7, unsigned long VAR_8,
   unsigned long VAR_9, int VAR_10, int VAR_11)
{
 struct hash_pte *VAR_12 = VAR_4 + VAR_5;
 unsigned long VAR_13, VAR_14;
 int VAR_15;

 if (!(VAR_9 & VAR_1)) {
  FUNC_0("    insert(group=%lx, va=%016lx, pa=%016lx,"
   " rflags=%lx, vflags=%lx, psize=%d)\n",
   VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  if (! (VAR_12->v & VAR_3)) {

   FUNC_4(VAR_12);
   if (! (VAR_12->v & VAR_3))
    break;
   FUNC_5(VAR_12);
  }

  VAR_12++;
 }

 if (VAR_15 == VAR_0)
  return -1;

 VAR_13 = FUNC_3(VAR_6, VAR_10, VAR_11) | VAR_9 | VAR_3;
 VAR_14 = FUNC_2(VAR_7, VAR_10) | VAR_8;

 if (!(VAR_9 & VAR_1)) {
  FUNC_0(" i=%x hpte_v=%016lx, hpte_r=%016lx\n",
   VAR_15, VAR_13, VAR_14);
 }

 VAR_12->r = VAR_14;

 FUNC_1();




 VAR_12->v = VAR_13;

 __asm__ __volatile__ ("ptesync" : : : "memory");

 return VAR_15 | (!!(VAR_9 & VAR_2) << 3);
}
