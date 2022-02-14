
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* function ) (unsigned long) ;unsigned long data; scalar_t__ expires; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_2(unsigned long VAR_2, void (*VAR_3)(unsigned long),
    unsigned long VAR_4)
{
 FUNC_1(&VAR_1);
 VAR_1.function = VAR_3;
 VAR_1.data = VAR_4;
 VAR_1.expires = VAR_0 + VAR_2;
 FUNC_0(&VAR_1);
}
