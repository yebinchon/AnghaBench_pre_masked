
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {size_t intf_num; scalar_t__ si_type; int * thread; int dev; int irq; int si_timer; scalar_t__ last_timeout_jiffies; int (* irq_setup ) (struct smi_info*) ;int intf; } ;
typedef int ipmi_smi_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int ,struct smi_info*,char*,size_t) ;
 int FUNC_4 (int *,scalar_t__) ;
 size_t VAR_5 ;
 int FUNC_5 (int *,int ,long) ;
 int VAR_6 ;
 int FUNC_6 (struct smi_info*) ;

__attribute__((used)) static int FUNC_7(void *VAR_7,
    ipmi_smi_t VAR_8)
{
 struct smi_info *VAR_9 = VAR_7;
 int VAR_10 = 0;

 VAR_9->intf = VAR_8;


 if (VAR_9->irq_setup)
  VAR_9->irq_setup(VAR_9);


 FUNC_5(&VAR_9->si_timer, VAR_6, (long)VAR_9);
 VAR_9->last_timeout_jiffies = VAR_4;
 FUNC_4(&VAR_9->si_timer, VAR_4 + VAR_1);




 if (VAR_9->intf_num < VAR_5)
  VAR_10 = VAR_2[VAR_9->intf_num];




 else if ((VAR_9->si_type != VAR_0) && (!VAR_9->irq))
  VAR_10 = 1;

 if (VAR_10) {
  VAR_9->thread = FUNC_3(VAR_3, VAR_9,
           "kipmi%d", VAR_9->intf_num);
  if (FUNC_0(VAR_9->thread)) {
   FUNC_2(VAR_9->dev, "Could not start"
       " kernel thread due to error %ld, only using"
       " timers to drive the interface\n",
       FUNC_1(VAR_9->thread));
   VAR_9->thread = ((void*)0);
  }
 }

 return 0;
}
