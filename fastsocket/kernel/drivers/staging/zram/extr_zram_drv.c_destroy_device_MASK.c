
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zram {scalar_t__ queue; scalar_t__ disk; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct zram *VAR_1)
{
 FUNC_4(&FUNC_2(VAR_1->disk)->kobj,
   &VAR_0);

 if (VAR_1->disk) {
  FUNC_1(VAR_1->disk);
  FUNC_3(VAR_1->disk);
 }

 if (VAR_1->queue)
  FUNC_0(VAR_1->queue);
}
