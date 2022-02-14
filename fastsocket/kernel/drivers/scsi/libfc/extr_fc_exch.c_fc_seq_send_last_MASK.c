
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_seq {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int f_ctl; int lp; int sid; int did; } ;
typedef enum fc_rctl { ____Placeholder_fc_rctl } fc_rctl ;
typedef enum fc_fh_type { ____Placeholder_fc_fh_type } fc_fh_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_frame*,int,int ,int ,int,int,int ) ;
 struct fc_exch* FUNC_1 (struct fc_seq*) ;
 int FUNC_2 (int ,struct fc_seq*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_3(struct fc_seq *VAR_3, struct fc_frame *VAR_4,
        enum fc_rctl VAR_5, enum fc_fh_type VAR_6)
{
 u32 VAR_7;
 struct fc_exch *VAR_8 = FUNC_1(VAR_3);

 VAR_7 = VAR_1 | VAR_0 | VAR_2;
 VAR_7 |= VAR_8->f_ctl;
 FUNC_0(VAR_4, VAR_5, VAR_8->did, VAR_8->sid, VAR_6, VAR_7, 0);
 FUNC_2(VAR_8->lp, VAR_3, VAR_4);
}
