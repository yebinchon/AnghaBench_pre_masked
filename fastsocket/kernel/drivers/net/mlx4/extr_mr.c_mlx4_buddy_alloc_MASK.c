
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_buddy {int max_order; int lock; scalar_t__* num_free; int * bits; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u32 FUNC_5(struct mlx4_buddy *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_0->lock);

 for (VAR_2 = VAR_1; VAR_2 <= VAR_0->max_order; ++VAR_2)
  if (VAR_0->num_free[VAR_2]) {
   VAR_3 = 1 << (VAR_0->max_order - VAR_2);
   VAR_4 = FUNC_1(VAR_0->bits[VAR_2], VAR_3);
   if (VAR_4 < VAR_3)
    goto found;
  }

 FUNC_4(&VAR_0->lock);
 return -1;

 found:
 FUNC_0(VAR_4, VAR_0->bits[VAR_2]);
 --VAR_0->num_free[VAR_2];

 while (VAR_2 > VAR_1) {
  --VAR_2;
  VAR_4 <<= 1;
  FUNC_2(VAR_4 ^ 1, VAR_0->bits[VAR_2]);
  ++VAR_0->num_free[VAR_2];
 }

 FUNC_4(&VAR_0->lock);

 VAR_4 <<= VAR_1;

 return VAR_4;
}
