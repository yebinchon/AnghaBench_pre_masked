
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {int (* hpte_updatepp ) (unsigned long,unsigned long,unsigned long,unsigned int,int,int) ;long (* hpte_insert ) (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int) ;int (* hpte_remove ) (unsigned long) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long,unsigned long,unsigned long,int,unsigned int,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,int,int) ;
 unsigned long FUNC_7 (unsigned long,unsigned long,int) ;
 unsigned long VAR_20 ;
 int * FUNC_8 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;
 int * VAR_21 ;
 int FUNC_11 (unsigned int) ;
 TYPE_1__ VAR_22 ;
 unsigned long FUNC_12 (int ) ;
 unsigned long FUNC_13 (int ) ;
 int FUNC_14 (unsigned long,unsigned long,unsigned long,unsigned int,int,int) ;
 long FUNC_15 (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int) ;
 long FUNC_16 (unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned int,int) ;
 int FUNC_17 (unsigned long) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (unsigned long) ;

int FUNC_20(struct mm_struct *VAR_23, unsigned long VAR_24,
     unsigned long VAR_25, unsigned long VAR_26, int VAR_27,
     unsigned long VAR_28)
{
 pte_t *VAR_29;
 unsigned long VAR_30, VAR_31;
 unsigned long VAR_32, VAR_33, VAR_34, VAR_35;
 long VAR_36;
 int VAR_37 = FUNC_19(VAR_25);
 unsigned int VAR_38;
 int VAR_39;

 VAR_38 = FUNC_3(VAR_23, VAR_25);

 if (!VAR_21[VAR_38])
  return 1;
 VAR_29 = FUNC_8(VAR_23, VAR_25);


 VAR_32 = FUNC_7(VAR_25, VAR_26, VAR_37);



 if (FUNC_18(!VAR_29))
  return 1;


 VAR_24 |= VAR_17;
 do {
  VAR_30 = FUNC_13(*VAR_29);

  if (FUNC_18(VAR_30 & VAR_6))
   return 0;

  if (FUNC_18(VAR_24 & ~VAR_30))
   return 1;


  VAR_31 = VAR_30 | VAR_6 | VAR_5;
  if (VAR_24 & VAR_18)
   VAR_31 |= VAR_8;
 } while(VAR_30 != FUNC_0((unsigned long *)VAR_29,
      VAR_30, VAR_31));

 VAR_33 = 0x2 | (!(VAR_31 & VAR_18));

 VAR_33 |= ((VAR_31 & VAR_9) ? 0 : VAR_2);
 VAR_39 = FUNC_11(VAR_38);
 VAR_35 = ((1UL) << VAR_39);
 if (!FUNC_2(VAR_0))


  VAR_33 = FUNC_5(VAR_33, FUNC_1(VAR_30),
             VAR_28, VAR_35);


 if (FUNC_18(VAR_30 & VAR_13)) {

  unsigned long VAR_40, VAR_41;

  VAR_40 = FUNC_6(VAR_32, VAR_39, VAR_37);
  if (VAR_30 & VAR_11)
   VAR_40 = ~VAR_40;
  VAR_41 = (VAR_40 & VAR_20) * VAR_1;
  VAR_41 += (VAR_30 & VAR_10) >> 12;

  if (VAR_22.hpte_updatepp(VAR_41, VAR_33, VAR_32, VAR_38,
      VAR_37, VAR_27) == -1)
   VAR_30 &= ~VAR_14;
 }

 if (FUNC_9(!(VAR_30 & VAR_13))) {
  unsigned long VAR_42 = FUNC_6(VAR_32, VAR_39, VAR_37);
  unsigned long VAR_43;

  VAR_34 = FUNC_12(FUNC_1(VAR_30)) << VAR_4;

repeat:
  VAR_43 = ((VAR_42 & VAR_20) *
         VAR_1) & ~0x7UL;





  VAR_31 = (VAR_31 & ~VAR_14) | VAR_13;


  VAR_33 |= (VAR_31 & (VAR_19 | VAR_16 |
          VAR_7 | VAR_12));


  VAR_36 = VAR_22.hpte_insert(VAR_43, VAR_32, VAR_34, VAR_33, 0,
       VAR_38, VAR_37);


  if (FUNC_18(VAR_36 == -1)) {
   VAR_43 = ((~VAR_42 & VAR_20) *
          VAR_1) & ~0x7UL;
   VAR_36 = VAR_22.hpte_insert(VAR_43, VAR_32, VAR_34, VAR_33,
        VAR_3,
        VAR_38, VAR_37);
   if (VAR_36 == -1) {
    if (FUNC_10() & 0x1)
     VAR_43 = ((VAR_42 & VAR_20) *
            VAR_1)&~0x7UL;

    VAR_22.hpte_remove(VAR_43);
    goto repeat;
                        }
  }





  if (FUNC_18(VAR_36 == -2)) {
   *VAR_29 = FUNC_1(VAR_30);
   FUNC_4(VAR_25, VAR_24, VAR_26, VAR_28, VAR_37,
        VAR_38, VAR_30);
   return -1;
  }

  VAR_31 |= (VAR_36 << 12) & (VAR_11 | VAR_10);
 }




 *VAR_29 = FUNC_1(VAR_31 & ~VAR_6);
 return 0;
}
