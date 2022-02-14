
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_4)
{
 int VAR_5;

 if (VAR_4->status & VAR_3) {
  FUNC_0("Aborting scan during shutdown.\n");
  FUNC_1(VAR_4);
 }

 if (VAR_4->status & VAR_0) {
  FUNC_0("Disassociating during shutdown.\n");
  FUNC_2(VAR_4);
 }

 FUNC_3(VAR_4);




 for (VAR_5 = 1000; VAR_5 && (VAR_4->status &
        (VAR_1 |
         VAR_0 | VAR_3)); VAR_5--)
  FUNC_5(10);

 if (VAR_4->status & (VAR_1 |
       VAR_0 | VAR_3))
  FUNC_0("Still associated or scanning...\n");
 else
  FUNC_0("Took %dms to de-init\n", 1000 - VAR_5);


 FUNC_4(VAR_4, 0);

 VAR_4->status &= ~VAR_2;
}
