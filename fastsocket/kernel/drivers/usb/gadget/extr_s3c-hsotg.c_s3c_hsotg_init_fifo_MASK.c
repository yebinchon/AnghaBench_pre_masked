
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hsotg {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct s3c_hsotg *VAR_2)
{
 FUNC_2(2048, VAR_2->regs + VAR_1);
 FUNC_2(FUNC_1(2048) |
        FUNC_0(0x1C0),
        VAR_2->regs + VAR_0);
}
