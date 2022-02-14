
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_6,
        unsigned long VAR_7,
        unsigned long VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12;

 VAR_11 = (VAR_7 * VAR_4);
 VAR_11 /= (VAR_1 * VAR_9 * 1000000000UL);

 VAR_12 = FUNC_0(VAR_0);
 VAR_10 = (VAR_12 & VAR_2)
  >> VAR_3;

 VAR_12 &= ~VAR_2;
 VAR_12 |= VAR_11 << VAR_3;
 FUNC_2(VAR_0, VAR_12);
 VAR_12 = FUNC_0(VAR_0);

 if (VAR_6 && !(VAR_12 & VAR_5)) {
  unsigned long VAR_13;




  VAR_13 = (VAR_1 *
    (VAR_11 + VAR_10) *
    1000000UL *
    VAR_8) / VAR_7;
  FUNC_1(VAR_13 + 1UL);
 }
}
