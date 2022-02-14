
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlibrd {unsigned long memaddr; scalar_t__ iobase; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct stlibrd *VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(VAR_5, (VAR_6->iobase + VAR_2));
 FUNC_1(10);
 FUNC_0(VAR_3, (VAR_6->iobase + VAR_2));
 FUNC_1(100);

 VAR_7 = (VAR_6->memaddr & VAR_0) >> VAR_1;
 FUNC_0(VAR_7, (VAR_6->iobase + VAR_4));
}
