
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fileproc {int f_type; TYPE_1__* f_fglob; } ;
typedef int proc_t ;
typedef int boolean_t ;
struct TYPE_2__ {int fg_lflags; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

boolean_t
FUNC_1(proc_t VAR_3, struct fileproc *VAR_4)
{
 FUNC_0(VAR_3, VAR_2);

 switch (VAR_4->f_type) {
 case 128:
 case 129:
 case 131:
 case 130:
 case 132:
  return (0 == (VAR_4->f_fglob->fg_lflags & VAR_1));
 default:

  return VAR_0;
 }
}
