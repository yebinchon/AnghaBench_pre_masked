
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {int (* release ) (struct ib_sa_query*) ;int client; int id; int (* callback ) (struct ib_sa_query*,int ,int *) ;} ;
struct ib_mad_send_wc {int status; TYPE_1__* send_buf; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {struct ib_sa_query** context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ib_sa_query*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ib_sa_query*,int ,int *) ;
 int FUNC_6 (struct ib_sa_query*,int ,int *) ;
 int FUNC_7 (struct ib_sa_query*,int ,int *) ;
 int FUNC_8 (struct ib_sa_query*) ;

__attribute__((used)) static void FUNC_9(struct ib_mad_agent *VAR_5,
    struct ib_mad_send_wc *VAR_6)
{
 struct ib_sa_query *VAR_7 = VAR_6->send_buf->context[0];
 unsigned long VAR_8;

 if (VAR_7->callback)
  switch (VAR_6->status) {
  case 129:

   break;
  case 130:
   VAR_7->callback(VAR_7, -VAR_2, ((void*)0));
   break;
  case 128:
   VAR_7->callback(VAR_7, -VAR_0, ((void*)0));
   break;
  default:
   VAR_7->callback(VAR_7, -VAR_1, ((void*)0));
   break;
  }

 FUNC_3(&VAR_3, VAR_8);
 FUNC_2(&VAR_4, VAR_7->id);
 FUNC_4(&VAR_3, VAR_8);

 FUNC_0(VAR_7);
 FUNC_1(VAR_7->client);
 VAR_7->release(VAR_7);
}
