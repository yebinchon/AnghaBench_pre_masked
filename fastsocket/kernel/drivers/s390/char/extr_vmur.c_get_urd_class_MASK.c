
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devno; } ;
struct urdev {TYPE_1__ dev_id; } ;
struct diag210 {int vrdclen; int vrdcvcla; int vrdcdvno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct diag210*) ;

__attribute__((used)) static int FUNC_1(struct urdev *VAR_3)
{
 static struct diag210 VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->dev_id.devno;
 VAR_4 = sizeof(struct diag210);

 VAR_5 = FUNC_0(&VAR_4);
 switch (VAR_5) {
 case 0:
  return -VAR_2;
 case 2:
  return VAR_4;
 case 3:
  return -VAR_1;
 default:
  return -VAR_0;
 }
}
