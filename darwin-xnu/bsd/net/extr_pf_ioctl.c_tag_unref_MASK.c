
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct pf_tags {int dummy; } ;
struct pf_tagname {scalar_t__ tag; scalar_t__ ref; } ;


 int VAR_0 ;
 struct pf_tagname* FUNC_0 (struct pf_tags*) ;
 struct pf_tagname* FUNC_1 (struct pf_tagname*,int ) ;
 int FUNC_2 (struct pf_tags*,struct pf_tagname*,int ) ;
 int FUNC_3 (struct pf_tagname*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct pf_tags *VAR_2, u_int16_t VAR_3)
{
 struct pf_tagname *VAR_4, *VAR_5;

 if (VAR_3 == 0)
  return;

 for (VAR_4 = FUNC_0(VAR_2); VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = FUNC_1(VAR_4, VAR_1);
  if (VAR_3 == VAR_4->tag) {
   if (--VAR_4->ref == 0) {
    FUNC_2(VAR_2, VAR_4, VAR_1);
    FUNC_3(VAR_4, VAR_0);
   }
   break;
  }
 }
}
