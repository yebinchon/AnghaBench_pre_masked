
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_args {scalar_t__ token; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rtas_args*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ) ;
 struct rtas_args VAR_1 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void)
{
 struct rtas_args *VAR_2 = &VAR_1;

 FUNC_4();

 FUNC_0(VAR_2->token == VAR_0);

 FUNC_6("cpu %u (hwid %u) Ready to die...\n",
        FUNC_7(), FUNC_3());
 FUNC_2(FUNC_1(VAR_2));

 FUNC_5("Alas, I survived.\n");
}
