
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int osd_chroma_key; int osd_chroma_key_state; int osd_local_alpha_state; int osd_global_alpha; int osd_global_alpha_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ivtv*,int ,int,int ,int ,...) ;

void FUNC_1(struct ivtv *VAR_2)
{
 FUNC_0(VAR_2, VAR_1, 3,
  VAR_2->osd_global_alpha_state, VAR_2->osd_global_alpha, !VAR_2->osd_local_alpha_state);
 FUNC_0(VAR_2, VAR_0, 2, VAR_2->osd_chroma_key_state, VAR_2->osd_chroma_key);
}
