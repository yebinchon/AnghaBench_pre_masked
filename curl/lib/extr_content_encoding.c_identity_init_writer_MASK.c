
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {int dummy; } ;
struct TYPE_3__ {scalar_t__ downstream; } ;
typedef TYPE_1__ contenc_writer ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static CURLcode FUNC_0(struct connectdata *VAR_2,
                                     contenc_writer *VAR_3)
{
  (void) VAR_2;
  return VAR_3->downstream? VAR_0: VAR_1;
}
