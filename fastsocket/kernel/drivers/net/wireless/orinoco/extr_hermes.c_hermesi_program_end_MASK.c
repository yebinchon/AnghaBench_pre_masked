
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes_response {int status; int resp2; int resp1; int resp0; } ;
struct hermes {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cmd_wait ) (struct hermes*,int ,int ,struct hermes_response*) ;int (* init_cmd_wait ) (struct hermes*,int,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hermes*,int ) ;
 int FUNC_1 (struct hermes*,int ,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct hermes*,int ,int ,struct hermes_response*) ;
 int FUNC_4 (struct hermes*,int,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hermes *VAR_6)
{
 struct hermes_response VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_8 = VAR_6->ops->cmd_wait(VAR_6, VAR_4, 0, &VAR_7);

 FUNC_2("PROGRAM_DISABLE returned %d, "
   "r0 0x%04x, r1 0x%04x, r2 0x%04x\n",
   VAR_8, VAR_7.resp0, VAR_7.resp1, VAR_7.resp2);

 if ((VAR_8 == 0) &&
     ((VAR_7.status & VAR_5) != VAR_2))
  VAR_8 = -VAR_0;

 VAR_9 = FUNC_0(VAR_6, 0);
 FUNC_2("AUX disable returned %d\n", VAR_9);


 FUNC_1(VAR_6, VAR_1, 0xFFFF);


 (void) VAR_6->ops->init_cmd_wait(VAR_6, 0x0000 | VAR_3,
          0, 0, 0, ((void*)0));

 return VAR_8 ? VAR_8 : VAR_9;
}
