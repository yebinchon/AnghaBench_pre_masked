
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct gif_softc* if_softc; } ;
struct gif_softc {int gif_flags; int * encap_cookie4; int * encap_cookie6; } ;


 int VAR_0 ;
 int FUNC_0 (struct gif_softc*) ;
 int FUNC_1 (struct gif_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct gif_softc*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gif_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_6)
{
 int VAR_7 = 0;
 struct gif_softc *VAR_8 = ((void*)0);

 FUNC_6(VAR_3);
 VAR_8 = VAR_6->if_softc;

 if (VAR_8 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto done;
 }

 FUNC_0(VAR_8);
 if (VAR_8->gif_flags & VAR_1) {
  VAR_7 = VAR_0;
  goto done;
 }

 VAR_8->gif_flags |= VAR_1;
 FUNC_3(&VAR_4, VAR_8, VAR_2);
 VAR_5--;

 FUNC_5(VAR_8);
done:
 if (VAR_8 != ((void*)0))
  FUNC_1(VAR_8);
 FUNC_7(VAR_3);

 return (VAR_7);
}
