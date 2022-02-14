
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_video_erase_char; int vc_cols; } ;
struct sti_struct {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct sti_struct*,int,int ,int,int ,int,int ) ;
 int FUNC_1 (struct sti_struct*,int,int ,int,int ,int ) ;
 int FUNC_2 (struct vc_data*,int ) ;
 struct sti_struct* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct vc_data *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    struct sti_struct *VAR_8 = VAR_1;

    if (VAR_2)
        return 0;

    FUNC_2(VAR_3, VAR_0);

    switch (VAR_6) {
    case 128:
 FUNC_0(VAR_8, VAR_4 + VAR_7, 0, VAR_4, 0, VAR_5 - VAR_4 - VAR_7, VAR_3->vc_cols);
 FUNC_1(VAR_8, VAR_5 - VAR_7, 0, VAR_7, VAR_3->vc_cols, VAR_3->vc_video_erase_char);
 break;

    case 129:
 FUNC_0(VAR_8, VAR_4, 0, VAR_4 + VAR_7, 0, VAR_5 - VAR_4 - VAR_7, VAR_3->vc_cols);
 FUNC_1(VAR_8, VAR_4, 0, VAR_7, VAR_3->vc_cols, VAR_3->vc_video_erase_char);
 break;
    }

    return 0;
}
