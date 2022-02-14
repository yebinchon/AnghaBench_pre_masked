
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; unsigned long r; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (long,int,struct hash_pte*) ;
 long FUNC_3 (struct hash_pte*,unsigned long) ;
 int FUNC_4 (long,int ) ;
 int FUNC_5 (long,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_6 (int ,int) ;
 unsigned long FUNC_7 (unsigned long,int,int ) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (unsigned long) ;

__attribute__((used)) static long FUNC_12(unsigned long VAR_7, unsigned long VAR_8,
    unsigned long VAR_9, unsigned long VAR_10,
    unsigned long VAR_11, int VAR_12, int VAR_13)
{
 long VAR_14;
 struct hash_pte VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_12 != VAR_4);







 if (VAR_11 & VAR_1)
  return -1;

 FUNC_8(VAR_7);

 VAR_14 = FUNC_3(&VAR_15, VAR_8 >> VAR_3);
 if (FUNC_11(VAR_15.v & VAR_2)) {
  if (VAR_11 & VAR_0) {
   FUNC_5(VAR_14, 0x10, 0);
   FUNC_4(VAR_14, VAR_6);
   FUNC_9(VAR_7);
   if (VAR_14 < 0)
    return 0x8 | (VAR_14 & 7);
   else
    return VAR_14 & 7;
  }
  FUNC_0();
 }

 if (VAR_14 == -1) {
  FUNC_9(VAR_7);
  return -1;
 }

 if (VAR_14 < 0) {
  VAR_11 |= VAR_1;
  VAR_16 = 1;
  VAR_14 &= 0x7fffffffffffffff;
 }


 VAR_15.v = FUNC_7(VAR_8, VAR_4, VAR_5) |
  VAR_11 | VAR_2;
 VAR_15.r = FUNC_6(FUNC_10(VAR_9), VAR_4) | VAR_10;


 FUNC_2(VAR_14, VAR_16, &VAR_15);

 FUNC_9(VAR_7);

 return (VAR_16 << 3) | (VAR_14 & 7);
}
