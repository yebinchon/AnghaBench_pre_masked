
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {scalar_t__* tempsock; scalar_t__ transport; } ;
typedef scalar_t__ curl_socket_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct connectdata*,scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct connectdata *VAR_2,
                               curl_socket_t *VAR_3)
{
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 0;






  for(VAR_4 = 0; VAR_4<2; VAR_4++) {
    if(VAR_2->tempsock[VAR_4] != VAR_0) {
      VAR_3[VAR_5] = VAR_2->tempsock[VAR_4];
      VAR_6 |= FUNC_3(VAR_5);





      VAR_5++;
    }
  }

  return VAR_6;
}
