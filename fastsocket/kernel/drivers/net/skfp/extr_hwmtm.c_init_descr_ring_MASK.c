
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* rxd_nrdadr; struct TYPE_2__* rxd_next; void* rxd_rbctrl; } ;
union s_fp_descr {TYPE_1__ r; } ;
typedef int u_long ;
struct s_smc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct s_smc*,void*) ;

__attribute__((used)) static u_long FUNC_4(struct s_smc *VAR_2,
         union s_fp_descr volatile *VAR_3,
         int VAR_4)
{
 int VAR_5 ;
 union s_fp_descr volatile *VAR_6 ;
 union s_fp_descr volatile *VAR_7 ;
 u_long VAR_8 ;

 FUNC_0("descr ring starts at = %x ",(void *)VAR_3,0,3) ;
 for (VAR_5=VAR_4-1, VAR_6=VAR_3; VAR_5 ; VAR_5--) {
  VAR_7 = VAR_6 ;
  VAR_6++ ;
  VAR_7->r.rxd_rbctrl = FUNC_2(VAR_0) ;
  VAR_7->r.rxd_next = &VAR_6->r ;
  VAR_8 = FUNC_3(VAR_2,(void *)VAR_6) ;
  VAR_7->r.rxd_nrdadr = FUNC_2(VAR_8) ;
 }
 FUNC_0("descr ring ends at = %x ",(void *)VAR_6,0,3) ;
 VAR_6->r.rxd_rbctrl = FUNC_2(VAR_0) ;
 VAR_6->r.rxd_next = &VAR_3->r ;
 VAR_8 = FUNC_3(VAR_2,(void *)VAR_3) ;
 VAR_6->r.rxd_nrdadr = FUNC_2(VAR_8) ;

 for (VAR_5=VAR_4, VAR_6=VAR_3; VAR_5 ; VAR_5--) {
  FUNC_1(&VAR_6->r,VAR_1) ;
  VAR_6++;
 }
 return(VAR_8) ;
}
