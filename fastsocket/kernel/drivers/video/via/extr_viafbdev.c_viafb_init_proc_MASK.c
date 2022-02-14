
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_8__ {TYPE_3__* chip_info; } ;
struct TYPE_6__ {scalar_t__ lvds_chip_name; } ;
struct TYPE_5__ {scalar_t__ lvds_chip_name; } ;
struct TYPE_7__ {TYPE_2__ lvds_chip_info2; TYPE_1__ lvds_chip_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,struct proc_dir_entry*,int *) ;
 struct proc_dir_entry* FUNC_1 (char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static void FUNC_2(struct proc_dir_entry **VAR_7)
{
 *VAR_7 = FUNC_1("viafb", ((void*)0));
 if (VAR_7) {
  FUNC_0("dvp0", 0, *VAR_7, &VAR_3);
  FUNC_0("dvp1", 0, *VAR_7, &VAR_4);
  FUNC_0("dfph", 0, *VAR_7, &VAR_1);
  FUNC_0("dfpl", 0, *VAR_7, &VAR_2);
  if (VAR_0 == VAR_6->chip_info->lvds_chip_info.
   lvds_chip_name || VAR_0 ==
      VAR_6->chip_info->lvds_chip_info2.lvds_chip_name) {
   FUNC_0("vt1636", 0, *VAR_7, &VAR_5);
  }

 }
}
