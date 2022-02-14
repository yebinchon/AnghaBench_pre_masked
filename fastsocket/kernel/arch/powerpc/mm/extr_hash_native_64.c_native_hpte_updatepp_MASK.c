
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; unsigned long r; } ;


 int FUNC_0 (char*,...) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (unsigned long,int,int) ;
 struct hash_pte* VAR_5 ;
 int FUNC_3 (struct hash_pte*) ;
 int FUNC_4 (struct hash_pte*) ;
 int FUNC_5 (unsigned long,int,int,int) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_6, unsigned long VAR_7,
     unsigned long VAR_8, int VAR_9, int VAR_10,
     int VAR_11)
{
 struct hash_pte *VAR_12 = VAR_5 + VAR_6;
 unsigned long VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_10);

 FUNC_0("    update(va=%016lx, avpnv=%016lx, hash=%016lx, newpp=%x)",
  VAR_8, VAR_14 & VAR_3, VAR_6, VAR_7);

 FUNC_3(VAR_12);

 VAR_13 = VAR_12->v;


 if (!FUNC_1(VAR_13, VAR_14) || !(VAR_13 & VAR_4)) {
  FUNC_0(" -> miss\n");
  VAR_15 = -1;
 } else {
  FUNC_0(" -> hit\n");

  VAR_12->r = (VAR_12->r & ~(VAR_2 | VAR_1)) |
   (VAR_7 & (VAR_2 | VAR_1 | VAR_0));
 }
 FUNC_4(VAR_12);


 FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11);

 return VAR_15;
}
