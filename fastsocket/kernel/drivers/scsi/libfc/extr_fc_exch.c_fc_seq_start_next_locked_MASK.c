
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int id; } ;
struct fc_exch {int f_ctl; int seq_id; } ;


 int FUNC_0 (struct fc_exch*,char*,int ,int ) ;
 struct fc_seq* FUNC_1 (struct fc_exch*,int ) ;
 struct fc_exch* FUNC_2 (struct fc_seq*) ;

__attribute__((used)) static struct fc_seq *FUNC_3(struct fc_seq *VAR_0)
{
 struct fc_exch *VAR_1 = FUNC_2(VAR_0);

 VAR_0 = FUNC_1(VAR_1, VAR_1->seq_id++);
 FUNC_0(VAR_1, "f_ctl %6x seq %2x\n",
      VAR_1->f_ctl, VAR_0->id);
 return VAR_0;
}
