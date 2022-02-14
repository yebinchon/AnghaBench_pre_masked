
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Value ;
struct TYPE_8__ {int (* defconst ) (int ,int ,int ) ;int (* defaddress ) (TYPE_1__*) ;} ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int ref; } ;
typedef TYPE_1__* Symbol ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_2__* VAR_2 ;

void FUNC_2(Symbol VAR_3) {
 if (VAR_3) {
  (*VAR_0->defaddress)(VAR_3);
  VAR_3->ref++;
 } else {
  static Value VAR_4;
  (*VAR_0->defconst)(VAR_1, VAR_2->size, VAR_4);
 }
}
