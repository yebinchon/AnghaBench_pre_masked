
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct stlport *VAR_2, int VAR_3)
{
 FUNC_1(VAR_3, (VAR_2->ioaddr + VAR_0));
 return FUNC_0(VAR_2->ioaddr + VAR_1);
}
