
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t u_int32_t ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct ifnet* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ifnet*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ifnet** VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int VAR_6 ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(u_int32_t *VAR_7, u_int32_t VAR_8)
{
 struct ifnet *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 FUNC_4();
 for (u_int32_t VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_7[VAR_11] == VAR_1 ||
      VAR_7[VAR_11] > (uint32_t)VAR_2) {
   VAR_10 = VAR_0;
   FUNC_3();
   return (VAR_10);
  }
 }

 for (VAR_9 = FUNC_0(&VAR_6); VAR_9 != ((void*)0);
     VAR_9 = FUNC_0(&VAR_6)) {
  FUNC_6(VAR_9);
  FUNC_7(VAR_9);
  FUNC_5(VAR_9);
 }

 FUNC_2(VAR_3 == 0);

 for (u_int32_t VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  u_int32_t VAR_13 = VAR_7[VAR_12];
  VAR_9 = VAR_5[VAR_13];
  if (VAR_9 == ((void*)0)) {
   continue;
  }
  FUNC_6(VAR_9);
  FUNC_1(&VAR_6, VAR_9, VAR_4);
  FUNC_5(VAR_9);
  VAR_3++;
 }

 FUNC_3();

 FUNC_8();

 return (VAR_10);
}
