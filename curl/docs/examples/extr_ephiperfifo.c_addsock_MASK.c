
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_8__ {int multi; } ;
struct TYPE_7__ {TYPE_2__* global; } ;
typedef TYPE_1__ SockInfo ;
typedef TYPE_2__ GlobalInfo ;
typedef int CURL ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(curl_socket_t VAR_0, CURL *VAR_1, int VAR_2, GlobalInfo *VAR_3)
{
  SockInfo *VAR_4 = (SockInfo*)FUNC_0(sizeof(SockInfo), 1);

  VAR_4->global = VAR_3;
  FUNC_2(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_3->multi, VAR_0, VAR_4);
}
