
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcmcia_init {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_init *VAR_10)
{
 u16 VAR_11;
 VAR_11 = FUNC_1(VAR_2) & ~0xf;
 VAR_11 &= ~(VAR_6 | VAR_7);
 FUNC_5(VAR_11, VAR_2);
 FUNC_3(500);
 return VAR_3;

}
