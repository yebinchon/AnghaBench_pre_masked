
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {scalar_t__ mask; } ;
typedef TYPE_1__ OPLL ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;

OPLL *FUNC_3(uint32 VAR_0, uint32 VAR_1) {
 OPLL *VAR_2;

 FUNC_2(VAR_0, VAR_1);

 VAR_2 = (OPLL*)FUNC_1(sizeof(OPLL), 1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->mask = 0;

 FUNC_0(VAR_2);

 return VAR_2;
}
