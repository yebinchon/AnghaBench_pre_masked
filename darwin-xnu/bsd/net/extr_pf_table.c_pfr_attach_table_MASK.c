
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tbl ;
struct pfr_table {struct pfr_table* pfrt_anchor; struct pfr_table* pfrt_name; } ;
struct pfr_ktable {int pfrkt_flags; int * pfrkt_refcnt; struct pfr_ktable* pfrkt_root; } ;
struct pf_ruleset {struct pf_anchor* anchor; } ;
struct pf_anchor {char* path; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pfr_table*,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 struct pfr_ktable* FUNC_3 (struct pfr_table*,int ,int) ;
 int FUNC_4 (struct pfr_ktable*,int ) ;
 int FUNC_5 (struct pfr_ktable*) ;
 struct pfr_ktable* FUNC_6 (struct pfr_table*) ;
 int FUNC_7 (struct pfr_ktable*,int) ;
 int FUNC_8 (struct pfr_table*,char*,int) ;

struct pfr_ktable *
FUNC_9(struct pf_ruleset *VAR_4, char *VAR_5)
{
 struct pfr_ktable *VAR_6, *VAR_7;
 struct pfr_table VAR_8;
 struct pf_anchor *VAR_9 = VAR_4->anchor;

 FUNC_0(VAR_3, VAR_0);

 FUNC_1(&VAR_8, sizeof (VAR_8));
 FUNC_8(VAR_8.pfrt_name, VAR_5, sizeof (VAR_8.pfrt_name));
 if (VAR_9 != ((void*)0))
  FUNC_8(VAR_8.pfrt_anchor, VAR_9->path, sizeof (VAR_8.pfrt_anchor));
 VAR_6 = FUNC_6(&VAR_8);
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_3(&VAR_8, FUNC_2(), 1);
  if (VAR_6 == ((void*)0))
   return (((void*)0));
  if (VAR_9 != ((void*)0)) {
   FUNC_1(VAR_8.pfrt_anchor, sizeof (VAR_8.pfrt_anchor));
   VAR_7 = FUNC_6(&VAR_8);
   if (VAR_7 == ((void*)0)) {
    VAR_7 = FUNC_3(&VAR_8, 0, 1);
    if (VAR_7 == ((void*)0)) {
     FUNC_4(VAR_6, 0);
     return (((void*)0));
    }
    FUNC_5(VAR_7);
   }
   VAR_6->pfrkt_root = VAR_7;
  }
  FUNC_5(VAR_6);
 }
 if (!VAR_6->pfrkt_refcnt[VAR_1]++)
  FUNC_7(VAR_6, VAR_6->pfrkt_flags|VAR_2);
 return (VAR_6);
}
