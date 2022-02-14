
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbi_info {size_t cc_payload_idx; int * cc_payload; } ;
struct vbi_cc {int dummy; } ;
struct ivtv {int i_flags; struct vbi_info vbi; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct vbi_cc const*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ivtv *VAR_1, const struct vbi_cc *VAR_2)
{
 struct vbi_info *VAR_3 = &VAR_1->vbi;

 if (VAR_3->cc_payload_idx < FUNC_0(VAR_3->cc_payload)) {
  FUNC_1(&VAR_3->cc_payload[VAR_3->cc_payload_idx], VAR_2,
         sizeof(struct vbi_cc));
  VAR_3->cc_payload_idx++;
  FUNC_2(VAR_0, &VAR_1->i_flags);
 }
}
