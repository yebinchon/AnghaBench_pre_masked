
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemtek {int lock; int io; int lastfreq; scalar_t__ muted; } ;


 int VAR_0 ;
 int FUNC_0 (struct gemtek*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct gemtek *VAR_2)
{
 int VAR_3;

 VAR_2->muted = 0;
 if (VAR_1) {

  FUNC_0(VAR_2, VAR_2->lastfreq);
  return;
 }
 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_1(VAR_2->io);
 FUNC_4(VAR_3 >> 5, VAR_2->io);
 FUNC_5(VAR_0);

 FUNC_3(&VAR_2->lock);
}
