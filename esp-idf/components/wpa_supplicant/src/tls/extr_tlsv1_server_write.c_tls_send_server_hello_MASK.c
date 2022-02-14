
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int state; scalar_t__ use_session_ticket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (struct tlsv1_server*) ;
 scalar_t__ FUNC_3 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_4 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_5 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_6 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_7 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_8 (struct tlsv1_server*,int **,int *) ;
 scalar_t__ FUNC_9 (struct tlsv1_server*,int **,int *) ;

__attribute__((used)) static u8 * FUNC_10(struct tlsv1_server *VAR_2, size_t *VAR_3)
{
 u8 *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;

 *VAR_3 = 0;

 VAR_7 = 1000 + FUNC_2(VAR_2);

 VAR_4 = FUNC_1(VAR_7);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_6 = VAR_4;
 VAR_5 = VAR_4 + VAR_7;

 if (FUNC_7(VAR_2, &VAR_6, VAR_5) < 0) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 if (VAR_2->use_session_ticket) {

  if (FUNC_5(VAR_2, &VAR_6, VAR_5) < 0 ||
      FUNC_6(VAR_2, &VAR_6, VAR_5) < 0) {
   FUNC_0(VAR_4);
   return ((void*)0);
  }

  *VAR_3 = VAR_6 - VAR_4;

  VAR_2->state = VAR_0;

  return VAR_4;
 }


 if (FUNC_3(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_9(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_4(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_8(VAR_2, &VAR_6, VAR_5) < 0) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 *VAR_3 = VAR_6 - VAR_4;

 VAR_2->state = VAR_1;

 return VAR_4;
}
