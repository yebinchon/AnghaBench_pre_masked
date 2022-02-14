
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int stopped; int bridge; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sd*,int,int) ;
 int FUNC_2 (struct sd*,int,int,int) ;

__attribute__((used)) static inline void FUNC_3(struct sd *VAR_3)
{
 FUNC_0(VAR_0, "stopping");
 VAR_3->stopped = 1;
 switch (VAR_3->bridge) {
 case 134:
 case 133:
  FUNC_1(VAR_3, VAR_2, 0x3d);
  break;
 case 132:
 case 131:
  FUNC_2(VAR_3, VAR_2, 0x3a, 0x3a);
  break;
 case 130:
  FUNC_1(VAR_3, VAR_1, 0x0f);
  FUNC_1(VAR_3, VAR_1, 0x00);
  FUNC_1(VAR_3, 0x22, 0x00);
  break;
 case 129:
  FUNC_2(VAR_3, 0x0f, 0x00, 0x02);
  break;
 case 128:
  FUNC_1(VAR_3, 0x3c, 0x0a05);
  break;
 }
}
