
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int esb_stat; int state; int lp; int sid; int did; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct fc_exch*,unsigned int) ;
 int FUNC_1 (struct fc_frame*,int ,int ,int ,int ,int,int ) ;
 struct fc_frame* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct fc_seq*,struct fc_frame*) ;
 struct fc_seq* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fc_exch *VAR_12,
    unsigned int VAR_13)
{
 struct fc_seq *VAR_14;
 struct fc_frame *VAR_15;
 int VAR_16;

 if (VAR_12->esb_stat & (VAR_4 | VAR_3) ||
     VAR_12->state & (VAR_6 | VAR_7))
  return -VAR_2;




 VAR_14 = FUNC_4(&VAR_12->seq);
 if (!VAR_14)
  return -VAR_1;

 VAR_12->esb_stat |= VAR_5 | VAR_3;
 if (VAR_13)
  FUNC_0(VAR_12, VAR_13);





 if (!VAR_12->sid)
  return 0;




 VAR_15 = FUNC_2(VAR_12->lp, 0);
 if (VAR_15) {
  FUNC_1(VAR_15, VAR_10, VAR_12->did, VAR_12->sid,
          VAR_11, VAR_8 | VAR_9, 0);
  VAR_16 = FUNC_3(VAR_12->lp, VAR_14, VAR_15);
 } else
  VAR_16 = -VAR_0;
 return VAR_16;
}
