
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wf_sensor {int name; } ;
struct wf_lm75_sensor {int inited; int * i2c; } ;
typedef int s32 ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 struct wf_lm75_sensor* FUNC_6 (struct wf_sensor*) ;

__attribute__((used)) static int FUNC_7(struct wf_sensor *VAR_1, s32 *VAR_2)
{
 struct wf_lm75_sensor *VAR_3 = FUNC_6(VAR_1);
 s32 VAR_4;

 if (VAR_3->i2c == ((void*)0))
  return -VAR_0;


 if (!VAR_3->inited) {
  u8 VAR_5, VAR_6 = (u8)FUNC_1(VAR_3->i2c, 1);

  FUNC_0("wf_lm75: Initializing %s, cfg was: %02x\n",
      VAR_1->name, VAR_6);




  VAR_5 = VAR_6 & ~0x01;
  FUNC_3(VAR_3->i2c, 1, VAR_5);
  VAR_3->inited = 1;


  FUNC_5(200);
 }


 VAR_4 = (s32)FUNC_4(FUNC_2(VAR_3->i2c, 0));
 VAR_4 <<= 8;
 *VAR_2 = VAR_4;

 return 0;
}
