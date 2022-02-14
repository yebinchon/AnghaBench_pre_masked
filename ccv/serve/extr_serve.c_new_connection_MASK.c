
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
typedef int ebb_server ;
struct TYPE_5__ {scalar_t__ request; } ;
typedef TYPE_1__ ebb_connection_extras ;
struct TYPE_6__ {int on_close; int new_request; TYPE_1__* data; } ;
typedef TYPE_2__ ebb_connection ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ebb_connection* FUNC_2(ebb_server* VAR_2, struct sockaddr_in* VAR_3)
{
 ebb_connection* VAR_4 = (ebb_connection*)FUNC_1(sizeof(ebb_connection) + sizeof(ebb_connection_extras));
 FUNC_0(VAR_4);
 ebb_connection_extras* VAR_5 = (ebb_connection_extras*)(VAR_4 + 1);
 VAR_5->request = 0;
 VAR_4->data = VAR_5;
 VAR_4->new_request = VAR_0;
 VAR_4->on_close = VAR_1;
 return VAR_4;
}
