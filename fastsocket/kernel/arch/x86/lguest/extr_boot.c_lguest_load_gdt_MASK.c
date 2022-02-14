
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {int b; int a; } ;
struct desc_ptr {int size; scalar_t__ address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct desc_ptr *VAR_1)
{
 unsigned int VAR_2;
 struct desc_struct *VAR_3 = (void *)VAR_1->address;

 for (VAR_2 = 0; VAR_2 < (VAR_1->size+1)/8; VAR_2++)
  FUNC_0(VAR_0, VAR_2, VAR_3[VAR_2].a, VAR_3[VAR_2].b);
}
