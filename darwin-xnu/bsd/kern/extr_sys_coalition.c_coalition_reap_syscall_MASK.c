
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int kern_return_t ;
typedef scalar_t__ coalition_t ;
typedef int cid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (char*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static
int
FUNC_5(user_addr_t VAR_6, uint32_t VAR_7)
{
 kern_return_t VAR_8;
 int VAR_9 = 0;
 uint64_t VAR_10;
 coalition_t VAR_11;

 if (VAR_7 != 0) {
  return VAR_2;
 }

 VAR_9 = FUNC_4(VAR_6, &VAR_10, sizeof(VAR_10));
 if (VAR_9) {
  return VAR_9;
 }

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11 == VAR_0) {
  return VAR_5;
 }

 VAR_8 = FUNC_2(VAR_11);
 FUNC_3(VAR_11);

 switch (VAR_8) {
 case 129:
  break;
 case 131:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 case 130:
  VAR_9 = VAR_1;
  break;
 default:
  VAR_9 = VAR_3;
  break;
 }

 FUNC_0("(%llu, %u) -> %d", VAR_10, VAR_7, VAR_9);

 return VAR_9;
}
