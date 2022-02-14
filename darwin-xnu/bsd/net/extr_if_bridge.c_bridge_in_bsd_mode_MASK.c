
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_softc {int sc_flags; } ;
typedef int boolean_t ;


 int VAR_0 ;

__attribute__((used)) static inline boolean_t
FUNC_0(const struct bridge_softc * VAR_1)
{
 return ((VAR_1->sc_flags & VAR_0) != 0);
}
