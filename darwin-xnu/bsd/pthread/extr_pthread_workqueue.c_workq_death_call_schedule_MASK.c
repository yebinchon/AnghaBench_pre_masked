
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct workqueue {int wq_death_call; int wq_flags; } ;
struct TYPE_2__ {int abstime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct workqueue*,int,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int ,int,int) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void
FUNC_4(struct workqueue *VAR_8, uint64_t VAR_9)
{
 uint32_t VAR_10 = FUNC_1(&VAR_8->wq_flags, VAR_6);

 if (VAR_10 & (VAR_5 | VAR_4)) {
  return;
 }
 FUNC_2(&VAR_8->wq_flags, VAR_4, VAR_6);

 FUNC_0(VAR_3 | VAR_0, VAR_8, 1, 0, 0, 0);







 FUNC_3(VAR_8->wq_death_call, ((void*)0), VAR_9,
   VAR_7.abstime / 10,
   VAR_1 | VAR_2);
}
