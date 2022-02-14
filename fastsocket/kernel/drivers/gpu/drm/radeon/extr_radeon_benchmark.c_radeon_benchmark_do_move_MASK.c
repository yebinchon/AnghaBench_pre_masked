
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct radeon_device*,int ,int ,unsigned int,struct radeon_fence**) ;
 int FUNC_3 (struct radeon_device*,int ,int ,unsigned int,struct radeon_fence**) ;
 int FUNC_4 (struct radeon_fence**) ;
 int FUNC_5 (struct radeon_fence*,int) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_3, unsigned VAR_4,
        uint64_t VAR_5, uint64_t VAR_6,
        int VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;
 struct radeon_fence *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 VAR_9 = VAR_2;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  switch (VAR_7) {
  case 128:
   VAR_13 = FUNC_3(VAR_3, VAR_5, VAR_6,
         VAR_4 / VAR_1,
         &VAR_11);
   break;
  case 129:
   VAR_13 = FUNC_2(VAR_3, VAR_5, VAR_6,
          VAR_4 / VAR_1,
          &VAR_11);
   break;
  default:
   FUNC_0("Unknown copy method\n");
   VAR_13 = -VAR_0;
  }
  if (VAR_13)
   goto exit_do_move;
  VAR_13 = FUNC_5(VAR_11, 0);
  if (VAR_13)
   goto exit_do_move;
  FUNC_4(&VAR_11);
 }
 VAR_10 = VAR_2;
 VAR_13 = FUNC_1(VAR_10 - VAR_9);

exit_do_move:
 if (VAR_11)
  FUNC_4(&VAR_11);
 return VAR_13;
}
