
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connectdata {int dummy; } ;
struct TYPE_6__ {TYPE_1__* handler; } ;
typedef TYPE_2__ contenc_writer ;
struct TYPE_5__ {int (* unencode_write ) (struct connectdata*,TYPE_2__*,char const*,size_t) ;} ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*,TYPE_2__*,char const*,size_t) ;

CURLcode FUNC_1(struct connectdata *VAR_1, contenc_writer *VAR_2,
                             const char *VAR_3, size_t VAR_4)
{
  if(!VAR_4)
    return VAR_0;
  return VAR_2->handler->unencode_write(VAR_1, VAR_2, VAR_3, VAR_4);
}
