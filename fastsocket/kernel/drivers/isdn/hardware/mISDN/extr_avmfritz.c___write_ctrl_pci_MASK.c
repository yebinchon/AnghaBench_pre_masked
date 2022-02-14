
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; } ;
struct hdlc_hw {TYPE_1__ ctrl; } ;
struct fritzcard {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct fritzcard *VAR_5, struct hdlc_hw *VAR_6, u32 VAR_7) {
 u32 VAR_8 = VAR_7 == 2 ? VAR_1 : VAR_0;

 FUNC_0(VAR_8, VAR_5->addr + VAR_2);
 FUNC_0(VAR_6->ctrl.ctrl, VAR_5->addr + VAR_3 + VAR_4);
}
