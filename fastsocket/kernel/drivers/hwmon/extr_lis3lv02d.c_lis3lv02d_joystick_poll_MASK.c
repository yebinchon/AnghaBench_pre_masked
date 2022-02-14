
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct input_polled_dev {int input; } ;
struct TYPE_3__ {scalar_t__ zcalib; scalar_t__ ycalib; scalar_t__ xcalib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_3, &VAR_5, &VAR_6, &VAR_7);
 FUNC_0(VAR_4->input, VAR_0, VAR_5 - VAR_3.xcalib);
 FUNC_0(VAR_4->input, VAR_1, VAR_6 - VAR_3.ycalib);
 FUNC_0(VAR_4->input, VAR_2, VAR_7 - VAR_3.zcalib);
}
