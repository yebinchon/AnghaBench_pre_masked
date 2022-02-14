
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemtek {int muted; int lock; int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct gemtek*,int ,int ) ;
 int FUNC_1 (struct gemtek*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct gemtek *VAR_12)
{
 int VAR_13;

 VAR_12->muted = 1;

 if (VAR_11) {

  FUNC_0(VAR_12, VAR_3, 0);
  FUNC_0(VAR_12, VAR_0, 0);
  FUNC_0(VAR_12, VAR_6, 0);
  FUNC_0(VAR_12, VAR_5, 0);
  FUNC_0(VAR_12, VAR_1, 0);
  FUNC_0(VAR_12, VAR_7, 0);
  FUNC_0(VAR_12, VAR_4, VAR_9);
  FUNC_0(VAR_12, VAR_2, 0);
  FUNC_1(VAR_12);
  return;
 }

 FUNC_3(&VAR_12->lock);


 VAR_13 = FUNC_2(VAR_12->io);

 FUNC_5((VAR_13 >> 5) | VAR_8, VAR_12->io);
 FUNC_6(VAR_10);

 FUNC_4(&VAR_12->lock);
}
