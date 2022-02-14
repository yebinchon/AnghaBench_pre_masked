
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_polled_dev {struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int s8 ;
struct TYPE_2__ {int lock; scalar_t__ zcalib; scalar_t__ ycalib; scalar_t__ xcalib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct input_polled_dev *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->input;
 s8 VAR_7, VAR_8, VAR_9;

 FUNC_3(&VAR_3.lock);

 FUNC_0(&VAR_7, &VAR_8, &VAR_9);

 VAR_7 -= VAR_3.xcalib;
 VAR_8 -= VAR_3.ycalib;
 VAR_9 -= VAR_3.zcalib;

 FUNC_1(VAR_6, VAR_0, VAR_4 ? -VAR_7 : VAR_7);
 FUNC_1(VAR_6, VAR_1, VAR_4 ? -VAR_8 : VAR_8);
 FUNC_1(VAR_6, VAR_2, VAR_9);

 FUNC_2(VAR_6);

 FUNC_4(&VAR_3.lock);
}
