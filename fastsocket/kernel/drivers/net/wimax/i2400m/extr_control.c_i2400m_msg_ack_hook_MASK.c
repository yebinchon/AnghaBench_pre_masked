
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_l3l4_hdr {int status; int type; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef int strerr ;



 int FUNC_0 (int,struct device*,char*,size_t) ;
 struct device* FUNC_1 (struct i2400m*) ;
 int FUNC_2 (struct i2400m_l3l4_hdr const*,char*,int) ;
 unsigned int FUNC_3 (int ) ;

void FUNC_4(struct i2400m *VAR_0,
    const struct i2400m_l3l4_hdr *VAR_1, size_t VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = FUNC_1(VAR_0);
 unsigned VAR_5, VAR_6;
 char VAR_7[32];



 VAR_5 = FUNC_3(VAR_1->type);
 VAR_6 = FUNC_3(VAR_1->status);
 switch (VAR_5) {
 case 128:


  if (0) {
   VAR_3 = FUNC_2(
    VAR_1, VAR_7, sizeof(VAR_7));
   if (VAR_3 >= 0)
    FUNC_0(1, VAR_4, "ready for power save: %zd\n",
      VAR_2);
  }
  break;
 };
 return;
}
