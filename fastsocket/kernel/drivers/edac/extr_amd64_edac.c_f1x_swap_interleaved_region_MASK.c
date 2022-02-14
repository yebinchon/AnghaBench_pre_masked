
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int dummy; } ;
struct TYPE_2__ {int x86; int x86_model; int x86_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct amd64_pvt*,int ,int*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static u64 FUNC_1(struct amd64_pvt *VAR_2, u64 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_1.x86 == 0x10) {

  if (VAR_1.x86_model < 4 ||
      (VAR_1.x86_model < 0xa &&
       VAR_1.x86_mask < 3))
   return VAR_3;
 }

 FUNC_0(VAR_2, VAR_0, &VAR_4);

 if (!(VAR_4 & 0x1))
  return VAR_3;

 VAR_5 = (VAR_4 >> 3) & 0x7f;
 VAR_6 = (VAR_4 >> 11) & 0x7f;
 VAR_7 = (VAR_4 >> 20) & 0x7f;
 VAR_8 = VAR_3 >> 27;

 if (!(VAR_3 >> 34) &&
     (((VAR_8 >= VAR_5) &&
      (VAR_8 <= VAR_6)) ||
      (VAR_8 < VAR_7)))
  return VAR_3 ^ (u64)VAR_5 << 27;

 return VAR_3;
}
