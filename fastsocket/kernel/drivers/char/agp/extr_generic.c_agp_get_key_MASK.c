
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_list; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->key_list, VAR_0);
 if (VAR_2 < VAR_0) {
  FUNC_1(VAR_2, VAR_1->key_list);
  return VAR_2;
 }
 return -1;
}
