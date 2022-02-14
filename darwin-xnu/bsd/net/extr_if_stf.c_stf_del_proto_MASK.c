
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stf_softc {scalar_t__ sc_protocol_family; } ;
typedef scalar_t__ protocol_family_t ;
typedef int ifnet_t ;
typedef int errno_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static errno_t
FUNC_1(
 ifnet_t VAR_0,
 protocol_family_t VAR_1)
{
 if (((struct stf_softc*)FUNC_0(VAR_0))->sc_protocol_family == VAR_1)
  ((struct stf_softc*)FUNC_0(VAR_0))->sc_protocol_family = 0;

 return 0;
}
