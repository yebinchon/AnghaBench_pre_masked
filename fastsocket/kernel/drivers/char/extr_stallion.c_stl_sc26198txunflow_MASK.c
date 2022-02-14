
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct stlport {int istate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 unsigned char FUNC_1 (struct stlport*,int ) ;
 int FUNC_2 (struct stlport*,int ,unsigned char) ;
 int FUNC_3 (struct stlport*) ;

__attribute__((used)) static void FUNC_4(struct stlport *VAR_5, struct tty_struct *VAR_6)
{
 unsigned char VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_2, (VAR_7 & ~VAR_3));
 FUNC_2(VAR_5, VAR_4, VAR_1);
 FUNC_3(VAR_5);
 FUNC_2(VAR_5, VAR_2, VAR_7);
 FUNC_0(VAR_0, &VAR_5->istate);
}
