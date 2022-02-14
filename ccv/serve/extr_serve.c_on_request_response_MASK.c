
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
struct TYPE_5__ {TYPE_1__ response; int * connection; } ;
typedef TYPE_2__ ebb_request_extras ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_3__ ebb_request ;
typedef int ebb_connection ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void* VAR_1)
{
 ebb_request* VAR_2 = (ebb_request*)VAR_1;
 ebb_request_extras* VAR_3 = (ebb_request_extras*)VAR_2->data;
 ebb_connection* VAR_4 = VAR_3->connection;
 FUNC_0(VAR_4, VAR_3->response.data, VAR_3->response.len, VAR_0);
}
