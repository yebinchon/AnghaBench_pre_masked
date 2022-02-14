
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string {int len; int string; } ;
struct TYPE_2__ {int cols; int dev; } ;
struct con3270 {TYPE_1__ view; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct con3270 *VAR_0, struct string *VAR_1, int VAR_2)
{
 if (VAR_1->len >= VAR_0->view.cols - 5)
  return;
 FUNC_0(VAR_0->view.dev, VAR_1->string + VAR_1->len - 3,
          VAR_0->view.cols * (VAR_2 + 1));
}
