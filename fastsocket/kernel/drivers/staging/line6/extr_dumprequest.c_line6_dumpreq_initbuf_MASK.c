
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line6_dump_request {TYPE_1__* reqbufs; } ;
struct TYPE_2__ {size_t length; int * buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,void const*,size_t) ;

int FUNC_2(struct line6_dump_request *VAR_2, const void *VAR_3,
     size_t VAR_4, int VAR_5)
{
 VAR_2->reqbufs[VAR_5].buffer = FUNC_0(VAR_4, VAR_1);
 if (VAR_2->reqbufs[VAR_5].buffer == ((void*)0))
  return -VAR_0;
 FUNC_1(VAR_2->reqbufs[VAR_5].buffer, VAR_3, VAR_4);
 VAR_2->reqbufs[VAR_5].length = VAR_4;
 return 0;
}
