
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;

__attribute__((used)) static u64 FUNC_0(struct mlx4_dev *VAR_3)
{
 u64 VAR_4 = VAR_0;
 if (VAR_3->caps.flags & VAR_1)
  VAR_4 |= (1ull << VAR_2);

 return VAR_4;
}
