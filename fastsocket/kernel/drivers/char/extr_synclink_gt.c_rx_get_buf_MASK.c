
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tty; } ;
struct TYPE_6__ {int mode; } ;
struct slgt_info {unsigned int rbuf_current; int flag_buf; TYPE_3__* rbufs; TYPE_2__ port; TYPE_1__ params; } ;
struct TYPE_8__ {int buf; } ;


 int FUNC_0 (struct slgt_info*,int ,unsigned int,char*) ;
 int FUNC_1 (char*) ;


 int FUNC_2 (TYPE_3__) ;
 unsigned int FUNC_3 (TYPE_3__) ;
 int FUNC_4 (TYPE_3__) ;
 int FUNC_5 (struct slgt_info*,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct slgt_info *VAR_0)
{
 unsigned int VAR_1 = VAR_0->rbuf_current;
 unsigned int VAR_2;

 if (!FUNC_2(VAR_0->rbufs[VAR_1]))
  return 0;
 VAR_2 = FUNC_3(VAR_0->rbufs[VAR_1]);
 switch(VAR_0->params.mode) {
 case 128:
 case 129:

  if (FUNC_4(VAR_0->rbufs[VAR_1]))
   VAR_2--;
  break;
 }
 FUNC_0(VAR_0, VAR_0->rbufs[VAR_1].buf, VAR_2, "rx");
 FUNC_1(("rx_get_buf size=%d\n", VAR_2));
 if (VAR_2)
  FUNC_6(VAR_0->port.tty, VAR_0->rbufs[VAR_1].buf,
      VAR_0->flag_buf, VAR_2);
 FUNC_5(VAR_0, VAR_1, VAR_1);
 return 1;
}
