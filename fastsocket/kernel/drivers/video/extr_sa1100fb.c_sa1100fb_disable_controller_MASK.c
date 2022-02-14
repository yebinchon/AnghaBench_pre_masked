
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100fb_info {int ctrlr_wait; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(struct sa1100fb_info *VAR_10)
{
 FUNC_0(VAR_9, VAR_8);

 FUNC_1("Disabling LCD controller\n");

 if (FUNC_3()) {
  VAR_0 |= VAR_6;
 }

 FUNC_6(VAR_7);
 FUNC_2(&VAR_10->ctrlr_wait, &VAR_9);

 VAR_5 = 0xffffffff;
 VAR_2 &= ~VAR_3;
 VAR_2 &= ~VAR_4;

 FUNC_5(20 * VAR_1 / 1000);
 FUNC_4(&VAR_10->ctrlr_wait, &VAR_9);
}
