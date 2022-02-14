
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int max_cos; int dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_1) * VAR_1->max_cos;
 VAR_5 = FUNC_1(VAR_1);


 if (VAR_2 && !FUNC_3(VAR_1)) {
  VAR_5++;
  VAR_4++;
 }

 FUNC_5(VAR_1->dev, VAR_4);

 VAR_3 = FUNC_4(VAR_1->dev, VAR_5);
 if (VAR_3) {
  FUNC_0("Failed to set real number of Rx queues: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_2(VAR_0, "Setting real num queues to (tx, rx) (%d, %d)\n",
     VAR_4, VAR_5);

 return VAR_3;
}
