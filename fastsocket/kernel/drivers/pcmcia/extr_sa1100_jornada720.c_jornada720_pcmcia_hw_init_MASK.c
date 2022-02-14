
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct soc_pcmcia_socket*) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (int ,unsigned int,int ,int ) ;
 int FUNC_4 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct soc_pcmcia_socket *VAR_5)
{
 unsigned int VAR_6 = VAR_0 | VAR_1 | VAR_2 | VAR_3;




 VAR_4 |= 0x00000002;

 FUNC_3(FUNC_0(VAR_5->dev), VAR_6, 0, 0);
 FUNC_2(FUNC_0(VAR_5->dev), VAR_6, 0);
 FUNC_4(FUNC_0(VAR_5->dev), VAR_6, 0);

 return FUNC_1(VAR_5);
}
