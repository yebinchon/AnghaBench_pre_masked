
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubsan_violation {size_t ubsan_type; int rhs; int lhs; TYPE_1__* overflow; } ;
struct san_type_desc {char* name; int width; scalar_t__ issigned; } ;
struct TYPE_2__ {struct san_type_desc* ty; } ;


 char** VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,char*,char*,char*,int,int ,int ) ;

__attribute__((used)) static size_t
FUNC_1(struct ubsan_violation *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct san_type_desc *VAR_4 = VAR_1->overflow->ty;
 return FUNC_0(VAR_2, VAR_3,
   "%s overflow, op = %s, ty = %s, width = %d, lhs = 0x%llx, rhs = 0x%llx\n",
   VAR_4->issigned ? "signed" : "unsigned",
   VAR_0[VAR_1->ubsan_type],
   VAR_4->name,
   1 << VAR_4->width,
   VAR_1->lhs,
   VAR_1->rhs
  );
}
