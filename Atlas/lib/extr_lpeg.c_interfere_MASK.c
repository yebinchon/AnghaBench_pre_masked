
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tag; int cs; } ;
struct TYPE_7__ {int code; int aux; } ;
struct TYPE_8__ {TYPE_1__ i; int buff; } ;
typedef TYPE_2__ Instruction ;
typedef TYPE_3__ CharsetTag ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4 (Instruction *VAR_2, int VAR_3, CharsetTag *VAR_4) {
  if (FUNC_2(VAR_2, VAR_3))
    return 0;
  if (VAR_4->tag == VAR_1) return 1;
  switch (VAR_2->i.code) {
    case 129: return FUNC_3(VAR_4->cs, VAR_2->i.aux);
    case 128: return !FUNC_1(VAR_4->cs, (VAR_2 + 1)->buff);
    default: FUNC_0(VAR_2->i.code == VAR_0); return 1;
  }
}
