
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__ rcv_scale; } ;
struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_idealsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sockbuf*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_1, struct sockbuf *VAR_2,
 u_int32_t VAR_3, u_int32_t VAR_4, u_int32_t VAR_5)
{

 VAR_3 = FUNC_1(VAR_3, VAR_5);





 VAR_3 = FUNC_1(VAR_3, VAR_0 << VAR_1->rcv_scale);


 if (VAR_3 > VAR_2->sb_hiwat &&
  (FUNC_2(VAR_2, VAR_3) == 1)) {
  VAR_2->sb_idealsize = FUNC_1(FUNC_0(VAR_2->sb_idealsize,
      (VAR_4 != 0) ? VAR_4 : VAR_3), VAR_5);




  VAR_2->sb_idealsize = FUNC_1(VAR_2->sb_idealsize,
   VAR_0 << VAR_1->rcv_scale);
 }
}
