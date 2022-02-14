
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gif_softc {scalar_t__ gif_proto; } ;
typedef scalar_t__ protocol_family_t ;
typedef int ifnet_t ;
typedef int errno_t ;


 int FUNC_0 (struct gif_softc*) ;
 int FUNC_1 (struct gif_softc*) ;
 struct gif_softc* FUNC_2 (int ) ;

__attribute__((used)) static errno_t
FUNC_3(
 ifnet_t VAR_0,
 protocol_family_t VAR_1)
{
 struct gif_softc *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);
 if (VAR_2->gif_proto == VAR_1)
  VAR_2->gif_proto = 0;
 FUNC_1(VAR_2);

 return (0);
}
