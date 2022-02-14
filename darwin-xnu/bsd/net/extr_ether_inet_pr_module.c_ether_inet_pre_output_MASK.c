
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int16_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr_dl {int dummy; } ;
struct sockaddr {int sa_family; int sa_data; } ;
struct mbuf {int m_flags; } ;
struct ether_header {int ether_type; int ether_dhost; } ;
typedef int route_t ;
typedef int protocol_family_t ;
typedef struct mbuf* mbuf_t ;
typedef int ll_dest ;
typedef TYPE_1__* ifnet_t ;
typedef int ethertype_ip ;
typedef int errno_t ;
struct TYPE_5__ {int if_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (struct sockaddr_dl*) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,struct sockaddr_in const*,struct sockaddr_dl*,int,int ,struct mbuf*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;


__attribute__((used)) static errno_t
FUNC_7(ifnet_t VAR_7, protocol_family_t VAR_8,
    mbuf_t *VAR_9, const struct sockaddr *VAR_10,
    void *VAR_11, char *VAR_12, char *VAR_13)
{
#pragma unused(protocol_family)
 struct mbuf *VAR_14 = *VAR_9;
 const struct ether_header *VAR_15;
 errno_t VAR_16 = 0;

 if ((VAR_7->if_flags & (VAR_5|VAR_4)) != (VAR_5|VAR_4))
  return (VAR_1);




 VAR_14->m_flags |= VAR_6;

 switch (VAR_10->sa_family) {
 case 130: {
  struct sockaddr_dl VAR_17;

  VAR_16 = FUNC_1(VAR_7,
      (const struct sockaddr_in *)(uintptr_t)(size_t)VAR_10,
      &VAR_17, sizeof (VAR_17), (route_t)VAR_11, *VAR_9);
  if (VAR_16 == 0) {
   u_int16_t VAR_18 = FUNC_3(VAR_2);

   FUNC_2(FUNC_0(&VAR_17), VAR_13, VAR_3);
   FUNC_2(&VAR_18, VAR_12, sizeof (VAR_18));
  }
  break;
 }

 case 128:
 case 129:
  VAR_14->m_flags &= ~VAR_6;
  VAR_15 = (const struct ether_header *)(uintptr_t)(size_t)
      VAR_10->sa_data;
  (void) FUNC_5(VAR_13, VAR_15->ether_dhost, 6);
  FUNC_2(&VAR_15->ether_type, VAR_12, sizeof (u_short));
  break;

 default:
  FUNC_6("%s: can't handle af%d\n", FUNC_4(VAR_7),
      VAR_10->sa_family);

  VAR_16 = VAR_0;
  break;
 }

 return (VAR_16);
}
