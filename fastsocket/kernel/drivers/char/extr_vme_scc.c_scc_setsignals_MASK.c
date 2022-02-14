
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_port {int dummy; } ;


 int FUNC_0 (struct scc_port*) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(struct scc_port *VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned char VAR_7;
 FUNC_0(VAR_3);

 FUNC_4(VAR_6);
 VAR_7 = FUNC_1(VAR_2);
 if (VAR_4 >= 0) VAR_7 = VAR_4? (VAR_7 | VAR_0): (VAR_7 & ~VAR_0);
 if (VAR_5 >= 0) VAR_7 = VAR_5? (VAR_7 | VAR_1): (VAR_7 & ~VAR_1);
 FUNC_2(VAR_2, VAR_7);
 FUNC_3(VAR_6);
}
