
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ pri_size; scalar_t__ pri_address; } ;
struct TYPE_9__ {int vi_stat; } ;
struct TYPE_10__ {TYPE_2__ vip_vi; } ;
struct proc_regionwithpathinfo {TYPE_4__ prp_prinfo; TYPE_3__ prp_vip; } ;
typedef int rwpi ;
typedef TYPE_5__* fdOpenInfoRef ;
struct TYPE_8__ {scalar_t__ st_dev; } ;
struct TYPE_12__ {int flags; TYPE_1__ match_stat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,int ,scalar_t__,struct proc_regionwithpathinfo*,int) ;

__attribute__((used)) static int
FUNC_2(fdOpenInfoRef VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct proc_regionwithpathinfo VAR_10;

 if (VAR_6->flags & VAR_2) {


  VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_6->match_stat.st_dev, &VAR_10, sizeof(VAR_10));
  if (VAR_9 <= 0) {
   if ((VAR_5 == VAR_1) || (VAR_5 == VAR_0)) {

    return 0;
   }
   return -1;
  } else if (VAR_9 < sizeof(VAR_10)) {

   return -1;
  }

  VAR_8 = FUNC_0(VAR_6, &VAR_10.prp_vip.vip_vi.vi_stat);
  if (VAR_8 != 0) {

   return VAR_8;
  }
 } else {
  uint64_t VAR_11 = 0;

  while (1) {

   VAR_9 = FUNC_1(VAR_7, VAR_3, VAR_11, &VAR_10, sizeof(VAR_10));
   if (VAR_9 <= 0) {
    if ((VAR_5 == VAR_1) || (VAR_5 == VAR_0)) {

     break;
    }
    return -1;
   } else if (VAR_9 < sizeof(VAR_10)) {

    return -1;
   }

   VAR_8 = FUNC_0(VAR_6, &VAR_10.prp_vip.vip_vi.vi_stat);
   if (VAR_8 != 0) {

    return VAR_8;
   }

   VAR_11 = VAR_10.prp_prinfo.pri_address + VAR_10.prp_prinfo.pri_size;
  }
 }

 return 0;
}
