
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int,int) ;
 int FUNC_1 (struct hash_pte*,unsigned long,int*,int*,unsigned long*) ;
 struct hash_pte* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 struct hash_pte *VAR_8 = VAR_2;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = VAR_3 + 1;

 FUNC_3(VAR_7);




 FUNC_4(&VAR_4);

 VAR_6 = VAR_11 * VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_8++) {





  VAR_9 = VAR_8->v;





  if (VAR_9 & VAR_1) {
   FUNC_1(VAR_8, VAR_5, &VAR_12, &VAR_13, &VAR_10);
   VAR_8->v = 0;
   FUNC_0(VAR_10, VAR_12, VAR_13);
  }
 }

 asm volatile("eieio; tlbsync; ptesync":::"memory");
 FUNC_5(&VAR_4);
 FUNC_2(VAR_7);
}
