
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00lib_conf {TYPE_1__* conf; } ;
struct rt2x00_dev {int beacon_int; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;
struct TYPE_2__ {int flags; int listen_interval; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_13,
    struct rt2x00lib_conf *VAR_14)
{
 enum dev_state VAR_15 =
     (VAR_14->conf->flags & VAR_0) ?
  VAR_12 : VAR_11;
 u32 VAR_16;

 if (VAR_15 == VAR_12) {
  FUNC_1(VAR_13, VAR_2, &VAR_16);
  FUNC_0(&VAR_16, VAR_4,
       VAR_13->beacon_int - 10);
  FUNC_0(&VAR_16, VAR_5,
       VAR_14->conf->listen_interval - 1);
  FUNC_0(&VAR_16, VAR_6, 5);


  FUNC_0(&VAR_16, VAR_3, 0);
  FUNC_2(VAR_13, VAR_2, VAR_16);

  FUNC_0(&VAR_16, VAR_3, 1);
  FUNC_2(VAR_13, VAR_2, VAR_16);

  FUNC_2(VAR_13, VAR_10,
       0x00000005);
  FUNC_2(VAR_13, VAR_1, 0x0000001c);
  FUNC_2(VAR_13, VAR_9, 0x00000060);

  FUNC_3(VAR_13, VAR_7, 0xff, 0, 0);
 } else {
  FUNC_1(VAR_13, VAR_2, &VAR_16);
  FUNC_0(&VAR_16, VAR_4, 0);
  FUNC_0(&VAR_16, VAR_5, 0);
  FUNC_0(&VAR_16, VAR_3, 0);
  FUNC_0(&VAR_16, VAR_6, 0);
  FUNC_2(VAR_13, VAR_2, VAR_16);

  FUNC_2(VAR_13, VAR_10,
       0x00000007);
  FUNC_2(VAR_13, VAR_1, 0x00000018);
  FUNC_2(VAR_13, VAR_9, 0x00000020);

  FUNC_3(VAR_13, VAR_8, 0xff, 0, 0);
 }
}
