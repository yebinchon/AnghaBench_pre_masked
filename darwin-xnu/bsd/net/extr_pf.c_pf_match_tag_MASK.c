
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {int match_tag; scalar_t__ match_tag_not; } ;
struct pf_mtag {int pftag_tag; } ;



__attribute__((used)) static int
FUNC_0(struct pf_rule *VAR_0, struct pf_mtag *VAR_1,
    int *VAR_2)
{
 if (*VAR_2 == -1)
  *VAR_2 = VAR_1->pftag_tag;

 return ((!VAR_0->match_tag_not && VAR_0->match_tag == *VAR_2) ||
     (VAR_0->match_tag_not && VAR_0->match_tag != *VAR_2));
}
