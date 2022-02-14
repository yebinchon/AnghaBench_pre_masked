
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int head; } ;
struct mirror_set {unsigned int nr_mirrors; int lock; TYPE_1__ failures; scalar_t__ mirror; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {struct mirror_set* ms; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,unsigned int) ;
 TYPE_2__* FUNC_1 (struct bio*) ;
 int FUNC_2 (TYPE_1__*,struct bio*) ;
 int FUNC_3 (struct bio*,int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned int,unsigned long*) ;
 int FUNC_9 (struct mirror_set*) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_1, void *VAR_2)
{
 unsigned VAR_3, VAR_4 = 0;
 struct bio *VAR_5 = (struct bio *) VAR_2;
 struct mirror_set *VAR_6;
 int VAR_7 = 0;
 unsigned long VAR_8;

 VAR_6 = FUNC_1(VAR_5)->ms;
 FUNC_3(VAR_5, ((void*)0));







 if (FUNC_5(!VAR_1)) {
  FUNC_0(VAR_5, VAR_4);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_6->nr_mirrors; VAR_3++)
  if (FUNC_8(VAR_3, &VAR_1))
   FUNC_4(VAR_6->mirror + VAR_3, VAR_0);






 FUNC_6(&VAR_6->lock, VAR_8);
 if (!VAR_6->failures.head)
  VAR_7 = 1;
 FUNC_2(&VAR_6->failures, VAR_5);
 FUNC_7(&VAR_6->lock, VAR_8);
 if (VAR_7)
  FUNC_9(VAR_6);
}
