
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sbal; } ;
struct TYPE_3__ {int sbal; } ;
struct zfcp_qdio {TYPE_2__ resp_q; TYPE_1__ req_q; } ;
struct qdio_initialize {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qdio_initialize*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qdio_initialize*,struct zfcp_qdio*) ;

__attribute__((used)) static int FUNC_3(struct zfcp_qdio *VAR_1)
{
 struct qdio_initialize VAR_2;

 if (FUNC_1(VAR_1->req_q.sbal) ||
     FUNC_1(VAR_1->resp_q.sbal))
  return -VAR_0;

 FUNC_2(&VAR_2, VAR_1);

 return FUNC_0(&VAR_2);
}
