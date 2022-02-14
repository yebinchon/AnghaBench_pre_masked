
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
 int FUNC_1 (struct hd_struct*,int) ;
 int FUNC_2 (int,struct hd_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct rsxx_cardinfo *VAR_0, struct bio *VAR_1)
{
 struct hd_struct *VAR_2 = &VAR_0->gendisk->part0;
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_3();

 FUNC_2(VAR_4, VAR_2);
 FUNC_1(VAR_2, VAR_3);

 FUNC_4();
}
