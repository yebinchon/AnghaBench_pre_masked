
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int32_t ;
struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_idealsize; } ;
struct mptcb {int mpt_mpte; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockbuf*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct mptcb *VAR_2, struct sockbuf *VAR_3,
 u_int32_t VAR_4, u_int32_t VAR_5)
{
 uint8_t VAR_6 = FUNC_2(VAR_2->mpt_mpte);


 VAR_4 = FUNC_1(VAR_4, VAR_1);





 VAR_4 = FUNC_1(VAR_4, VAR_0 << VAR_6);


 if (VAR_4 > VAR_3->sb_hiwat &&
  (FUNC_3(VAR_3, VAR_4) == 1)) {
  VAR_3->sb_idealsize = FUNC_1(FUNC_0(VAR_3->sb_idealsize,
      (VAR_5 != 0) ? VAR_5 : VAR_4), VAR_1);




  VAR_3->sb_idealsize = FUNC_1(VAR_3->sb_idealsize,
   VAR_0 << VAR_6);
 }
}
