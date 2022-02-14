
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
struct ifnet {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,int) ;
 int FUNC_1 (struct ifnet*,int) ;

int
FUNC_2(struct ifnet *VAR_2, u_int32_t VAR_3, u_int32_t VAR_4)
{
 uint32_t VAR_5, VAR_6;
 int VAR_7 = 0;




 if ((VAR_3 & VAR_0) ||
     (VAR_4 & VAR_0)) {
  VAR_5 = (VAR_3 & VAR_0);
  VAR_6 = (VAR_4 & VAR_0);

  if (VAR_5 != VAR_6 && (VAR_7 = FUNC_0(VAR_2,
       ((int32_t)(VAR_6 - VAR_5) > 0))) != 0)
   goto done;
 }




 if ((VAR_3 & VAR_1) ||
     (VAR_4 & VAR_1)) {
  VAR_5 = (VAR_3 & VAR_1);
  VAR_6 = (VAR_4 & VAR_1);

  if (VAR_5 != VAR_6 && (VAR_7 = FUNC_1(VAR_2,
       ((int32_t)(VAR_6 - VAR_5) > 0))) != 0)
   goto done;
 }
done:
 return (VAR_7);
}
