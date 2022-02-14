
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ether_header {int dummy; } ;
typedef int ifnet_t ;
typedef TYPE_1__* if_fake_ref ;
struct TYPE_3__ {int iff_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(if_fake_ref VAR_11, ifnet_t VAR_12)
{
 (void)FUNC_2(VAR_12, 0, -1);
 FUNC_0(VAR_12, VAR_1);
 FUNC_1(VAR_12, 0);
 FUNC_5(VAR_12, VAR_0);
 FUNC_3(VAR_12,
   VAR_2 | VAR_4 | VAR_5,
   0xffff);
 FUNC_4(VAR_12, sizeof(struct ether_header));
 if ((VAR_11->iff_flags & VAR_3) != 0) {
  FUNC_6(VAR_12,
      VAR_6 | VAR_7 | VAR_9 |
      VAR_8 | VAR_10);
 } else {
  FUNC_6(VAR_12, 0);
 }
}
