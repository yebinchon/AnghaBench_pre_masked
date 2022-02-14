
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; int vendor; int product; int version; } ;
struct input_dev {int swbit; int ffbit; int sndbit; int ledbit; int mscbit; int absbit; int relbit; int keybit; int evbit; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,int,char,int ,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,char*,...) ;

__attribute__((used)) static int FUNC_3(char *VAR_10, int VAR_11, struct input_dev *VAR_12,
    int VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_2(VAR_10, FUNC_1(VAR_11, 0),
         "input:b%04Xv%04Xp%04Xe%04X-",
         VAR_12->id.bustype, VAR_12->id.vendor,
         VAR_12->id.product, VAR_12->id.version);

 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'e', VAR_12->evbit, 0, VAR_1);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'k', VAR_12->keybit, VAR_4, VAR_3);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'r', VAR_12->relbit, 0, VAR_7);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'a', VAR_12->absbit, 0, VAR_0);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'm', VAR_12->mscbit, 0, VAR_6);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'l', VAR_12->ledbit, 0, VAR_5);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    's', VAR_12->sndbit, 0, VAR_8);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'f', VAR_12->ffbit, 0, VAR_2);
 VAR_14 += FUNC_0(VAR_10 + VAR_14, VAR_11 - VAR_14,
    'w', VAR_12->swbit, 0, VAR_9);

 if (VAR_13)
  VAR_14 += FUNC_2(VAR_10 + VAR_14, FUNC_1(VAR_11 - VAR_14, 0), "\n");

 return VAR_14;
}
