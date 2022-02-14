
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectbundle {int conn_list; int multiuse; scalar_t__ num_connections; } ;
struct Curl_easy {int dummy; } ;
typedef int curl_llist_dtor ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 struct connectbundle* FUNC_2 (int) ;

__attribute__((used)) static CURLcode FUNC_3(struct Curl_easy *VAR_4,
                              struct connectbundle **VAR_5)
{
  (void)VAR_4;
  FUNC_1(*VAR_5 == ((void*)0));
  *VAR_5 = FUNC_2(sizeof(struct connectbundle));
  if(!*VAR_5)
    return VAR_2;

  (*VAR_5)->num_connections = 0;
  (*VAR_5)->multiuse = VAR_0;

  FUNC_0(&(*VAR_5)->conn_list, (curl_llist_dtor) VAR_3);
  return VAR_1;
}
