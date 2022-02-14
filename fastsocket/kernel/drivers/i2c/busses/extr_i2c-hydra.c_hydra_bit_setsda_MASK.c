
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3)
  VAR_4 &= ~VAR_1;
 else {
  VAR_4 &= ~VAR_0;
  VAR_4 |= VAR_1;
 }
 FUNC_1(VAR_2, VAR_4);
}
