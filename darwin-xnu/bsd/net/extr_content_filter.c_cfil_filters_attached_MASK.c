
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct socket {int so_flags; TYPE_1__* so_cfil; } ;
struct cfil_entry {int cfe_flags; int * cfe_filter; } ;
struct TYPE_2__ {struct cfil_entry* cfi_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_5)
{
 struct cfil_entry *VAR_6;
 uint32_t VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_5)) {
  return FUNC_1(VAR_5, VAR_2);
 }

 if ((VAR_5->so_flags & VAR_4) == 0 || VAR_5->so_cfil == ((void*)0))
  return (0);

 FUNC_2(VAR_5);

 for (VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++) {
  VAR_6 = &VAR_5->so_cfil->cfi_entries[VAR_7 - 1];


  if (VAR_6->cfe_filter == ((void*)0))
   continue;
  if ((VAR_6->cfe_flags & VAR_1) == 0)
   continue;
  if ((VAR_6->cfe_flags & VAR_0) != 0)
   continue;
  VAR_8 = 1;
  break;
 }

 return (VAR_8);
}
