
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n2rng {int* test_control; int hv_state; TYPE_1__* units; int test_buffer; } ;
struct TYPE_2__ {int * control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct n2rng*,unsigned long) ;
 int FUNC_1 (struct n2rng*,unsigned long,int*,int ,int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct n2rng *VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 VAR_5->test_control[0] = (0x2 << VAR_1);
 VAR_5->test_control[1] = (0x2 << VAR_1);
 VAR_5->test_control[2] = (0x2 << VAR_1);
 VAR_5->test_control[3] = ((0x2 << VAR_1) |
          VAR_2 |
          ((VAR_4 - 2) << VAR_3));


 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_5->test_control,
          VAR_0,
          VAR_5->test_buffer,
          sizeof(VAR_5->test_buffer),
          &VAR_5->units[VAR_6].control[0],
          VAR_5->hv_state);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_5, VAR_6);
}
