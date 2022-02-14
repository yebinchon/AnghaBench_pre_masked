
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(bool VAR_3)
{
 if (VAR_3) {
  (void) FUNC_0((event_t) &VAR_2,
         VAR_0);
 } else {
  uint64_t VAR_4 = 0;
  FUNC_3(VAR_1, &VAR_4);
  FUNC_2(VAR_4, &VAR_4);

  (void) FUNC_1(&VAR_2,
         VAR_0, VAR_4);
 }
}
