
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vpi ;
struct TYPE_5__ {int vi_stat; } ;
struct TYPE_6__ {TYPE_1__ vip_vi; } ;
struct TYPE_8__ {int vi_stat; } ;
struct TYPE_7__ {TYPE_4__ vip_vi; } ;
struct proc_vnodepathinfo {TYPE_2__ pvi_rdir; TYPE_3__ pvi_cdir; } ;
typedef int fdOpenInfoRef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ,int ,struct proc_vnodepathinfo*,int) ;

__attribute__((used)) static int
FUNC_2(fdOpenInfoRef VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct proc_vnodepathinfo VAR_7;

 VAR_5 = FUNC_1(VAR_4, VAR_1, 0, &VAR_7, sizeof(VAR_7));
 if (VAR_5 <= 0) {
  if (VAR_2 == VAR_0) {

   return 0;
  }
  return -1;
 } else if (VAR_5 < sizeof(VAR_7)) {

  return -1;
 }


 VAR_6 = FUNC_0(VAR_3, &VAR_7.pvi_cdir.vip_vi.vi_stat);
 if (VAR_6 != 0) {

  return VAR_6;
 }


 VAR_6 = FUNC_0(VAR_3, &VAR_7.pvi_rdir.vip_vi.vi_stat);
 if (VAR_6 != 0) {

  return VAR_6;
 }

 return 0;
}
