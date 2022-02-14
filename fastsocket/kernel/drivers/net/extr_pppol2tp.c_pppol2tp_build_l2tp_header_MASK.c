
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int d_session; int d_tunnel; } ;
struct pppol2tp_session {int ns; int name; int debug; scalar_t__ send_seq; TYPE_1__ tunnel_addr; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pppol2tp_session *VAR_4,
           void *VAR_5)
{
 __be16 *VAR_6 = VAR_5;
 u16 VAR_7 = VAR_2;

 if (VAR_4->send_seq)
  VAR_7 |= VAR_1;





 *VAR_6++ = FUNC_1(VAR_7);
 *VAR_6++ = FUNC_1(VAR_4->tunnel_addr.d_tunnel);
 *VAR_6++ = FUNC_1(VAR_4->tunnel_addr.d_session);
 if (VAR_4->send_seq) {
  *VAR_6++ = FUNC_1(VAR_4->ns);
  *VAR_6++ = 0;
  VAR_4->ns++;
  FUNC_0(VAR_4->debug, VAR_3, VAR_0,
         "%s: updated ns to %hu\n", VAR_4->name, VAR_4->ns);
 }
}
