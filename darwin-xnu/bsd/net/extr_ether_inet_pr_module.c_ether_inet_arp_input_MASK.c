
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sdl_len; scalar_t__ sdl_alen; int sdl_type; int sdl_family; int sin_addr; int sin_family; } ;
struct sockaddr_dl {int sin_len; int sdl_len; scalar_t__ sdl_alen; int sdl_type; int sdl_family; int sin_addr; int sin_family; } ;
struct mbuf {int dummy; } ;
struct in_addr {int dummy; } ;
struct ifnet {int dummy; } ;
struct ether_arp {int arp_pln; scalar_t__ arp_hln; int arp_op; int arp_sha; int arp_tpa; int arp_spa; int arp_pro; int arp_hrd; } ;
typedef int sender_ip ;
typedef int sender_hw ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sockaddr_in*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ifnet*,scalar_t__,struct sockaddr_in*,struct sockaddr_in*,struct sockaddr_in*) ;
 int FUNC_3 (struct ifnet*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct sockaddr_in*,int) ;
 int VAR_6 ;
 struct ether_arp* FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct mbuf*) ;
 scalar_t__ FUNC_10 (struct mbuf**,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct ifnet *VAR_7, struct mbuf *VAR_8)
{
 struct ether_arp *VAR_9;
 struct sockaddr_dl VAR_10;
 struct sockaddr_in VAR_11;
 struct sockaddr_in VAR_12;

 if (FUNC_9(VAR_8) < sizeof (*VAR_9) && FUNC_10(&VAR_8, sizeof (*VAR_9)) != 0)
  return;

 VAR_9 = FUNC_7(VAR_8);


 if (FUNC_11(VAR_9->arp_hrd) != VAR_2 ||
     FUNC_11(VAR_9->arp_pro) != VAR_3 ||
     VAR_9->arp_pln != sizeof (struct in_addr) ||
     VAR_9->arp_hln != VAR_4) {
  FUNC_8(VAR_8);
  return;
 }


 if (FUNC_4(VAR_9->arp_sha, VAR_6, VAR_4) == 0) {
  FUNC_8(VAR_8);
  return;
 }

 FUNC_6(&VAR_11, sizeof (VAR_11));
 VAR_11.sin_len = sizeof (VAR_11);
 VAR_11.sin_family = VAR_0;
 FUNC_1(&VAR_11.sin_addr, VAR_9->arp_spa);
 VAR_12 = VAR_11;
 FUNC_1(&VAR_12.sin_addr, VAR_9->arp_tpa);

 FUNC_6(&VAR_10, sizeof (VAR_10));
 VAR_10.sdl_len = sizeof (VAR_10);
 VAR_10.sdl_family = VAR_1;
 VAR_10.sdl_type = VAR_5;
 VAR_10.sdl_alen = VAR_4;
 FUNC_5(VAR_9->arp_sha, FUNC_0(&VAR_10), VAR_4);


 FUNC_3(VAR_7, FUNC_0(&VAR_10), VAR_4);

 FUNC_2(VAR_7, FUNC_11(VAR_9->arp_op), &VAR_10, &VAR_11,
     &VAR_12);
 FUNC_8(VAR_8);
}
