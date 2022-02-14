
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int * sock; } ;
typedef int curl_socket_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct connectdata *VAR_1, curl_socket_t *VAR_2)
{
  VAR_2[0] = VAR_1->sock[VAR_0];
  return FUNC_0(0);
}
