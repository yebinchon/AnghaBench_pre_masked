
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parisc; int Tekram; int Symbios; } ;
struct sym_nvram {int type; TYPE_1__ data; } ;
struct sym_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sym_device*,int *) ;
 int FUNC_1 (struct sym_device*,int *) ;
 int FUNC_2 (struct sym_device*,int *) ;
 int FUNC_3 (struct sym_device*,int *) ;
 int FUNC_4 (struct sym_device*,int *) ;

int FUNC_5(struct sym_device *VAR_2, struct sym_nvram *VAR_3)
{
 if (!FUNC_2(VAR_2, &VAR_3->data.Symbios)) {
  VAR_3->type = VAR_0;
  FUNC_0(VAR_2, &VAR_3->data.Symbios);
 } else if (!FUNC_3(VAR_2, &VAR_3->data.Tekram)) {
  VAR_3->type = VAR_1;
  FUNC_1(VAR_2, &VAR_3->data.Tekram);
 } else {
  VAR_3->type = FUNC_4(VAR_2, &VAR_3->data.parisc);
 }
 return VAR_3->type;
}
