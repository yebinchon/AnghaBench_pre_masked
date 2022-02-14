
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_anchor {int path; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline int
FUNC_1(struct pf_anchor *VAR_0, struct pf_anchor *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->path, VAR_1->path);

 return (VAR_2 ? (VAR_2 < 0 ? -1 : 1) : 0);
}
