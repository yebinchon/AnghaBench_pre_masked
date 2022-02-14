
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_connect_state {int tunnel_state; } ;
struct connectdata {int data; struct http_connect_state* connect_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct connectdata *VAR_1)
{
  struct http_connect_state *VAR_2 = VAR_1->connect_state;
  VAR_2->tunnel_state = VAR_0;
  FUNC_0(VAR_1->data, "CONNECT phase completed!\n");
}
