
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ipw_priv*) ;

__attribute__((used)) static void FUNC_2(struct ipw_priv *VAR_1)
{
 int VAR_2;

 if (VAR_1->status & VAR_0) {
  FUNC_0("Ignoring concurrent scan abort request.\n");
  return;
 }
 VAR_1->status |= VAR_0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_0("Request to abort scan failed.\n");
}
