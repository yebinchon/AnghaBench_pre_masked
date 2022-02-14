
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int newvalue ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{







 if (VAR_4 == 0)
 {
  char VAR_5[12];

  FUNC_4(VAR_5, sizeof(VAR_5), "%d", VAR_1 * 2);

  FUNC_0("max_prepared_transactions", VAR_5, VAR_2,
      VAR_3);

  FUNC_1(VAR_0, (FUNC_3("number of prepared transactions has not been "
        "configured, overriding"),
       FUNC_2("max_prepared_transactions is now set to %s",
        VAR_5)));
 }
}
