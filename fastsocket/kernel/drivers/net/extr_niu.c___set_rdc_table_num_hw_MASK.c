
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_2, unsigned long VAR_3,
       int VAR_4, int VAR_5)
{
 u64 VAR_6 = FUNC_0(VAR_3);
 VAR_6 &= ~(VAR_0 | VAR_1);
 VAR_6 |= VAR_4;
 if (VAR_5)
  VAR_6 |= VAR_1;
 FUNC_1(VAR_3, VAR_6);
}
