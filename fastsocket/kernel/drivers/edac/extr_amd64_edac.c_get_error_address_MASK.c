
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
struct mce {int addr; int extcpu; } ;
struct cpuinfo_x86 {int x86; } ;
struct amd64_pvt {int F1; } ;
struct TYPE_2__ {struct amd64_pvt* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int*) ;
 size_t FUNC_3 (int ) ;
 struct cpuinfo_x86 VAR_2 ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static u64 FUNC_4(struct mce *VAR_4)
{
 struct cpuinfo_x86 *VAR_5 = &VAR_2;
 u64 VAR_6;
 u8 VAR_7 = 1;
 u8 VAR_8 = 47;

 if (VAR_5->x86 == 0xf) {
  VAR_7 = 3;
  VAR_8 = 39;
 }

 VAR_6 = VAR_4->addr & FUNC_0(VAR_7, VAR_8);




 if (VAR_5->x86 == 0x15) {
  struct amd64_pvt *VAR_9;
  u64 VAR_10, VAR_11;
  u32 VAR_12;
  u8 VAR_13, VAR_14;

  if ((VAR_6 & FUNC_0(24, 47)) >> 24 != 0x00fdf7)
   return VAR_6;

  VAR_13 = FUNC_3(VAR_4->extcpu);
  VAR_9 = VAR_3[VAR_13]->pvt_info;

  FUNC_2(VAR_9->F1, VAR_1, &VAR_12);
  VAR_14 = VAR_12 >> 21 & 0x7;


  VAR_10 = (VAR_12 & FUNC_0(0, 20)) << 3;


  VAR_10 |= VAR_14 ^ 0x7;


  VAR_10 <<= 24;

  if (!VAR_14)
   return VAR_10 | (VAR_6 & FUNC_0(0, 23));

  FUNC_2(VAR_9->F1, VAR_0, &VAR_12);


  VAR_11 = (VAR_6 & FUNC_0(12, 23)) << FUNC_1(VAR_14 + 1);


  VAR_11 |= (VAR_12 & FUNC_0(21, 23)) >> 9;


  VAR_11 |= VAR_6 & FUNC_0(0, 11);

  return VAR_10 | VAR_11;
 }

 return VAR_6;
}
