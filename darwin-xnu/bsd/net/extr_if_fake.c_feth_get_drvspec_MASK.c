
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int u_int32_t ;
struct if_fake_request {int iffr_peer_name; } ;
typedef int * ifnet_t ;
typedef int iffr ;
typedef TYPE_1__* if_fake_ref ;
struct TYPE_2__ {int * iff_peer; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct if_fake_request*,int) ;
 int FUNC_1 (struct if_fake_request*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(ifnet_t VAR_2, u_int32_t VAR_3, u_int32_t VAR_4,
   user_addr_t VAR_5)
{
 int VAR_6 = VAR_1;
 if_fake_ref VAR_7;
 struct if_fake_request VAR_8;
 ifnet_t VAR_9;

 switch (VAR_3) {
 case 128:
  if (VAR_4 < sizeof(VAR_8)) {
   VAR_6 = VAR_0;
   break;
  }
  FUNC_2();
  VAR_7 = (if_fake_ref)FUNC_5(VAR_2);
  if (VAR_7 == ((void*)0)) {
   FUNC_3();
   VAR_6 = VAR_1;
   break;
  }
  VAR_9 = VAR_7->iff_peer;
  FUNC_3();
  FUNC_0(&VAR_8, sizeof(VAR_8));
  if (VAR_9 != ((void*)0)) {
   FUNC_6(VAR_8.iffr_peer_name,
    FUNC_4(VAR_9),
    sizeof(VAR_8.iffr_peer_name));
  }
  VAR_6 = FUNC_1(&VAR_8, VAR_5, sizeof(VAR_8));
  break;
 default:
  break;
 }
 return (VAR_6);
}
