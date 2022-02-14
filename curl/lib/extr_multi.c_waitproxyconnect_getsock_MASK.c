
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {scalar_t__ connect_state; int * sock; } ;
typedef int curl_socket_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct connectdata *VAR_1,
                                    curl_socket_t *VAR_2)
{
  VAR_2[0] = VAR_1->sock[VAR_0];



  if(VAR_1->connect_state)
    return FUNC_0(0);

  return FUNC_1(0);
}
