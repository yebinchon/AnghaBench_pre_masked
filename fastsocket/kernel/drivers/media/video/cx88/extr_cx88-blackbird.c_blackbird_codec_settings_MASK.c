
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_50hz; int height; int width; } ;
struct cx8802_dev {TYPE_2__ params; TYPE_1__* core; int height; int width; } ;
struct TYPE_3__ {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx8802_dev*,int ,int,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cx8802_dev*,int ,int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct cx8802_dev *VAR_3)
{

 FUNC_0(VAR_3, VAR_0, 2, 0,
    VAR_3->height, VAR_3->width);

 VAR_3->params.width = VAR_3->width;
 VAR_3->params.height = VAR_3->height;
 VAR_3->params.is_50hz = (VAR_3->core->tvnorm & VAR_1) != 0;

 FUNC_1(VAR_3, VAR_2, ((void*)0), &VAR_3->params);
}
