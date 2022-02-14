
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct stv6110x_state {int * regs; } ;
struct dvb_frontend {struct stv6110x_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct stv6110x_state*,size_t,int *) ;
 int FUNC_4 (struct stv6110x_state*,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_6, u32 VAR_7)
{
 struct stv6110x_state *VAR_8 = VAR_6->tuner_priv;
 u32 VAR_9;
 u8 VAR_10;

 VAR_9 = VAR_7 >> 1;

 if (VAR_9 > 36000000)
  FUNC_1(VAR_8->regs[VAR_3], VAR_0, 31);
 else if (VAR_9 < 5000000)
  FUNC_1(VAR_8->regs[VAR_3], VAR_0, 0);
 else
  FUNC_1(VAR_8->regs[VAR_3], VAR_0, ((VAR_9 / 1000000) - 5));


 FUNC_1(VAR_8->regs[VAR_3], VAR_1, 0x0);
 FUNC_1(VAR_8->regs[VAR_4], VAR_2, 0x1);

 FUNC_4(VAR_8, VAR_3, VAR_8->regs[VAR_3]);
 FUNC_4(VAR_8, VAR_4, VAR_8->regs[VAR_4]);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_3(VAR_8, VAR_4, &VAR_8->regs[VAR_4]);
  if (!FUNC_0(VAR_2, VAR_8->regs[VAR_4]))
   break;
  FUNC_2(1);
 }
 FUNC_1(VAR_8->regs[VAR_3], VAR_1, 0x1);
 FUNC_4(VAR_8, VAR_3, VAR_8->regs[VAR_3]);

 return 0;
}
