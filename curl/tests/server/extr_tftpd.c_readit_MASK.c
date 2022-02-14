
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftphdr {int dummy; } ;
struct testcase {int dummy; } ;
struct TYPE_2__ {struct tftphdr hdr; } ;
struct bf {scalar_t__ counter; TYPE_1__ buf; } ;


 scalar_t__ VAR_0 ;
 struct bf* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct testcase*,int) ;

__attribute__((used)) static int FUNC_1(struct testcase *VAR_3, struct tftphdr **VAR_4,
                  int VAR_5 )
{
  struct bf *VAR_6;

  VAR_1[VAR_2].counter = VAR_0;
  VAR_2 = !VAR_2;

  VAR_6 = &VAR_1[VAR_2];
  if(VAR_6->counter == VAR_0)
    FUNC_0(VAR_3, VAR_5);

  *VAR_4 = &VAR_6->buf.hdr;
  return VAR_6->counter;
}
