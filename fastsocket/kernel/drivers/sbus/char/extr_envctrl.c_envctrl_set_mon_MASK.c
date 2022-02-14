
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_child_t {int * mon_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static void FUNC_1(struct i2c_child_t *VAR_5,
       const char *VAR_6,
       int VAR_7)
{




 if (!(FUNC_0(VAR_6,"temp,cpu")) ||
     !(FUNC_0(VAR_6,"temp,cpu0")) ||
     !(FUNC_0(VAR_6,"temp,cpu1")) ||
     !(FUNC_0(VAR_6,"temp,cpu2")) ||
     !(FUNC_0(VAR_6,"temp,cpu3")))
  VAR_5->mon_type[VAR_7] = VAR_0;

 if (!(FUNC_0(VAR_6,"vddcore,cpu0")) ||
     !(FUNC_0(VAR_6,"vddcore,cpu1")) ||
     !(FUNC_0(VAR_6,"vddcore,cpu2")) ||
     !(FUNC_0(VAR_6,"vddcore,cpu3")))
  VAR_5->mon_type[VAR_7] = VAR_1;

 if (!(FUNC_0(VAR_6,"temp,motherboard")))
  VAR_5->mon_type[VAR_7] = VAR_3;

 if (!(FUNC_0(VAR_6,"temp,scsi")))
  VAR_5->mon_type[VAR_7] = VAR_4;

 if (!(FUNC_0(VAR_6,"temp,ethernet")))
  VAR_5->mon_type[VAR_7] = VAR_2;
}
