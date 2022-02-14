
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int cmd_len; TYPE_1__* cmd; int set; int rulenum; scalar_t__ act_ofs; } ;
struct TYPE_10__ {scalar_t__ offset; scalar_t__ elements; scalar_t__ size; } ;
struct TYPE_9__ {scalar_t__ offset; scalar_t__ elements; scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ offset; scalar_t__ elements; scalar_t__ size; } ;
struct TYPE_7__ {int len; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_3__ VAR_14 ;
 TYPE_2__ VAR_15 ;

void
FUNC_5(void)
{

 VAR_8 = FUNC_3();
 VAR_7 = FUNC_2("dn", VAR_8);
 VAR_6 = FUNC_1();
 FUNC_4(VAR_5, VAR_7, VAR_6);

 VAR_14.size = VAR_14.elements = 0 ;
 VAR_14.offset = 0 ;

 VAR_15.size = VAR_15.elements = 0 ;
 VAR_15.offset = 0 ;

 VAR_10.size = VAR_10.elements = 0 ;
 VAR_10.offset = 0 ;
 VAR_12 = VAR_11;
 VAR_13 = VAR_9;

 FUNC_0(&VAR_4, sizeof VAR_4);
}
