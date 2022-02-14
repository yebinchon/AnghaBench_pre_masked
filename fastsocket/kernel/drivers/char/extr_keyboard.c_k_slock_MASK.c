
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_3__ {size_t lockstate; size_t slockstate; } ;


 int FUNC_0 (TYPE_1__*,unsigned char) ;
 int FUNC_1 (struct vc_data*,unsigned char,char) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3, unsigned char VAR_4, char VAR_5)
{
 FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_5 || VAR_2)
  return;
 FUNC_0(VAR_0, VAR_4);

 if (!VAR_1[VAR_0->lockstate ^ VAR_0->slockstate]) {
  VAR_0->slockstate = 0;
  FUNC_0(VAR_0, VAR_4);
 }
}
