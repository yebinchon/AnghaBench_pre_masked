
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
struct TYPE_8__ {TYPE_4__* sym; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_6__ {int ftab; int flist; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef int Symbol ;
typedef scalar_t__ Field ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_0 ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_1 ;

Field FUNC_5(const char *VAR_2, Type VAR_3) {
 Field VAR_4 = FUNC_1(VAR_2, FUNC_3(VAR_3)->u.sym->u.s.flist);

 if (VAR_4 && VAR_1) {
  Symbol VAR_5;
  FUNC_0(FUNC_3(VAR_3)->u.sym->u.s.ftab);
  VAR_5 = FUNC_2(VAR_2, FUNC_3(VAR_3)->u.sym->u.s.ftab);
  FUNC_0(VAR_5);
  FUNC_4(VAR_5, VAR_0);
 }
 return VAR_4;
}
