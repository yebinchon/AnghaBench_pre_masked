
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tftphdr {int dummy; } ;
struct testcase {int dummy; } ;
struct TYPE_3__ {struct tftphdr hdr; } ;
struct TYPE_4__ {int counter; TYPE_1__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct testcase*,int) ;

__attribute__((used)) static int FUNC_1(struct testcase *VAR_4, struct tftphdr * volatile *VAR_5,
                   int VAR_6, int VAR_7)
{
  VAR_2[VAR_3].counter = VAR_6;
  VAR_3 = !VAR_3;
  if(VAR_2[VAR_3].counter != VAR_1)
    FUNC_0(VAR_4, VAR_7);
  VAR_2[VAR_3].counter = VAR_0;
  *VAR_5 = &VAR_2[VAR_3].buf.hdr;
  return VAR_6;
}
