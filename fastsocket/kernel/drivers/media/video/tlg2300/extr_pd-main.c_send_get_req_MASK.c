
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned short u16 ;
struct poseidon {int state; int udev; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int ,int ,int,int,unsigned short,unsigned short,int **,int,int ) ;
 int FUNC_3 (int ,int ) ;

s32 FUNC_4(struct poseidon *VAR_8, u8 VAR_9, s32 VAR_10,
   void *VAR_11, s32 *VAR_12, s32 VAR_13)
{
 s32 VAR_14;
 s8 VAR_15[128] = {};
 u16 VAR_16, VAR_17;

 if (VAR_8->state & VAR_2)
  return -VAR_0;

 FUNC_0(30);
 if (VAR_10 == 0) {
  VAR_17 = VAR_16 = 0;
 } else {

  VAR_16 = (unsigned short)(VAR_10 & 0xffff);
  VAR_17 = (unsigned short)((VAR_10 >> 16) & 0xffff);
 }
 VAR_14 = FUNC_2(VAR_8->udev,
    FUNC_3(VAR_8->udev, 0),
    VAR_3 | VAR_9,
    VAR_5 | VAR_7 | VAR_6,
    VAR_16,
    VAR_17,
    &VAR_15,
    (VAR_13 + sizeof(*VAR_12)),
    VAR_4);

 if (VAR_14 < 0) {
  return -VAR_1;
 } else {

  FUNC_1((char *)VAR_12, &VAR_15[0], sizeof(*VAR_12));
  FUNC_1((char *)VAR_11, &VAR_15[sizeof(*VAR_12)], VAR_13);
 }
 return 0;
}
