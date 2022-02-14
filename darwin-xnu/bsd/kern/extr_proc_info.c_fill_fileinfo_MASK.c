
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_fileinfo {int fi_guardflags; int fi_status; int fi_type; int fi_offset; int fi_openflags; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef scalar_t__ proc_t ;
struct TYPE_2__ {int fg_count; int fg_offset; int fg_flag; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct fileproc*) ;
 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (struct fileproc*,int ) ;

void
FUNC_4(struct fileproc * VAR_16, proc_t VAR_17, int VAR_18, struct proc_fileinfo * VAR_19)
{
 VAR_19->fi_openflags = VAR_16->f_fglob->fg_flag;
 VAR_19->fi_status = 0;
 VAR_19->fi_offset = VAR_16->f_fglob->fg_offset;
 VAR_19->fi_type = FUNC_1(VAR_16->f_fglob);
 if (VAR_16->f_fglob->fg_count > 1)
  VAR_19->fi_status |= VAR_12;
 if (VAR_17 != VAR_13) {
  if ((FUNC_0(VAR_17, VAR_18) & VAR_14) != 0)
   VAR_19->fi_status |= VAR_9;
  if ((FUNC_0(VAR_17, VAR_18) & VAR_15) != 0)
   VAR_19->fi_status |= VAR_10;
 }
 if (FUNC_2(VAR_16) == VAR_0) {
  VAR_19->fi_status |= VAR_11;
  VAR_19->fi_guardflags = 0;
  if (FUNC_3(VAR_16, VAR_1))
   VAR_19->fi_guardflags |= VAR_5;
  if (FUNC_3(VAR_16, VAR_2))
   VAR_19->fi_guardflags |= VAR_6;
  if (FUNC_3(VAR_16, VAR_4))
   VAR_19->fi_guardflags |= VAR_8;
  if (FUNC_3(VAR_16, VAR_3))
   VAR_19->fi_guardflags |= VAR_7;
 }
}
