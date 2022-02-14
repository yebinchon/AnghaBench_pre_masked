
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct amd64_pvt {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd64_pvt*,unsigned int) ;
 int FUNC_1 (struct amd64_pvt*,unsigned int,scalar_t__,int*,int*) ;
 scalar_t__ FUNC_2 (struct amd64_pvt*,unsigned int) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct amd64_pvt *VAR_2, u64 VAR_3,
           int *VAR_4, int *VAR_5)
{
 int VAR_6 = -VAR_1;
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {

  if (!FUNC_0(VAR_2, VAR_7))
   continue;

  if ((FUNC_2(VAR_2, VAR_7) <= VAR_3) &&
      (FUNC_3(VAR_2, VAR_7) >= VAR_3)) {

   VAR_6 = FUNC_1(VAR_2, VAR_7,
         VAR_3, VAR_4,
         VAR_5);
   if (VAR_6 >= 0)
    break;
  }
 }
 return VAR_6;
}
