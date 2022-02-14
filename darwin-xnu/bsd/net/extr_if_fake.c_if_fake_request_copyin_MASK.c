
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef int u_int32_t ;
struct if_fake_request {scalar_t__* iffr_reserved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct if_fake_request*,int) ;

__attribute__((used)) static int
FUNC_1(user_addr_t VAR_2,
         struct if_fake_request *VAR_3, u_int32_t VAR_4)
{
 int VAR_5;

 if (VAR_2 == VAR_1 || VAR_4 < sizeof(*VAR_3)) {
  VAR_5 = VAR_0;
  goto done;
 }
 VAR_5 = FUNC_0(VAR_2, VAR_3, sizeof(*VAR_3));
 if (VAR_5 != 0) {
  goto done;
 }
 if (VAR_3->iffr_reserved[0] != 0 || VAR_3->iffr_reserved[1] != 0 ||
     VAR_3->iffr_reserved[2] != 0 || VAR_3->iffr_reserved[3] != 0) {
  VAR_5 = VAR_0;
  goto done;
 }
 done:
 return (VAR_5);
}
