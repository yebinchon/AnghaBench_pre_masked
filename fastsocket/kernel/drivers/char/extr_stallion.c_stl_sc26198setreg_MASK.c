
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int uartaddr; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct stlport *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0((VAR_3 | VAR_2->uartaddr), (VAR_2->ioaddr + VAR_0));
 FUNC_0(VAR_4, (VAR_2->ioaddr + VAR_1));
}
