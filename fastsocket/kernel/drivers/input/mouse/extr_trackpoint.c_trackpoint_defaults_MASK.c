
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trackpoint_data {int ext_dev; int skipback; int inertia; int jenks; int ztime; int upthresh; int thresh; int mindrag; int draghys; int reach; int speed; int sensitivity; int press_to_select; } ;


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

__attribute__((used)) static void FUNC_0(struct trackpoint_data *VAR_13)
{
 VAR_13->press_to_select = VAR_5;
 VAR_13->sensitivity = VAR_7;
 VAR_13->speed = VAR_9;
 VAR_13->reach = VAR_6;

 VAR_13->draghys = VAR_0;
 VAR_13->mindrag = VAR_4;

 VAR_13->thresh = VAR_10;
 VAR_13->upthresh = VAR_11;

 VAR_13->ztime = VAR_12;
 VAR_13->jenks = VAR_3;

 VAR_13->inertia = VAR_2;
 VAR_13->skipback = VAR_8;
 VAR_13->ext_dev = VAR_1;
}
