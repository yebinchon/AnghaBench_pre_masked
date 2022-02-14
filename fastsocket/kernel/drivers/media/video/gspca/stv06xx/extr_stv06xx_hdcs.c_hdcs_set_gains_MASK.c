
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {struct hdcs* sensor_priv; } ;
struct hdcs {int gain_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_1, u8 VAR_2)
{
 struct hdcs *VAR_3 = VAR_1->sensor_priv;
 int VAR_4;
 u8 VAR_5[4];

 VAR_3->gain_cache = VAR_2;


 if (VAR_2 > 127)
  VAR_2 = 0x80 | (VAR_2 / 2);

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_2;
 VAR_5[2] = VAR_2;
 VAR_5[3] = VAR_2;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_5, 4);
  return VAR_4;
}
