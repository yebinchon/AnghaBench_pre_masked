
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int boolean_t ;
struct TYPE_2__ {int kdebug_slowcheck; int kdebug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static boolean_t
FUNC_3(uint32_t *VAR_5, uint32_t *VAR_6)
{
 boolean_t VAR_7;
 int VAR_8 = FUNC_2(VAR_0);
 FUNC_0(VAR_4);

 *VAR_5 = VAR_3.kdebug_slowcheck;
 *VAR_6 = VAR_3.kdebug_flags;

 VAR_7 = VAR_3.kdebug_flags & VAR_2;
 VAR_3.kdebug_flags &= ~VAR_2;
 VAR_3.kdebug_flags |= VAR_1;

 FUNC_1(VAR_4);
 FUNC_2(VAR_8);

 return VAR_7;
}
