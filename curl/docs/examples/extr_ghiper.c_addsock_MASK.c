
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_9__ {int multi; } ;
struct TYPE_8__ {int ch; TYPE_2__* global; } ;
typedef TYPE_1__ SockInfo ;
typedef TYPE_2__ GlobalInfo ;
typedef int CURL ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(curl_socket_t VAR_0, CURL *VAR_1, int VAR_2, GlobalInfo *VAR_3)
{
  SockInfo *VAR_4 = FUNC_2(sizeof(SockInfo));

  VAR_4->global = VAR_3;
  VAR_4->ch = FUNC_1(VAR_0);
  FUNC_3(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_3->multi, VAR_0, VAR_4);
}
