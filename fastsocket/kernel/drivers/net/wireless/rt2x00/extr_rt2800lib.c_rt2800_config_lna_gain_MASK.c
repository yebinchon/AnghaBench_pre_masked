
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int channel; } ;
struct rt2x00lib_conf {TYPE_1__ rf; } ;
struct rt2x00_dev {short lna_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int *) ;
 short FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_7,
       struct rt2x00lib_conf *VAR_8)
{
 u16 VAR_9;
 short VAR_10;

 if (VAR_8->rf.channel <= 14) {
  FUNC_0(VAR_7, VAR_0, &VAR_9);
  VAR_10 = FUNC_1(VAR_9, VAR_2);
 } else if (VAR_8->rf.channel <= 64) {
  FUNC_0(VAR_7, VAR_0, &VAR_9);
  VAR_10 = FUNC_1(VAR_9, VAR_1);
 } else if (VAR_8->rf.channel <= 128) {
  FUNC_0(VAR_7, VAR_5, &VAR_9);
  VAR_10 = FUNC_1(VAR_9, VAR_6);
 } else {
  FUNC_0(VAR_7, VAR_3, &VAR_9);
  VAR_10 = FUNC_1(VAR_9, VAR_4);
 }

 VAR_7->lna_gain = VAR_10;
}
