
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
struct image_params {scalar_t__ ip_vp; scalar_t__ ip_arch_offset; } ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ p_textvp; scalar_t__ p_textoff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(proc_t VAR_1, struct image_params *VAR_2)
{
 vnode_t VAR_3;
 off_t VAR_4;
 vnode_t VAR_5 = VAR_1->p_textvp;
 int VAR_6;

 VAR_3 = VAR_2->ip_vp;
 VAR_4 = VAR_2->ip_arch_offset;

 if (VAR_3 == VAR_0)
  FUNC_0("exec_resettextvp: expected valid vp");

 VAR_6 = FUNC_5(VAR_3);
 FUNC_1(VAR_1);
 if (VAR_6 == 0) {
  VAR_1->p_textvp = VAR_3;
  VAR_1->p_textoff = VAR_4;
 } else {
  VAR_1->p_textvp = VAR_0;
  VAR_1->p_textoff = 0;
 }
 FUNC_2(VAR_1);

 if ( VAR_5 != VAR_0) {
  if (FUNC_3(VAR_5) == 0) {
   FUNC_6(VAR_5);
   FUNC_4(VAR_5);
  }
 }

}
