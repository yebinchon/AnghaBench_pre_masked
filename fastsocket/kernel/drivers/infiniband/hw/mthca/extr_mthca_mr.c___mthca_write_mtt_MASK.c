
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mthca_mtt {int first_seg; } ;
struct mthca_mailbox {scalar_t__* buf; } ;
struct TYPE_4__ {int mtt_seg_size; } ;
struct TYPE_3__ {int mtt_base; } ;
struct mthca_dev {TYPE_2__ limits; TYPE_1__ mr_table; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mthca_mailbox*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mthca_dev*,struct mthca_mailbox*,int) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_6 (struct mthca_dev*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct mthca_dev *VAR_3, struct mthca_mtt *VAR_4,
        int VAR_5, u64 *VAR_6, int VAR_7)
{
 struct mthca_mailbox *VAR_8;
 __be64 *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_8 = FUNC_4(VAR_3, VAR_0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_9 = VAR_8->buf;

 while (VAR_7 > 0) {
  VAR_9[0] = FUNC_2(VAR_3->mr_table.mtt_base +
        VAR_4->first_seg * VAR_3->limits.mtt_seg_size +
        VAR_5 * 8);
  VAR_9[1] = 0;
  for (VAR_11 = 0; VAR_11 < VAR_7 && VAR_11 < VAR_1 / 8 - 2; ++VAR_11)
   VAR_9[VAR_11 + 2] = FUNC_2(VAR_6[VAR_11] |
             VAR_2);





  if (VAR_11 & 1)
   VAR_9[VAR_11 + 2] = 0;

  VAR_10 = FUNC_3(VAR_3, VAR_8, (VAR_11 + 1) & ~1);
  if (VAR_10) {
   FUNC_6(VAR_3, "WRITE_MTT failed (%d)\n", VAR_10);
   goto out;
  }

  VAR_7 -= VAR_11;
  VAR_5 += VAR_11;
  VAR_6 += VAR_11;
 }

out:
 FUNC_5(VAR_3, VAR_8);
 return VAR_10;
}
