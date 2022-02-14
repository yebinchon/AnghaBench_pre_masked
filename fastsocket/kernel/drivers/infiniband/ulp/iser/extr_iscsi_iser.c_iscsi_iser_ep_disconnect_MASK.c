
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_conn {int state; TYPE_1__* iser_conn; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct TYPE_2__ {int iscsi_conn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iser_conn*) ;
 int FUNC_2 (char*,struct iser_conn*,int ) ;

__attribute__((used)) static void
FUNC_3(struct iscsi_endpoint *VAR_0)
{
 struct iser_conn *VAR_1;

 VAR_1 = VAR_0->dd_data;
 if (VAR_1->iser_conn)







  FUNC_0(VAR_1->iser_conn->iscsi_conn);


 FUNC_2("ib conn %p state %d\n", VAR_1, VAR_1->state);
 FUNC_1(VAR_1);
}
