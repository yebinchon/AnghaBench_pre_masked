
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags; scalar_t__ so_extended_bk_start; int so_flags1; } ;
struct TYPE_2__ {scalar_t__ so_xbkidle_active; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct socket*,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int ,struct socket*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct socket *VAR_5)
{
 VAR_5->so_flags1 &= ~VAR_2;
 VAR_5->so_extended_bk_start = 0;

 FUNC_0(&VAR_4.so_xbkidle_active);
 FUNC_1(VAR_4.so_xbkidle_active >= 0);



 FUNC_4(FUNC_2(), VAR_5,
     VAR_1, VAR_0);
 if (VAR_5->so_flags & VAR_3) {
  FUNC_3(FUNC_2(), VAR_5,
      VAR_1);
 }
}
