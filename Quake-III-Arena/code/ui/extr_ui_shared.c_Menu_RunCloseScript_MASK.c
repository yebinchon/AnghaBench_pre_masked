
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {scalar_t__ onClose; TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_8__ {TYPE_2__* parent; } ;
typedef TYPE_3__ itemDef_t ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(menuDef_t *VAR_1) {
 if (VAR_1 && VAR_1->window.flags & VAR_0 && VAR_1->onClose) {
  itemDef_t VAR_2;
    VAR_2.parent = VAR_1;
    FUNC_0(&VAR_2, VAR_1->onClose);
 }
}
