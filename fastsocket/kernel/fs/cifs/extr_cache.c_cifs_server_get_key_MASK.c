
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
struct sockaddr {int sa_family; } ;
struct cifs_server_key {int family; TYPE_1__* addr; int port; } ;
struct TCP_Server_Info {int dstaddr; } ;
struct TYPE_2__ {int ipv6_addr; int ipv4_addr; } ;




 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct cifs_server_key*,int ,int) ;

__attribute__((used)) static uint16_t FUNC_2(const void *VAR_0,
       void *VAR_1, uint16_t VAR_2)
{
 const struct TCP_Server_Info *VAR_3 = VAR_0;
 const struct sockaddr *VAR_4 = (struct sockaddr *) &VAR_3->dstaddr;
 const struct sockaddr_in *VAR_5 = (struct sockaddr_in *) VAR_4;
 const struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *) VAR_4;
 struct cifs_server_key *VAR_7 = VAR_1;
 uint16_t VAR_8 = sizeof(struct cifs_server_key);

 FUNC_1(VAR_7, 0, VAR_8);





 switch (VAR_4->sa_family) {
 case 129:
  VAR_7->family = VAR_4->sa_family;
  VAR_7->port = VAR_5->sin_port;
  VAR_7->addr[0].ipv4_addr = VAR_5->sin_addr;
  VAR_8 += sizeof(VAR_7->addr[0].ipv4_addr);
  break;

 case 128:
  VAR_7->family = VAR_4->sa_family;
  VAR_7->port = VAR_6->sin6_port;
  VAR_7->addr[0].ipv6_addr = VAR_6->sin6_addr;
  VAR_8 += sizeof(VAR_7->addr[0].ipv6_addr);
  break;

 default:
  FUNC_0(1, "Unknown network family '%d'", VAR_4->sa_family);
  VAR_8 = 0;
  break;
 }

 return VAR_8;
}
