
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int name; struct pi_adapter* pi; } ;
struct pi_adapter {int dummy; } ;


 int FUNC_0 (struct pt_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pi_adapter*) ;
 int FUNC_2 (struct pi_adapter*) ;
 int FUNC_3 (char*,int ,char*,...) ;
 int FUNC_4 (struct pt_unit*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pi_adapter*,int) ;
 int FUNC_7 (struct pi_adapter*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct pt_unit *VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
 struct pi_adapter *VAR_6 = VAR_2->pi;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 while (VAR_7 < VAR_4) {
  FUNC_5(VAR_3);
  VAR_7++;
  FUNC_1(VAR_6);
  FUNC_7(VAR_6, 6, FUNC_0(VAR_2));
  VAR_9 = FUNC_6(VAR_6, 7);
  VAR_8 = FUNC_6(VAR_6, 1);
  FUNC_2(VAR_6);
  if (VAR_9 & (VAR_0 | VAR_1))
   break;
 }
 if ((VAR_7 >= VAR_4) || (VAR_9 & VAR_0)) {
  if (VAR_7 >= VAR_4)
   FUNC_3("%s: %s DSC timeout\n", VAR_2->name, VAR_5);
  else
   FUNC_3("%s: %s stat=0x%x err=0x%x\n", VAR_2->name, VAR_5, VAR_9,
          VAR_8);
  FUNC_4(VAR_2, 0);
  return 0;
 }
 return 1;
}
