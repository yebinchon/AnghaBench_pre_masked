
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubsan_violation {uintptr_t lhs; TYPE_1__* oob; } ;
struct san_type_desc {char* name; int issigned; int width; } ;
struct TYPE_2__ {struct san_type_desc* index_ty; struct san_type_desc* array_ty; } ;


 scalar_t__ FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static size_t
FUNC_1(struct ubsan_violation *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 struct san_type_desc *VAR_4 = VAR_0->oob->array_ty;
 struct san_type_desc *VAR_5 = VAR_0->oob->index_ty;
 uintptr_t VAR_6 = VAR_0->lhs;

 VAR_3 += FUNC_0(VAR_1+VAR_3, VAR_2-VAR_3, "OOB array access\n");
 VAR_3 += FUNC_0(VAR_1+VAR_3, VAR_2-VAR_3, "  idx %ld\n", VAR_6);
 VAR_3 += FUNC_0(VAR_1+VAR_3, VAR_2-VAR_3, "  aty: ty = %s, signed = %d, width = %d\n", VAR_4->name, VAR_4->issigned, 1 << VAR_4->width);
 VAR_3 += FUNC_0(VAR_1+VAR_3, VAR_2-VAR_3, "  ity: ty = %s, signed = %d, width = %d\n", VAR_5->name, VAR_5->issigned, 1 << VAR_5->width);

 return VAR_3;
}
