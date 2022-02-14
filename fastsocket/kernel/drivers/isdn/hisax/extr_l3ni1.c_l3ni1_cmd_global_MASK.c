
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int proc; void* invoke_id; int ll_id; } ;
struct TYPE_8__ {TYPE_1__ ni1; } ;
struct l3_process {int timer; TYPE_2__ prot; } ;
struct PStack {int dummy; } ;
struct TYPE_9__ {int datalen; int proc; void** data; void* hl_id; int timeout; int ll_id; } ;
struct TYPE_10__ {TYPE_3__ ni1_io; } ;
struct TYPE_11__ {int arg; TYPE_4__ parm; } ;
typedef TYPE_5__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (void**,int,int ) ;


 int VAR_3 ;
 int FUNC_3 (struct PStack*,void*) ;
 struct sk_buff* FUNC_4 (int) ;
 int FUNC_5 (struct PStack*,char*,...) ;
 int FUNC_6 (struct PStack*,int,struct sk_buff*) ;
 struct l3_process* FUNC_7 (struct PStack*,void*) ;
 int FUNC_8 (void**,void**,int) ;
 void* FUNC_9 (struct PStack*) ;
 struct l3_process* FUNC_10 (struct PStack*,int) ;
 int FUNC_11 (struct l3_process*) ;
 void** FUNC_12 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_13(struct PStack *VAR_4, isdn_ctrl *VAR_5)
{ u_char VAR_6;
  u_char VAR_7[265];
  u_char *VAR_8 = VAR_7;
  int VAR_9, VAR_10, VAR_11;
  struct sk_buff *VAR_12;
  struct l3_process *VAR_13 = ((void*)0);

  switch (VAR_5->arg)
   { case 129:
       if (VAR_5->parm.ni1_io.datalen < 0) return(-2);

       for (VAR_11 = 1, VAR_9 = VAR_5->parm.ni1_io.proc >> 8; VAR_9; VAR_9++)
         VAR_9 = VAR_9 >> 8;
       VAR_10 = VAR_5->parm.ni1_io.datalen + VAR_11 + 8;
       if (VAR_10 > 255)
         return(-2);

       if (!(VAR_6 = FUNC_9(VAR_4)))
         return(0);

       VAR_9 = -1;
       FUNC_2(VAR_8, VAR_9, VAR_2);
       *VAR_8++ = 0x1C;
       *VAR_8++ = VAR_10;
       *VAR_8++ = 0x91;
       *VAR_8++ = 0xA1;
       *VAR_8++ = VAR_10 - 3;
       *VAR_8++ = 0x02;
       *VAR_8++ = 0x01;
       *VAR_8++ = VAR_6;
       *VAR_8++ = 0x02;
       *VAR_8++ = VAR_11;

       for (VAR_9 = VAR_11; VAR_9; VAR_9--)
         *VAR_8++ = (VAR_5->parm.ni1_io.proc >> (VAR_9-1)) & 0xFF;
       FUNC_8(VAR_8, VAR_5->parm.ni1_io.data, VAR_5->parm.ni1_io.datalen);
       VAR_10 = (VAR_8 - VAR_7) + VAR_5->parm.ni1_io.datalen;

       if (VAR_5->parm.ni1_io.timeout > 0)
        if (!(VAR_13 = FUNC_10(VAR_4, -1)))
          { FUNC_3(VAR_4, VAR_6);
            return(-2);
          }
       VAR_13->prot.ni1.ll_id = VAR_5->parm.ni1_io.ll_id;
       VAR_13->prot.ni1.proc = VAR_5->parm.ni1_io.proc;

       if (!(VAR_12 = FUNC_4(VAR_10)))
         { FUNC_3(VAR_4, VAR_6);
           if (VAR_13) FUNC_11(VAR_13);
           return(-2);
         }
       FUNC_8(FUNC_12(VAR_12, VAR_10), VAR_7, VAR_10);

       if (VAR_13)
        { VAR_13->prot.ni1.invoke_id = VAR_6;
          FUNC_0(&VAR_13->timer, VAR_5->parm.ni1_io.timeout, VAR_0 | VAR_3);
        }

       FUNC_6(VAR_4, VAR_1 | VAR_3, VAR_12);
       VAR_5->parm.ni1_io.hl_id = VAR_6;
       return(0);

     case 128:
       if ((VAR_13 = FUNC_7(VAR_4, VAR_5->parm.ni1_io.hl_id)))
 { FUNC_1(&VAR_13->timer);
          FUNC_11(VAR_13);
          return(0);
        }
       else
 { FUNC_5(VAR_4, "l3ni1_cmd_global abort unknown id");
          return(-2);
        }
       break;

     default:
       FUNC_5(VAR_4, "l3ni1_cmd_global unknown cmd 0x%lx", VAR_5->arg);
       return(-1);
   }
  return(-1);
}
