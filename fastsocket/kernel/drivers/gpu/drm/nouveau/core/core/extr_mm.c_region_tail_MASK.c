
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nouveau_mm_node {scalar_t__ length; scalar_t__ offset; scalar_t__ type; int fl_entry; int nl_entry; } ;
struct nouveau_mm {int dummy; } ;


 int VAR_0 ;
 struct nouveau_mm_node* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct nouveau_mm_node *
FUNC_3(struct nouveau_mm *VAR_1, struct nouveau_mm_node *VAR_2, u32 VAR_3)
{
 struct nouveau_mm_node *VAR_4;

 if (VAR_2->length == VAR_3)
  return VAR_2;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (FUNC_2(VAR_4 == ((void*)0)))
  return ((void*)0);

 VAR_2->length -= VAR_3;
 VAR_4->offset = VAR_2->offset + VAR_2->length;
 VAR_4->length = VAR_3;
 VAR_4->type = VAR_2->type;

 FUNC_1(&VAR_4->nl_entry, &VAR_2->nl_entry);
 if (VAR_4->type == 0)
  FUNC_1(&VAR_4->fl_entry, &VAR_2->fl_entry);
 return VAR_4;
}
