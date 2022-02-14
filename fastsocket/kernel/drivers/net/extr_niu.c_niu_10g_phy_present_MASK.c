
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int port; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_17)
{
 u64 VAR_18, VAR_19, VAR_20;

 VAR_18 = FUNC_0(VAR_2);
 switch (VAR_17->port) {
 case 0:
  VAR_19 = VAR_3;
  VAR_20 = (VAR_5 |
         VAR_0 |
         VAR_15 |
         VAR_10 |
         VAR_9 |
         VAR_8 |
         VAR_7);
  break;

 case 1:
  VAR_19 = VAR_4;
  VAR_20 = (VAR_6 |
         VAR_1 |
         VAR_16 |
         VAR_14 |
         VAR_13 |
         VAR_12 |
         VAR_11);
  break;

 default:
  return 0;
 }

 if ((VAR_18 & VAR_19) != VAR_20)
  return 0;
 return 1;
}
