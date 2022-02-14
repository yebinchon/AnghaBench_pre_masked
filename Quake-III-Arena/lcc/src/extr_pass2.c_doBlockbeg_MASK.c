
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block {struct block* prev; TYPE_3__* begin; } ;
typedef int rcc_interface_ty ;
struct TYPE_6__ {int * types; int * identifiers; int ** locals; int level; } ;
struct TYPE_5__ {TYPE_2__ block; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_3__* Code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block*,int ) ;
 struct block* VAR_2 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int ** FUNC_3 (int,int,int ) ;

__attribute__((used)) static void FUNC_4(rcc_interface_ty VAR_4) {
 struct block *VAR_5;
 Code VAR_6 = FUNC_1(VAR_0);

 FUNC_2();
 VAR_6->u.block.level = VAR_3;
 VAR_6->u.block.locals = FUNC_3(1, sizeof *VAR_6->u.block.locals, VAR_1);
 VAR_6->u.block.locals[0] = ((void*)0);
 VAR_6->u.block.identifiers = ((void*)0);
 VAR_6->u.block.types = ((void*)0);
 FUNC_0(VAR_5, VAR_1);
 VAR_5->begin = VAR_6;
 VAR_5->prev = VAR_2;
 VAR_2 = VAR_5;
}
