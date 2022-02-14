
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
typedef int blkcnt_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_feature_ro_compat; int s_feature_incompat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*,int) ;
 scalar_t__ FUNC_1 (struct super_block*,int) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_3 (struct super_block*,int ,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_4, int VAR_5)
{
 if (FUNC_0(VAR_4, ~VAR_0)) {
  FUNC_3(VAR_4, VAR_3,
   "Couldn't mount because of "
   "unsupported optional features (%x)",
   (FUNC_4(FUNC_2(VAR_4)->s_es->s_feature_incompat) &
   ~VAR_0));
  return 0;
 }

 if (VAR_5)
  return 1;


 if (FUNC_1(VAR_4, ~VAR_2)) {
  FUNC_3(VAR_4, VAR_3, "couldn't mount RDWR because of "
    "unsupported optional features (%x)",
    (FUNC_4(FUNC_2(VAR_4)->s_es->s_feature_ro_compat) &
    ~VAR_2));
  return 0;
 }




 if (FUNC_1(VAR_4, VAR_1)) {
  if (sizeof(blkcnt_t) < sizeof(u64)) {
   FUNC_3(VAR_4, VAR_3, "Filesystem with huge files "
     "cannot be mounted RDWR without "
     "CONFIG_LBDAF");
   return 0;
  }
 }
 return 1;
}
