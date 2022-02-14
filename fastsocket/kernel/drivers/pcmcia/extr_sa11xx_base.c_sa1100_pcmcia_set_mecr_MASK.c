
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct soc_pcmcia_timing {int attr; int mem; int io; } ;
struct soc_pcmcia_socket {int nr; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned int (* get_timing ) (struct soc_pcmcia_socket*,unsigned int,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ,unsigned int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ,unsigned int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (struct soc_pcmcia_socket*,int,char*,int ,int ,int ,int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct soc_pcmcia_socket*,struct soc_pcmcia_timing*) ;
 unsigned int FUNC_12 (struct soc_pcmcia_socket*,unsigned int,int ) ;
 unsigned int FUNC_13 (struct soc_pcmcia_socket*,unsigned int,int ) ;
 unsigned int FUNC_14 (struct soc_pcmcia_socket*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_15(struct soc_pcmcia_socket *VAR_1, unsigned int VAR_2)
{
 struct soc_pcmcia_timing VAR_3;
 u32 VAR_4, VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 FUNC_11(VAR_1, &VAR_3);

 VAR_7 = VAR_1->ops->get_timing(VAR_1, VAR_2, VAR_3.io);
 VAR_8 = VAR_1->ops->get_timing(VAR_1, VAR_2, VAR_3.mem);
 VAR_9 = VAR_1->ops->get_timing(VAR_1, VAR_2, VAR_3.attr);

 FUNC_10(VAR_6);

 VAR_5 = VAR_4 = VAR_0;
 FUNC_7(VAR_4, VAR_1->nr, 0);
 FUNC_3(VAR_4, VAR_1->nr, VAR_7);
 FUNC_1(VAR_4, VAR_1->nr, VAR_9);
 FUNC_5(VAR_4, VAR_1->nr, VAR_8);
 if (VAR_5 != VAR_4)
  VAR_0 = VAR_4;

 FUNC_9(VAR_6);

 FUNC_8(VAR_1, 2, "FAST %X  BSM %X  BSA %X  BSIO %X\n",
       FUNC_6(VAR_4, VAR_1->nr),
       FUNC_4(VAR_4, VAR_1->nr), FUNC_0(VAR_4, VAR_1->nr),
       FUNC_2(VAR_4, VAR_1->nr));

 return 0;
}
