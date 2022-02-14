
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int len; int ptr; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
         struct talitos_ptr *VAR_1,
         enum dma_data_direction VAR_2)
{
 FUNC_2(VAR_0, FUNC_1(VAR_1->ptr),
    FUNC_0(VAR_1->len), VAR_2);
}
