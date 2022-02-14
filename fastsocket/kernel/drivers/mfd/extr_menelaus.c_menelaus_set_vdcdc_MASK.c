
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menelaus_vtg {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (struct menelaus_vtg const*,unsigned int,int,int) ;
 struct menelaus_vtg VAR_1 ;
 struct menelaus_vtg VAR_2 ;
 int VAR_3 ;

int FUNC_3(int VAR_4, unsigned int VAR_5)
{
 const struct menelaus_vtg *VAR_6;
 int VAR_7;

 if (VAR_4 != 2 && VAR_4 != 3)
  return -VAR_0;
 if (VAR_4 == 2)
  VAR_6 = &VAR_1;
 else
  VAR_6 = &VAR_2;

 if (VAR_5 == 0)
  return FUNC_2(VAR_6, 0, 0, 0);

 VAR_7 = FUNC_1(VAR_5, VAR_3,
         FUNC_0(VAR_3));
 if (VAR_7 < 0)
  return -VAR_0;
 return FUNC_2(VAR_6, VAR_5, VAR_7, 0x03);
}
