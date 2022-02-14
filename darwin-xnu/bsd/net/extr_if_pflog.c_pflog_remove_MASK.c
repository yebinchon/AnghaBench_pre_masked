
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pflog_softc {int sc_flags; } ;
struct ifnet {struct pflog_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pflog_softc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_5)
{
 int VAR_6 = 0;
 struct pflog_softc *VAR_7 = ((void*)0);

 FUNC_4(VAR_3);
 FUNC_1(VAR_2);
 VAR_7 = VAR_5->if_softc;

 if (VAR_7 == ((void*)0) ||
     (VAR_7->sc_flags & VAR_1) != 0) {
  VAR_6 = VAR_0;
  goto done;
 }

 VAR_7->sc_flags |= VAR_1;
 FUNC_0(VAR_7, VAR_4);
done:
 FUNC_2(VAR_2);
 FUNC_3(VAR_3);
 return VAR_6;
}
