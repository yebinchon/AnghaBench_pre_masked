
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int l3_proto; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2, unsigned long VAR_3)
{
 int VAR_4 = VAR_3 >> 8;

 if(!FUNC_0(VAR_2)) {
  FUNC_1("Invalid param: %d is not a valid card id\n", VAR_2);
  return -VAR_0;
 }

 VAR_1[VAR_2]->channel[VAR_3].l3_proto = VAR_4;
 return 0;
}
