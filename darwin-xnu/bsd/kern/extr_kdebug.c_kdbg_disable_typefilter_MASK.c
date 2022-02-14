
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kdebug_flags; int kdebug_iops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 bool VAR_9 = VAR_7.kdebug_flags & VAR_3;
 VAR_7.kdebug_flags &= ~VAR_3;

 if ((VAR_7.kdebug_flags & (VAR_1 | VAR_2))) {
  FUNC_2(VAR_5, 0, VAR_6);
 } else {
  FUNC_2(VAR_5, 0, VAR_0);
 }
 FUNC_0();

 if (VAR_9) {





  FUNC_3(VAR_8);
  FUNC_1(VAR_7.kdebug_iops,
    VAR_4, VAR_8);
 }
}
