
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {int b; int a; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct desc_struct*,int,void const*,int) ;

__attribute__((used)) static void FUNC_2(struct desc_struct *VAR_1, int VAR_2,
       const void *VAR_3, int VAR_4)
{
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_0, VAR_2,
         VAR_1[VAR_2].a, VAR_1[VAR_2].b);
}
