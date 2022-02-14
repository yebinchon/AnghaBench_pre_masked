
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_cardinfo {TYPE_1__* gendisk; } ;
struct hd_struct {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct hd_struct part0; } ;


 int FUNC_0 (struct bio*) ;
 unsigned long FUNC_1 (struct bio*) ;
 int * VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_2 (struct hd_struct*,int) ;
 int FUNC_3 (int,struct hd_struct*) ;
 int FUNC_4 (int,struct hd_struct*,int ,unsigned long) ;
 int FUNC_5 (int,struct hd_struct*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_8(struct rsxx_cardinfo *VAR_4,
    struct bio *VAR_5,
    unsigned long VAR_6)
{
 struct hd_struct *VAR_7 = &VAR_4->gendisk->part0;
 unsigned long VAR_8 = VAR_1 - VAR_6;
 int VAR_9 = FUNC_0(VAR_5);
 int VAR_10;

 VAR_10 = FUNC_6();

 FUNC_4(VAR_10, VAR_7, VAR_2[VAR_9], FUNC_1(VAR_5));
 FUNC_5(VAR_10, VAR_7, VAR_0[VAR_9]);
 FUNC_4(VAR_10, VAR_7, VAR_3[VAR_9], VAR_8);

 FUNC_3(VAR_10, VAR_7);
 FUNC_2(VAR_7, VAR_9);

 FUNC_7();
}
