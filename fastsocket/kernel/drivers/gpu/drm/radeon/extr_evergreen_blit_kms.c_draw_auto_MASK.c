
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct radeon_ring*,int) ;

__attribute__((used)) static void
FUNC_2(struct radeon_device *VAR_10)
{
 struct radeon_ring *VAR_11 = &VAR_10->ring[VAR_8];
 FUNC_1(VAR_11, FUNC_0(VAR_6, 1));
 FUNC_1(VAR_11, (VAR_9 - VAR_7) >> 2);
 FUNC_1(VAR_11, VAR_1);

 FUNC_1(VAR_11, FUNC_0(VAR_4, 0));
 FUNC_1(VAR_11,



     VAR_0);

 FUNC_1(VAR_11, FUNC_0(VAR_5, 0));
 FUNC_1(VAR_11, 1);

 FUNC_1(VAR_11, FUNC_0(VAR_3, 1));
 FUNC_1(VAR_11, 3);
 FUNC_1(VAR_11, VAR_2);

}
