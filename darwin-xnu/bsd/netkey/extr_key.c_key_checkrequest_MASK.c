
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sockaddr_in {int sin_port; } ;
struct secasvar {int dummy; } ;
struct secasindex {int mode; int dst; } ;
struct ipsecrequest {int sp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ipsecrequest*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct secasindex*,int ) ;
 struct secasvar* FUNC_4 (struct secasindex*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;

int
FUNC_6(
     struct ipsecrequest *VAR_6,
     struct secasindex *VAR_7,
     struct secasvar **VAR_8)
{
 u_int VAR_9;
 int VAR_10;
 struct sockaddr_in *VAR_11;

 FUNC_0(VAR_5, VAR_3);

 *VAR_8 = ((void*)0);


 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  FUNC_5("key_checkrequest: NULL pointer is passed.\n");


 switch (VAR_7->mode) {
  case 129:
  case 128:
   break;
  case 130:
  default:
   FUNC_5("key_checkrequest: Invalid policy defined.\n");
 }


 VAR_9 = FUNC_1(VAR_6);






 if (*VAR_8 == ((void*)0))
  *VAR_8 = FUNC_4(VAR_7);


 if (*VAR_8 != ((void*)0))
  return 0;






 if (VAR_7->mode == 129) {
  VAR_11 = (struct sockaddr_in *)&VAR_7->dst;
  VAR_11->sin_port = VAR_2;
 }
 if ((VAR_10 = FUNC_3(VAR_7, VAR_6->sp)) != 0) {

  FUNC_2((VAR_4, "key_checkrequest: error %d returned "
      "from key_acquire.\n", VAR_10));
  return VAR_10;
 }

 return VAR_9 == VAR_1 ? VAR_0 : 0;
}
