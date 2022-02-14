
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int content_type_hash; scalar_t__ support_multi_range; scalar_t__ need_find_content_type; } ;
typedef TYPE_1__ FDFSHTTPParams ;


 int FUNC_0 (int *) ;

void FUNC_1(FDFSHTTPParams *VAR_0)
{
 if (!(VAR_0->need_find_content_type || VAR_0->support_multi_range))
 {
  FUNC_0(&VAR_0->content_type_hash);
 }
}
