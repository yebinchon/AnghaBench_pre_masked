
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnode_t ;
struct knote {int kn_flags; int kn_vnode_kqok; int kn_vnode_use_ofst; int kn_filtid; int kn_data; } ;
struct kevent_internal_s {int dummy; } ;
typedef int int64_t ;
typedef int int32_t ;
typedef int dev_t ;
struct TYPE_4__ {scalar_t__ d_type; } ;
struct TYPE_3__ {int (* f_attach ) (struct knote*,struct kevent_internal_s*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct knote*) ;
 TYPE_2__* VAR_10 ;
 int* VAR_11 ;
 int FUNC_2 (struct knote*,struct kevent_internal_s*) ;
 TYPE_1__* FUNC_3 (struct knote*) ;
 int FUNC_4 (struct knote*,int ) ;
 size_t FUNC_5 (int ) ;
 size_t VAR_12 ;
 int FUNC_6 (int ,struct knote*) ;
 int FUNC_7 (int ,struct knote*) ;
 int FUNC_8 (struct knote*,struct kevent_internal_s*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(vnode_t VAR_13, struct knote *VAR_14, struct kevent_internal_s *VAR_15)
{
 dev_t VAR_16;

 FUNC_0(FUNC_9(VAR_13));

 VAR_16 = FUNC_10(VAR_13);
 if (FUNC_5(VAR_16) > VAR_12) {
  FUNC_4(VAR_14, VAR_5);
  return 0;
 }

 VAR_14->kn_vnode_kqok = !!(VAR_11[FUNC_5(VAR_16)] & VAR_2);
 VAR_14->kn_vnode_use_ofst = !!(VAR_11[FUNC_5(VAR_16)] & VAR_3);

 if (VAR_11[FUNC_5(VAR_16)] & VAR_1) {
  VAR_14->kn_filtid = VAR_7;
  return FUNC_7(VAR_16, VAR_14);
 } else if (VAR_11[FUNC_5(VAR_16)] & VAR_0) {
  VAR_14->kn_filtid = VAR_6;
  return FUNC_6(VAR_16, VAR_14);
 } else if (VAR_10[FUNC_5(VAR_16)].d_type == VAR_4 && VAR_14->kn_vnode_kqok) {





  VAR_14->kn_filtid = VAR_8;
  return FUNC_3(VAR_14)->f_attach(VAR_14, VAR_15);
 }


 return FUNC_2(VAR_14, VAR_15);
}
