
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_btlb_info {scalar_t__ max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct pdc_btlb_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct pdc_btlb_info *VAR_4)
{
        int VAR_5;
 unsigned long VAR_6;

        FUNC_3(&VAR_2, VAR_6);
        VAR_5 = FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_3), 0);
        FUNC_2(VAR_4, VAR_3, sizeof(*VAR_4));
        FUNC_4(&VAR_2, VAR_6);

        if(VAR_5 < 0) {
                VAR_4->max_size = 0;
        }
        return VAR_5;
}
