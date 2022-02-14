
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_adapter {int flags; } ;


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
 int FUNC_0 (struct jme_adapter*,int ,int) ;
 int FUNC_1 (struct jme_adapter*,char*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct jme_adapter *VAR_14, int VAR_15)
{
 switch (VAR_15) {
 case 131:
  FUNC_0(VAR_14, VAR_1,
   ((VAR_7 << VAR_3) & VAR_2) |
   ((VAR_6 << VAR_5) & VAR_4));
  break;
 case 130:
  FUNC_0(VAR_14, VAR_1,
   ((VAR_9 << VAR_3) & VAR_2) |
   ((VAR_8 << VAR_5) & VAR_4));
  break;
 case 129:
  FUNC_0(VAR_14, VAR_1,
   ((VAR_11 << VAR_3) & VAR_2) |
   ((VAR_10 << VAR_5) & VAR_4));
  break;
 case 128:
  FUNC_0(VAR_14, VAR_1,
   ((VAR_13 << VAR_3) & VAR_2) |
   ((VAR_12 << VAR_5) & VAR_4));
  break;
 default:
  break;
 }
 FUNC_3();

 if (!(FUNC_2(VAR_0, &VAR_14->flags)))
  FUNC_1(VAR_14, "Switched to PCC_P%d\n", VAR_15);
}
