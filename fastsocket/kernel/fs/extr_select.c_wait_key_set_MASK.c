
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; } ;
typedef TYPE_1__ poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(poll_table *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5, unsigned long VAR_6)
{
 if (VAR_3) {
  VAR_3->key = VAR_0;
  if (VAR_4 & VAR_6)
   VAR_3->key |= VAR_1;
  if (VAR_5 & VAR_6)
   VAR_3->key |= VAR_2;
 }
}
