
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash {int dummy; } ;
struct Curl_sh_entry {int transfers; } ;
typedef int curl_socket_t ;


 int FUNC_0 (struct curl_hash*,char*,int,struct Curl_sh_entry*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_0 ;
 struct Curl_sh_entry* FUNC_2 (int,int) ;
 int FUNC_3 (struct Curl_sh_entry*) ;
 struct Curl_sh_entry* FUNC_4 (struct curl_hash*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct Curl_sh_entry *FUNC_5(struct curl_hash *VAR_4,
                                         curl_socket_t VAR_5)
{
  struct Curl_sh_entry *VAR_6 = FUNC_4(VAR_4, VAR_5);
  struct Curl_sh_entry *VAR_7;

  if(VAR_6) {

    return VAR_6;
  }


  VAR_7 = FUNC_2(1, sizeof(struct Curl_sh_entry));
  if(!VAR_7)
    return ((void*)0);

  if(FUNC_1(&VAR_7->transfers, VAR_0, VAR_1,
                    VAR_2, VAR_3)) {
    FUNC_3(VAR_7);
    return ((void*)0);
  }


  if(!FUNC_0(VAR_4, (char *)&VAR_5, sizeof(curl_socket_t), VAR_7)) {
    FUNC_3(VAR_7);
    return ((void*)0);
  }

  return VAR_7;
}
