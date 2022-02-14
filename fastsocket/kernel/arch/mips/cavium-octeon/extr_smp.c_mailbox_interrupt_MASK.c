
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int irqreturn_t ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 const int VAR_5 = FUNC_1();
 uint64_t VAR_6;


 VAR_6 = FUNC_2(FUNC_0(VAR_5));


 FUNC_3(FUNC_0(VAR_5), VAR_6);

 if (VAR_6 & VAR_1)
  FUNC_4();


 if (VAR_6 & VAR_2)
  asm volatile ("synci 0($0)\n");
 return VAR_0;
}
