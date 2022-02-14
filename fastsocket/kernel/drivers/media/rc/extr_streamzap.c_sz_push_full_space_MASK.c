
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct streamzap_ir {int sum; } ;
struct TYPE_4__ {int pulse; int duration; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct streamzap_ir*,TYPE_1__) ;

__attribute__((used)) static void FUNC_3(struct streamzap_ir *VAR_2,
          unsigned char VAR_3)
{
 FUNC_0(VAR_1);

 VAR_1.pulse = 0;
 VAR_1.duration = ((int) VAR_3) * VAR_0;
 VAR_1.duration += VAR_0 / 2;
 VAR_2->sum += VAR_1.duration;
 VAR_1.duration = FUNC_1(VAR_1.duration);
 FUNC_2(VAR_2, VAR_1);
}
