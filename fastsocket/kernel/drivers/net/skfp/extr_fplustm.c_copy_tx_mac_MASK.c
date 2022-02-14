
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct s_smc {int dummy; } ;
struct fddi_mac {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct s_smc*,int ) ;

__attribute__((used)) static void FUNC_6(struct s_smc *VAR_2, u_long VAR_3, struct fddi_mac *VAR_4,
   unsigned VAR_5, int VAR_6)




{
 int VAR_7 ;
 __le32 *VAR_8 ;

 FUNC_0() ;
 FUNC_2(VAR_5) ;

 VAR_8 = (__le32 *) VAR_4 ;
 for (VAR_7 = (VAR_6 + 3)/4 ; VAR_7 ; VAR_7--) {
  if (VAR_7 == 1) {

   FUNC_4(FUNC_1(VAR_0),VAR_1) ;
  }
  FUNC_5(VAR_2,FUNC_3(*VAR_8)) ;
  VAR_8++ ;
 }

 FUNC_4(FUNC_1(VAR_0),VAR_1) ;
 FUNC_5(VAR_2,VAR_3) ;
}
