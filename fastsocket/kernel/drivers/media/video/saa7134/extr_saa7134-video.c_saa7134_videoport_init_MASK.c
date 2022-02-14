
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {size_t board; } ;
struct TYPE_2__ {int video_out; unsigned int vid_port_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__* VAR_18 ;
 int FUNC_0 (int ,int) ;
 int** VAR_19 ;

int FUNC_1(struct saa7134_dev *VAR_20)
{

 int VAR_21 = VAR_18[VAR_20->board].video_out;
 int VAR_22;
 unsigned int VAR_23 = VAR_18[VAR_20->board].vid_port_opts;


 FUNC_0(VAR_0, VAR_19[VAR_21][0]);
 VAR_22 = VAR_19[VAR_21][1];
 if (VAR_23 & VAR_11)
  VAR_22 &= ~VAR_15;
 FUNC_0(VAR_1, VAR_22);
 FUNC_0(VAR_2, VAR_19[VAR_21][2]);
 FUNC_0(VAR_4, VAR_19[VAR_21][4]);
 VAR_22 = VAR_19[VAR_21][5];
 if (VAR_23 & VAR_10)
  VAR_22 &= ~VAR_14;
 if (VAR_23 & VAR_9)
  VAR_22 |= VAR_13;
 FUNC_0(VAR_5, VAR_22);
 VAR_22 = VAR_19[VAR_21][6];
 if (VAR_23 & VAR_12) {
  VAR_22 &= ~VAR_16;
  VAR_22 |= VAR_17;
 }
 FUNC_0(VAR_6, VAR_22);
 FUNC_0(VAR_7, VAR_19[VAR_21][7]);
 FUNC_0(VAR_8, VAR_19[VAR_21][8]);


 FUNC_0(VAR_3, VAR_19[VAR_21][3]);

 return 0;
}
