
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubsan_violation {TYPE_1__* align; int lhs; } ;
struct san_type_desc {char* name; } ;
struct TYPE_2__ {size_t kind; int align; struct san_type_desc* ty; } ;


 char** VAR_0 ;
 scalar_t__ FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static size_t
FUNC_1(struct ubsan_violation *VAR_1, char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 struct san_type_desc *VAR_5 = VAR_1->align->ty;

 VAR_4 += FUNC_0(VAR_2+VAR_4, VAR_3-VAR_4, "mis-aligned %s of 0x%llx\n", VAR_0[VAR_1->align->kind], VAR_1->lhs);
 VAR_4 += FUNC_0(VAR_2+VAR_4, VAR_3-VAR_4, "  expected %d-byte alignment, type = %s\n",
   1 << VAR_1->align->align, VAR_5->name);
 return VAR_4;
}
