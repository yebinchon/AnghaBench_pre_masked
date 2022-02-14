
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mppcb {int mpp_flags; int mpp_pcbe; int mpp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mppcb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct mppcb *VAR_5, uint32_t VAR_6)
{
 FUNC_0(VAR_5->mpp_flags & VAR_6);
 VAR_5->mpp_flags &= ~VAR_6;

 if (FUNC_2(VAR_5))
  return;

 if (VAR_5->mpp_flags & VAR_2) {
  VAR_5->mpp_flags &= ~VAR_2;

  FUNC_3(VAR_5->mpp_pcbe);
 }

 if (VAR_5->mpp_flags & VAR_1) {
  VAR_5->mpp_flags &= ~VAR_1;

  FUNC_5(VAR_5->mpp_socket);
 }

 if (VAR_5->mpp_flags & VAR_3) {
  VAR_5->mpp_flags &= ~VAR_3;

  FUNC_6(VAR_5->mpp_socket);
 }

 if (VAR_5->mpp_flags & VAR_0) {
  VAR_5->mpp_flags &= ~VAR_0;

  FUNC_1(VAR_5->mpp_pcbe);
 }

 if (VAR_5->mpp_flags & VAR_4) {
  VAR_5->mpp_flags &= ~VAR_4;

  FUNC_4();
 }
}
