
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ipw_priv*,int ,int ,int) ;
 int FUNC_3 (struct ipw_priv*,int ,int ) ;
 int FUNC_4 (struct ipw_priv*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ipw_priv *VAR_7)
{
 int VAR_8;

 FUNC_1(">>\n");



 FUNC_3(VAR_7, VAR_3, VAR_2);


 FUNC_4(VAR_7, VAR_4,
      VAR_0);


 VAR_8 = FUNC_2(VAR_7, VAR_3,
     VAR_1, 250);
 if (VAR_8 < 0)
  FUNC_0("FAILED wait for clock stablization\n");


 FUNC_3(VAR_7, VAR_5, VAR_6);

 FUNC_5(10);


 FUNC_3(VAR_7, VAR_3, VAR_2);

 FUNC_1(">>\n");
 return 0;
}
