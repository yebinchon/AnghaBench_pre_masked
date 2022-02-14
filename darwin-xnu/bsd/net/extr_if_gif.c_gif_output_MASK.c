
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
struct gif_softc {int gif_proto; struct sockaddr* gif_psrc; struct sockaddr* gif_pdst; } ;
typedef TYPE_2__* mbuf_t ;
typedef int ifnet_t ;
typedef int errno_t ;
struct TYPE_8__ {int len; } ;
struct TYPE_9__ {int m_flags; TYPE_1__ m_pkthdr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gif_softc*) ;
 int FUNC_1 (struct gif_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,TYPE_2__*,int *,int) ;
 int FUNC_3 (int ) ;
 struct gif_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,TYPE_2__*,int *) ;
 int FUNC_8 (int ,int ,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static errno_t
FUNC_10(
 ifnet_t VAR_5,
 mbuf_t VAR_6)
{
 struct gif_softc *VAR_7 = FUNC_4(VAR_5);
 struct sockaddr *VAR_8;
 struct sockaddr *VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_7);
 VAR_8 = VAR_7->gif_psrc;
 VAR_9 = VAR_7->gif_pdst;
 FUNC_1(VAR_7);






 VAR_6->m_flags &= ~(VAR_3|VAR_4);
 if (!(FUNC_3(VAR_5) & VAR_2) ||
     VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  FUNC_6(VAR_5);
  FUNC_9(VAR_6);
  VAR_10 = VAR_1;
  goto end;
 }

 FUNC_2(VAR_5, 0, VAR_6, &VAR_7->gif_proto, sizeof (VAR_7->gif_proto));

 FUNC_0(VAR_7);






 switch (VAR_7->gif_psrc->sa_family) {
 default:
  VAR_10 = VAR_1;
  break;
 }

 FUNC_1(VAR_7);
end:
 if (VAR_10) {

  FUNC_5(VAR_5, 0, 0, 1);
 } else {
  FUNC_5(VAR_5, 1, VAR_6->m_pkthdr.len, 0);
 }
 if (VAR_10 == 0)
  VAR_10 = VAR_0;
 return (VAR_10);
}
