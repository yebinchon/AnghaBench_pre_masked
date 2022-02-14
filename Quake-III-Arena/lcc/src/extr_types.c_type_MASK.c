
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* sym; } ;
struct TYPE_4__ {int op; scalar_t__ type; int size; int align; TYPE_1__ u; } ;
struct entry {TYPE_2__ type; struct entry* link; } ;
typedef scalar_t__ Type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct entry**) ;
 int FUNC_1 (struct entry*,int ) ;
 int VAR_2 ;
 struct entry** VAR_3 ;

__attribute__((used)) static Type FUNC_2(int VAR_4, Type VAR_5, int VAR_6, int VAR_7, void *VAR_8) {
 unsigned VAR_9 = (VAR_4^((unsigned long)VAR_5>>3))
&(FUNC_0(VAR_3)-1);
 struct entry *VAR_10;

 if (VAR_4 != VAR_1 && (VAR_4 != VAR_0 || VAR_6 > 0))
  for (VAR_10 = VAR_3[VAR_9]; VAR_10; VAR_10 = VAR_10->link)
   if (VAR_10->type.op == VAR_4 && VAR_10->type.type == VAR_5
   && VAR_10->type.size == VAR_6 && VAR_10->type.align == VAR_7
   && VAR_10->type.u.sym == VAR_8)
    return &VAR_10->type;
 FUNC_1(VAR_10, VAR_2);
 VAR_10->type.op = VAR_4;
 VAR_10->type.type = VAR_5;
 VAR_10->type.size = VAR_6;
 VAR_10->type.align = VAR_7;
 VAR_10->type.u.sym = VAR_8;
 VAR_10->link = VAR_3[VAR_9];
 VAR_3[VAR_9] = VAR_10;
 return &VAR_10->type;
}
