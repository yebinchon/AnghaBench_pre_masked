
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct sx_port*,int ) ;
 int FUNC_4 (struct sx_port*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct sx_port *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 FUNC_0();

 VAR_7 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5 >= 0)
  VAR_7 = VAR_5 ? (VAR_7 | VAR_0) : (VAR_7 & ~VAR_0);
 if (VAR_6 >= 0)
  VAR_7 = VAR_6 ? (VAR_7 | VAR_1) : (VAR_7 & ~VAR_1);
 FUNC_4(VAR_4, VAR_3, VAR_7);
 FUNC_2(VAR_2, "setsignals: %d/%d\n", VAR_5, VAR_6);

 FUNC_1();
}
