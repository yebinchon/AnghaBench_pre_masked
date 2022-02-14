
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int u_int32_t ;
struct ifnet {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct ifnet*,int*,int) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_5, u_int32_t * VAR_6,
    user_addr_t VAR_7)
{
 u_int32_t VAR_8;
 u_int32_t VAR_9;
 int VAR_10 = 0;
 u_int32_t *VAR_11 = ((void*)0);


 VAR_9 = FUNC_3(VAR_5, ((void*)0), 0);
 if (VAR_7 == VAR_4) {
  goto done;
 }


 if (*VAR_6 < VAR_9) {
  VAR_9 = *VAR_6;
 }
 if (VAR_9 == 0) {
  goto done;
 }
 VAR_11 = FUNC_0(VAR_9 * sizeof(*VAR_11), VAR_1, VAR_2 | VAR_3);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_0;
  goto done;
 }
 VAR_8 = FUNC_3(VAR_5, VAR_11, VAR_9);
 if (VAR_8 < VAR_9) {
  VAR_9 = VAR_8;
 }
 if (VAR_9 != 0) {
  VAR_10 = FUNC_1((caddr_t)VAR_11, VAR_7, VAR_9 * sizeof(*VAR_11));
 }

 done:
 if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_11);
 }
 *VAR_6 = VAR_9;
 return (VAR_10);
}
