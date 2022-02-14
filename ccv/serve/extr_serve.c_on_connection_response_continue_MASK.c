
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int (* on_release ) (TYPE_5__*) ;scalar_t__ data; } ;
struct TYPE_9__ {TYPE_5__ response; } ;
typedef TYPE_1__ ebb_request_extras ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_2__ ebb_request ;
struct TYPE_11__ {TYPE_2__* request; } ;
typedef TYPE_3__ ebb_connection_extras ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_4__ ebb_connection ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(ebb_connection* VAR_0)
{
 ebb_connection_extras* VAR_1 = (ebb_connection_extras*)(VAR_0->data);
 ebb_request* VAR_2 = VAR_1->request;
 ebb_request_extras* VAR_3 = (ebb_request_extras*)VAR_2->data;

 if (VAR_3->response.data && VAR_3->response.on_release)
  VAR_3->response.on_release(&VAR_3->response);
 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
