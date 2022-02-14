
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trackpoint_data {int press_to_select; int skipback; int ext_dev; int jenks; int ztime; int upthresh; int thresh; int mindrag; int draghys; int reach; int speed; int inertia; int sensitivity; } ;
struct psmouse {int ps2dev; struct trackpoint_data* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *,int ,unsigned char*) ;
 int FUNC_1 (int *,int ,unsigned char) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_22)
{
 struct trackpoint_data *VAR_23 = VAR_22->private;
 unsigned char VAR_24;


 FUNC_0(&VAR_22->ps2dev, VAR_19, &VAR_24);
 if (VAR_24 & VAR_8)
  FUNC_1(&VAR_22->ps2dev, VAR_19, VAR_8);

 FUNC_0(&VAR_22->ps2dev, VAR_18, &VAR_24);
 if (VAR_24 & VAR_7)
  FUNC_1(&VAR_22->ps2dev, VAR_18, VAR_7);

 FUNC_0(&VAR_22->ps2dev, VAR_15, &VAR_24);
 if (VAR_24 & VAR_4)
  FUNC_1(&VAR_22->ps2dev, VAR_15, VAR_4);


 FUNC_2(&VAR_22->ps2dev, VAR_11, VAR_23->sensitivity);
 FUNC_2(&VAR_22->ps2dev, VAR_1, VAR_23->inertia);
 FUNC_2(&VAR_22->ps2dev, VAR_12, VAR_23->speed);

 FUNC_2(&VAR_22->ps2dev, VAR_10, VAR_23->reach);
 FUNC_2(&VAR_22->ps2dev, VAR_0, VAR_23->draghys);
 FUNC_2(&VAR_22->ps2dev, VAR_9, VAR_23->mindrag);

 FUNC_2(&VAR_22->ps2dev, VAR_13, VAR_23->thresh);
 FUNC_2(&VAR_22->ps2dev, VAR_20, VAR_23->upthresh);

 FUNC_2(&VAR_22->ps2dev, VAR_21, VAR_23->ztime);
 FUNC_2(&VAR_22->ps2dev, VAR_2, VAR_23->jenks);

 FUNC_0(&VAR_22->ps2dev, VAR_16, &VAR_24);
 if (((VAR_24 & VAR_5) == VAR_5) != VAR_23->press_to_select)
   FUNC_1(&VAR_22->ps2dev, VAR_16, VAR_5);

 FUNC_0(&VAR_22->ps2dev, VAR_17, &VAR_24);
 if (((VAR_24 & VAR_6) == VAR_6) != VAR_23->skipback)
  FUNC_1(&VAR_22->ps2dev, VAR_17, VAR_6);

 FUNC_0(&VAR_22->ps2dev, VAR_14, &VAR_24);
 if (((VAR_24 & VAR_3) == VAR_3) != VAR_23->ext_dev)
  FUNC_1(&VAR_22->ps2dev, VAR_14, VAR_3);

 return 0;
}
