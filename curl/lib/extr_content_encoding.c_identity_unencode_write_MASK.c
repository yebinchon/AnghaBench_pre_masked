
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {int dummy; } ;
struct TYPE_3__ {int downstream; } ;
typedef TYPE_1__ contenc_writer ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*,int ,char const*,size_t) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_0,
                                        contenc_writer *VAR_1,
                                        const char *VAR_2, size_t VAR_3)
{
  return FUNC_0(VAR_0, VAR_1->downstream, VAR_2, VAR_3);
}
