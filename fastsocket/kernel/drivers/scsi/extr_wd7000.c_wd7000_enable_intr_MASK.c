
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iobase; int control; } ;
typedef TYPE_1__ Adapter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(Adapter * VAR_2)
{
 VAR_2->control |= VAR_1;
 FUNC_0(VAR_2->control, VAR_2->iobase + VAR_0);
}
