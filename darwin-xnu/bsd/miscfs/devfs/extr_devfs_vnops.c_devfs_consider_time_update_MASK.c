
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {long tv_sec; } ;
struct TYPE_9__ {int tv_sec; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_10__ {int tv_sec; } ;
struct TYPE_11__ {TYPE_2__ dn_mtime; scalar_t__ dn_update; TYPE_1__ dn_atime; scalar_t__ dn_access; TYPE_3__ dn_ctime; scalar_t__ dn_change; } ;
typedef TYPE_4__ devnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (long,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (struct timeval*) ;

__attribute__((used)) static void
FUNC_4(devnode_t *VAR_3, uint32_t VAR_4)
{
 struct timeval VAR_5;
 long VAR_6;

 FUNC_3(&VAR_5);
 VAR_6 = VAR_5.tv_sec;

 if (VAR_3->dn_change || (VAR_4 & VAR_1)) {
  if (FUNC_0(VAR_6, VAR_3->dn_ctime.tv_sec)) {
   FUNC_2(VAR_3, VAR_4);
   return;
  }
 }
 if (VAR_3->dn_access || (VAR_4 & VAR_0)) {
  if (FUNC_0(VAR_6, VAR_3->dn_atime.tv_sec)) {
   FUNC_2(VAR_3, VAR_4);
   return;
  }
 }
 if (VAR_3->dn_update || (VAR_4 & VAR_2)) {
  if (FUNC_0(VAR_6, VAR_3->dn_mtime.tv_sec)) {
   FUNC_2(VAR_3, VAR_4);
   return;
  }
 }


 FUNC_1(VAR_3, VAR_4);

 return;
}
