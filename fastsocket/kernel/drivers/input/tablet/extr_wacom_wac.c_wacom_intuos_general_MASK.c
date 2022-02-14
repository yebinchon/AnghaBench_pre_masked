
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; TYPE_1__* features; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (void*,int ,unsigned char) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct wacom_wac *VAR_13, void *VAR_14)
{
 unsigned char *VAR_15 = VAR_13->data;
 unsigned int VAR_16;


 if ((VAR_15[1] & 0xb8) == 0xa0) {
  VAR_16 = (VAR_15[6] << 2) | ((VAR_15[7] >> 6) & 3);
  if ((VAR_13->features->type >= VAR_8 && VAR_13->features->type <= VAR_7) ||
                    (VAR_13->features->type >= VAR_10 && VAR_13->features->type <= VAR_9) ||
   (VAR_13->features->type >= VAR_11 &&
   VAR_13->features->type <= VAR_12)) {
   VAR_16 = (VAR_16 << 1) | (VAR_15[1] & 1);
  }
  FUNC_0(VAR_14, VAR_0, VAR_16);
  FUNC_0(VAR_14, VAR_1,
    ((VAR_15[7] << 1) & 0x7e) | (VAR_15[8] >> 7));
  FUNC_0(VAR_14, VAR_2, VAR_15[8] & 0x7f);
  FUNC_1(VAR_14, VAR_4, VAR_15[1] & 2);
  FUNC_1(VAR_14, VAR_5, VAR_15[1] & 4);
  FUNC_1(VAR_14, VAR_6, VAR_16 > 10);
 }


 if ((VAR_15[1] & 0xbc) == 0xb4) {
  FUNC_0(VAR_14, VAR_3,
    (VAR_15[6] << 2) | ((VAR_15[7] >> 6) & 3));
  FUNC_0(VAR_14, VAR_1,
    ((VAR_15[7] << 1) & 0x7e) | (VAR_15[8] >> 7));
  FUNC_0(VAR_14, VAR_2, VAR_15[8] & 0x7f);
 }
 return;
}
