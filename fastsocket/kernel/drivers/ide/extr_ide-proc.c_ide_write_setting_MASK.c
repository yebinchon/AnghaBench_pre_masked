
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_proc_devset {int min; int max; struct ide_devset* setting; } ;
struct ide_devset {int flags; int set; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ide_devset const*,int) ;

__attribute__((used)) static int FUNC_2(ide_drive_t *VAR_5,
        const struct ide_proc_devset *VAR_6, int VAR_7)
{
 const struct ide_devset *VAR_8 = VAR_6->setting;

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 if (!VAR_8->set)
  return -VAR_4;
 if ((VAR_8->flags & VAR_1)
     && (VAR_7 < VAR_6->min || VAR_7 > VAR_6->max))
  return -VAR_3;
 return FUNC_1(VAR_5, VAR_8, VAR_7);
}
