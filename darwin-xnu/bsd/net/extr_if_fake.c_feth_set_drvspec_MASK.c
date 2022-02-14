
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
struct if_fake_request {char* iffr_peer_name; int iffr_dequeue_stall; } ;
typedef int * ifnet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct if_fake_request*) ;
 int FUNC_3 (int ,struct if_fake_request*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(ifnet_t VAR_6, uint32_t VAR_7, u_int32_t VAR_8,
   user_addr_t VAR_9)
{
 int VAR_10;
 struct if_fake_request VAR_11;
 ifnet_t VAR_12;

 switch (VAR_7) {
 case 128:
  VAR_10 = FUNC_3(VAR_9, &VAR_11, VAR_8);
  if (VAR_10 != 0) {
   break;
  }
  if (VAR_11.iffr_peer_name[0] == '\0') {
   VAR_10 = FUNC_0(VAR_6, ((void*)0));
   break;
  }


  VAR_11.iffr_peer_name[VAR_4 - 1] = '\0';
  VAR_12 = FUNC_6(VAR_11.iffr_peer_name);
  if (VAR_12 == ((void*)0)) {
   VAR_10 = VAR_1;
   break;
  }
  if (FUNC_5(VAR_12) != VAR_5) {
   VAR_10 = VAR_0;
   break;
  }
  if (FUNC_7(FUNC_4(VAR_12), VAR_3) != 0) {
   VAR_10 = VAR_0;
   break;
  }
  VAR_10 = FUNC_0(VAR_6, VAR_12);
  break;
 case 129:
  VAR_10 = FUNC_3(VAR_9, &VAR_11, VAR_8);
  if (VAR_10 != 0) {
   break;
  }
  VAR_10 = FUNC_2(VAR_6, &VAR_11);
  break;
 case 130:
  VAR_10 = FUNC_3(VAR_9, &VAR_11, VAR_8);
  if (VAR_10 != 0) {
   break;
  }
  VAR_10 = FUNC_1(VAR_6,
      VAR_11.iffr_dequeue_stall);
  break;
 default:
  VAR_10 = VAR_2;
  break;
 }
 return (VAR_10);
}
