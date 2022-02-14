
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int kdebug_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_2();

 if (VAR_1.kdebug_flags & VAR_0) {
  FUNC_0(VAR_3 != ((void*)0));
  FUNC_1(VAR_5, (vm_offset_t)VAR_3, VAR_4);
  VAR_3 = ((void*)0);
  VAR_4 = 0;
  VAR_2 = 0;
  VAR_1.kdebug_flags &= ~VAR_0;
 }
}
