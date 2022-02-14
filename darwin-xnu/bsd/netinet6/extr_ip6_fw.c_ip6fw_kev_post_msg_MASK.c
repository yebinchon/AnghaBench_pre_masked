
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct kev_msg {int event_code; int kev_subclass; int kev_class; int vendor_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kev_msg*,int) ;
 int FUNC_1 (struct kev_msg*) ;

__attribute__((used)) static void
FUNC_2(u_int32_t VAR_3)
{
 struct kev_msg VAR_4;

 FUNC_0(&VAR_4, sizeof(struct kev_msg));

 VAR_4.vendor_code = VAR_2;
 VAR_4.kev_class = VAR_0;
 VAR_4.kev_subclass = VAR_1;
 VAR_4.event_code = VAR_3;

 FUNC_1(&VAR_4);

}
