
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfb {struct sfb* sfb_fc_lists; struct sfb* sfb_bins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sfb*) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sfb*) ;

void
FUNC_2(struct sfb *VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_3->sfb_bins != ((void*)0)) {
  FUNC_1(VAR_0, VAR_3->sfb_bins);
  VAR_3->sfb_bins = ((void*)0);
 }
 if (VAR_3->sfb_fc_lists != ((void*)0)) {
  FUNC_1(VAR_1, VAR_3->sfb_fc_lists);
  VAR_3->sfb_fc_lists = ((void*)0);
 }
 FUNC_1(VAR_2, VAR_3);
}
