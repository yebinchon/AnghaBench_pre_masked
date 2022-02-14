
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ip {int ip_v; } ;
struct gif_softc {TYPE_2__* gif_pdst; TYPE_1__* gif_psrc; int gif_if; } ;
typedef int ip ;
struct TYPE_4__ {int sa_family; } ;
struct TYPE_3__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gif_softc*) ;
 int FUNC_1 (struct gif_softc*) ;
 int VAR_2 ;


 int FUNC_2 (struct mbuf const*,int,int,void*) ;
 int FUNC_3 (struct mbuf const*,int,int,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*,int ,int,struct ip*) ;

__attribute__((used)) static int
FUNC_6(
 const struct mbuf *VAR_3,
 int VAR_4,
 int VAR_5,
 void *VAR_6)
{
 int VAR_7 = 0;
 struct ip VAR_8;
 struct gif_softc *VAR_9;

 VAR_9 = (struct gif_softc *)VAR_6;
 if (VAR_9 == ((void*)0))
  return (VAR_7);

 FUNC_0(VAR_9);
 if ((FUNC_4(VAR_9->gif_if) & VAR_2) == 0)
  goto done;


 if (!VAR_9->gif_psrc || !VAR_9->gif_pdst)
  goto done;

 switch (VAR_5) {
 default:
  goto done;
 }

 FUNC_5((struct mbuf *)(size_t)VAR_3, 0, sizeof (VAR_8), &VAR_8);

 switch (VAR_8.ip_v) {
 default:
  goto done;
 }
done:
 FUNC_1(VAR_9);
 return (VAR_7);
}
