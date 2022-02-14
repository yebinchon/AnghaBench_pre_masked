
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__* pTail; } ;
struct TYPE_4__ {int lo; } ;
struct TYPE_5__ {TYPE_1__ ctl; } ;


 TYPE_3__* FUNC_0 (void*) ;
 int VAR_0 ;





__attribute__((used)) static inline int FUNC_1(void *VAR_1
    ) {
 uint32_t VAR_2 =
     (FUNC_0(VAR_1))->pTail->ctl.
     lo & VAR_0;

 switch (VAR_2) {
 case 131:
 case 130:
 case 129:
 case 128:
  return 1;
 }

 return 0;
}
