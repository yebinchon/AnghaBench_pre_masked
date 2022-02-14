
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (unsigned long,int,int) ;
 struct hash_pte* VAR_1 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct hash_pte*) ;
 int FUNC_6 (struct hash_pte*) ;
 int FUNC_7 (unsigned long,int,int,int) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_2, unsigned long VAR_3,
       int VAR_4, int VAR_5, int VAR_6)
{
 struct hash_pte *VAR_7 = VAR_1 + VAR_2;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 FUNC_4(VAR_10);

 FUNC_0("    invalidate(va=%016lx, hash: %x)\n", VAR_3, VAR_2);

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
 FUNC_5(VAR_7);
 VAR_8 = VAR_7->v;


 if (!FUNC_1(VAR_8, VAR_9) || !(VAR_8 & VAR_0))
  FUNC_6(VAR_7);
 else

  VAR_7->v = 0;


 FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_3(VAR_10);
}
