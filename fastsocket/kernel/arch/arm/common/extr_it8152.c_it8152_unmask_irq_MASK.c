
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_3)
{
       if (VAR_3 >= FUNC_0(0)) {
        FUNC_4((FUNC_3(VAR_0) &
        ~(1 << (VAR_3 - FUNC_0(0)))),
       VAR_0);
       } else if (VAR_3 >= FUNC_1(0)) {
        FUNC_4((FUNC_3(VAR_1) &
        ~(1 << (VAR_3 - FUNC_1(0)))),
       VAR_1);
       } else if (VAR_3 >= FUNC_2(0)) {
        FUNC_4((FUNC_3(VAR_2) &
        ~(1 << (VAR_3 - FUNC_2(0)))),
       VAR_2);
       }
}
