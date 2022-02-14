
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,size_t,int ,int **) ;

__attribute__((used)) static errno_t
FUNC_6(mbuf_t VAR_3, size_t VAR_4, mbuf_t *VAR_5, int VAR_6)
{
 errno_t VAR_7;

 *VAR_5 = VAR_3;

 if (VAR_3 == ((void*)0) || VAR_4 == 0)
  return (0);


 if (FUNC_1(VAR_3) == VAR_4) {
  *VAR_5 = FUNC_2(VAR_3);
  if (!VAR_6)
   FUNC_4(VAR_3, ((void*)0));
  return (0);
 }

 if (VAR_4 > FUNC_1(VAR_3))
  return (VAR_0);

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_2, VAR_5);
 if (VAR_7)
  return (VAR_7);

 if (FUNC_0(*VAR_5) & VAR_1) {

  VAR_7 = FUNC_3(*VAR_5, ~VAR_1, VAR_1);
 }

 if (VAR_6)

  FUNC_4(VAR_3, *VAR_5);

 return (0);
}
