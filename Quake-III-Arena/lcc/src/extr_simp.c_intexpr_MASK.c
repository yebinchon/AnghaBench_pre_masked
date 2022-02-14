
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* Tree ;
struct TYPE_7__ {int i; } ;
struct TYPE_8__ {TYPE_1__ v; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_9__ {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(int VAR_5, int VAR_6) {
 Tree VAR_7 = FUNC_1(VAR_5);

 VAR_4++;
 if (VAR_7->op == VAR_0+VAR_1 || VAR_7->op == VAR_0+VAR_2)
  VAR_6 = FUNC_0(VAR_7, VAR_3)->u.v.i;
 else
  FUNC_2("integer expression must be constant\n");
 VAR_4--;
 return VAR_6;
}
