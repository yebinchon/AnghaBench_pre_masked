
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {struct claw_privbk* ml_priv; } ;
struct claw_privbk {struct chbk* channel; } ;
struct chbk {int cdev; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
        int VAR_6;
 struct claw_privbk *VAR_7 = VAR_5->ml_priv;
 unsigned long VAR_8;
        struct chbk *VAR_9;

 FUNC_0(4, VAR_3, "claw_tx");
        VAR_9=&VAR_7->channel[VAR_2];
        FUNC_4(FUNC_3(VAR_9->cdev), VAR_8);
        VAR_6=FUNC_2( VAR_4, VAR_5, 1 );
        FUNC_5(FUNC_3(VAR_9->cdev), VAR_8);
 FUNC_1(4, VAR_3, "clawtx%d", VAR_6);
 if (VAR_6)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;
        return VAR_6;
}
