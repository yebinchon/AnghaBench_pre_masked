
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int fec; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_1(VAR_9, VAR_7);
 VAR_11 = FUNC_0(VAR_10, VAR_8);

 switch (VAR_11) {
 case 13:
  VAR_9->fec = VAR_0;
  break;

 case 18:
  VAR_9->fec = VAR_1;
  break;

 case 21:
  VAR_9->fec = VAR_2;
  break;

 case 24:
  VAR_9->fec = VAR_3;
  break;

 case 25:
  VAR_9->fec = VAR_4;
  break;

 case 26:
  VAR_9->fec = VAR_5;
  break;

 default:
  VAR_9->fec = VAR_6;
  break;
 }

 return 0;
}
