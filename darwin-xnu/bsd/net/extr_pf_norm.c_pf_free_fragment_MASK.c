
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_frent {scalar_t__ fr_off; scalar_t__ fr_end; int fr_m; } ;
struct pf_frcache {scalar_t__ fr_off; scalar_t__ fr_end; int fr_m; } ;
struct pf_fragment {int fr_cache; int fr_queue; } ;


 scalar_t__ FUNC_0 (struct pf_fragment*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct pf_frent* FUNC_2 (int *) ;
 int FUNC_3 (struct pf_frent*,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct pf_fragment*) ;
 int FUNC_7 (int *,struct pf_frent*) ;

__attribute__((used)) static void
FUNC_8(struct pf_fragment *VAR_5)
{
 struct pf_frent *VAR_6;
 struct pf_frcache *VAR_7;


 if (FUNC_0(VAR_5)) {
  for (VAR_6 = FUNC_2(&VAR_5->fr_queue); VAR_6;
      VAR_6 = FUNC_2(&VAR_5->fr_queue)) {
   FUNC_3(VAR_6, VAR_0);

   FUNC_5(VAR_6->fr_m);
   FUNC_7(&VAR_2, VAR_6);
   VAR_4--;
  }
 } else {
  for (VAR_7 = FUNC_2(&VAR_5->fr_cache); VAR_7;
      VAR_7 = FUNC_2(&VAR_5->fr_cache)) {
   FUNC_3(VAR_7, VAR_0);

   FUNC_4(FUNC_1(&VAR_5->fr_cache) ||
       FUNC_2(&VAR_5->fr_cache)->fr_off >
       VAR_7->fr_end);

   FUNC_7(&VAR_1, VAR_7);
   VAR_3--;
  }
 }

 FUNC_6(VAR_5);
}
