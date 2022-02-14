
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int __u32 ;
typedef int __le32 ;


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
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(__le32 VAR_14, int VAR_15, umode_t *VAR_16,
     umode_t *VAR_17)
{
 __u32 VAR_18 = FUNC_2(VAR_14);
 if (VAR_15 == VAR_1) {
  if (VAR_18 & VAR_6)
   *VAR_17 &= ~VAR_11;

  if ((VAR_18 & VAR_9) ||
   ((VAR_18 & VAR_5) == VAR_5))
   *VAR_17 &= ~VAR_12;
  if ((VAR_18 & VAR_8) ||
   ((VAR_18 & VAR_4) == VAR_4))
   *VAR_17 &= ~VAR_10;
  if ((VAR_18 & VAR_7) ||
   ((VAR_18 & VAR_3) == VAR_3))
   *VAR_17 &= ~VAR_13;
  return;
 } else if (VAR_15 != VAR_0) {
  FUNC_0(1, "unknown access control type %d", VAR_15);
  return;
 }


 if (VAR_18 & VAR_6) {
  *VAR_16 |= (VAR_11 & (*VAR_17));
  FUNC_1(VAR_2, "all perms");
  return;
 }
 if ((VAR_18 & VAR_9) ||
   ((VAR_18 & VAR_5) == VAR_5))
  *VAR_16 |= (VAR_12 & (*VAR_17));
 if ((VAR_18 & VAR_8) ||
   ((VAR_18 & VAR_4) == VAR_4))
  *VAR_16 |= (VAR_10 & (*VAR_17));
 if ((VAR_18 & VAR_7) ||
   ((VAR_18 & VAR_3) == VAR_3))
  *VAR_16 |= (VAR_13 & (*VAR_17));

 FUNC_1(VAR_2, "access flags 0x%x mode now 0x%x", VAR_18, *VAR_16);
 return;
}
