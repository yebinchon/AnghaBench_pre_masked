
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int slow_intr_mask; int mc5; int cm; int pmtx; int pmrx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*,int ) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*,int ,int) ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*) ;

int FUNC_18(struct adapter *VAR_18)
{
 u32 VAR_19 = FUNC_12(VAR_18, VAR_0);

 VAR_19 &= VAR_18->slow_intr_mask;
 if (!VAR_19)
  return 0;
 if (VAR_19 & VAR_8) {
  if (FUNC_2(VAR_18))
   FUNC_7(VAR_18);
  else
   FUNC_6(VAR_18);
 }
 if (VAR_19 & VAR_11)
  FUNC_13(VAR_18);
 if (VAR_19 & VAR_5)
  FUNC_4(&VAR_18->pmrx);
 if (VAR_19 & VAR_6)
  FUNC_4(&VAR_18->pmtx);
 if (VAR_19 & VAR_4)
  FUNC_4(&VAR_18->cm);
 if (VAR_19 & VAR_1)
  FUNC_0(VAR_18);
 if (VAR_19 & VAR_13)
  FUNC_15(VAR_18);
 if (VAR_19 & VAR_14)
  FUNC_16(VAR_18);
 if (VAR_19 & VAR_15)
  FUNC_17(VAR_18);
 if (VAR_19 & VAR_9)
  FUNC_8(VAR_18);
 if (VAR_19 & VAR_10)
  FUNC_9(VAR_18);
 if (VAR_19 & VAR_2)
  FUNC_1(VAR_18);
 if (VAR_19 & VAR_7)
  FUNC_5(VAR_18);
 if (VAR_19 & VAR_3)
  FUNC_10(&VAR_18->mc5);
 if (VAR_19 & VAR_16)
  FUNC_3(VAR_18, 0);
 if (VAR_19 & VAR_17)
  FUNC_3(VAR_18, 1);
 if (VAR_19 & VAR_12)
  FUNC_11(VAR_18);


 FUNC_14(VAR_18, VAR_0, VAR_19);
 FUNC_12(VAR_18, VAR_0);
 return 1;
}
