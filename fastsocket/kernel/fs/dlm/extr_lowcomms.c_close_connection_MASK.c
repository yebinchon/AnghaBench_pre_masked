
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int sock_mutex; scalar_t__ retries; int * rx_page; struct connection* othercon; int * sock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct connection *VAR_0, bool VAR_1)
{
 FUNC_1(&VAR_0->sock_mutex);

 if (VAR_0->sock) {
  FUNC_3(VAR_0->sock);
  VAR_0->sock = ((void*)0);
 }
 if (VAR_0->othercon && VAR_1) {

  FUNC_4(VAR_0->othercon, 0);
 }
 if (VAR_0->rx_page) {
  FUNC_0(VAR_0->rx_page);
  VAR_0->rx_page = ((void*)0);
 }

 VAR_0->retries = 0;
 FUNC_2(&VAR_0->sock_mutex);
}
