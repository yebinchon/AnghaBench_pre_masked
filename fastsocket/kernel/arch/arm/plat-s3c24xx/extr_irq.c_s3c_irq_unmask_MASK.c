
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4 != VAR_2 && VAR_4 != VAR_1)
  FUNC_2("s3c_irq_unmask %d\n", VAR_4);

 VAR_4 -= VAR_0;

 VAR_5 = FUNC_0(VAR_3);
 VAR_5 &= ~(1UL << VAR_4);
 FUNC_1(VAR_5, VAR_3);
}
