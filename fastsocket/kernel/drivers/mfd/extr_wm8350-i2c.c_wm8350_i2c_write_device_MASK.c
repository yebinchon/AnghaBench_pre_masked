
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct wm8350 {int i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct wm8350 *VAR_3, char VAR_4,
       int VAR_5, void *VAR_6)
{

 u8 VAR_7[(VAR_2 << 1) + 1];
 int VAR_8;

 if (VAR_5 > ((VAR_2 << 1) + 1))
  return -VAR_0;

 VAR_7[0] = VAR_4;
 FUNC_1(&VAR_7[1], VAR_6, VAR_5);
 VAR_8 = FUNC_0(VAR_3->i2c_client, VAR_7, VAR_5 + 1);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8 != VAR_5 + 1)
  return -VAR_1;
 return 0;
}
