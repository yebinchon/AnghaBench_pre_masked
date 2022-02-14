
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {struct iblock_req* priv; } ;
struct iblock_req {int ib_bio_err_cnt; } ;
struct bio {int bi_flags; struct se_cmd* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (char*,struct bio*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_2, int VAR_3)
{
 struct se_cmd *VAR_4 = VAR_2->bi_private;
 struct iblock_req *VAR_5 = VAR_4->priv;




 if (!FUNC_5(VAR_0, &VAR_2->bi_flags) && !VAR_3)
  VAR_3 = -VAR_1;

 if (VAR_3 != 0) {
  FUNC_3("test_bit(BIO_UPTODATE) failed for bio: %p,"
   " err: %d\n", VAR_2, VAR_3);



  FUNC_0(&VAR_5->ib_bio_err_cnt);
  FUNC_4();
 }

 FUNC_1(VAR_2);

 FUNC_2(VAR_4);
}
