
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int resource; int context; TYPE_1__* dispatcher; } ;
typedef TYPE_2__ ebb_request_extras ;
struct TYPE_7__ {scalar_t__ multipart_boundary_len; scalar_t__ data; } ;
typedef TYPE_3__ ebb_request ;
struct TYPE_5__ {int context; int (* parse ) (int ,int ,int ,char const*,size_t,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char const*,size_t,int ,int) ;

__attribute__((used)) static void FUNC_1(ebb_request* VAR_1, const char* VAR_2, size_t VAR_3)
{
 ebb_request_extras* VAR_4 = (ebb_request_extras*)VAR_1->data;
 if (VAR_4->dispatcher && VAR_4->dispatcher->parse && VAR_1->multipart_boundary_len == 0)
  VAR_4->context = VAR_4->dispatcher->parse(VAR_4->dispatcher->context, VAR_4->context, VAR_4->resource, VAR_2, VAR_3, VAR_0, -1);
}
