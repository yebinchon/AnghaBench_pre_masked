
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct saa7134_fh {int prio; } ;
struct saa7134_dev {int lock; int slock; int prio; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct saa7134_fh*,int ) ;
 scalar_t__ FUNC_3 (struct saa7134_dev*,int ) ;
 int FUNC_4 (struct saa7134_dev*) ;
 char* VAR_8 ;
 int FUNC_5 (struct saa7134_dev*,TYPE_1__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct saa7134_dev*,struct saa7134_fh*) ;
 int FUNC_9 (struct saa7134_dev*,struct saa7134_fh*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_10 (int *,int ) ;

int FUNC_11(struct saa7134_dev *VAR_10, struct saa7134_fh *VAR_11, v4l2_std_id *VAR_12)
{
 unsigned long VAR_13;
 unsigned int VAR_14;
 v4l2_std_id VAR_15;
 int VAR_16;




 if (VAR_11) {
  VAR_16 = FUNC_10(&VAR_10->prio, VAR_11->prio);
  if (0 != VAR_16)
   return VAR_16;
 } else if (FUNC_3(VAR_10, VAR_2)) {


  return -VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
  if (*VAR_12 == VAR_9[VAR_14].id)
   break;

 if (VAR_14 == VAR_3)
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
   if (*VAR_12 & VAR_9[VAR_14].id)
    break;
 if (VAR_14 == VAR_3)
  return -VAR_1;

 if ((*VAR_12 & VAR_4) && (VAR_8[0] != '-')) {
  if (VAR_8[0] == 'L' || VAR_8[0] == 'l') {
   if (VAR_8[1] == 'C' || VAR_8[1] == 'c')
    VAR_15 = VAR_7;
   else
    VAR_15 = VAR_6;
  } else {
   if (VAR_8[0] == 'D' || VAR_8[0] == 'd')
    VAR_15 = VAR_5;
   else
    VAR_15 = VAR_4;
  }
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
   if (VAR_15 == VAR_9[VAR_14].id)
    break;
  }
  if (VAR_14 == VAR_3)
   return -VAR_1;
 }

 *VAR_12 = VAR_9[VAR_14].id;

 FUNC_0(&VAR_10->lock);
 if (VAR_11 && FUNC_2(VAR_11, VAR_2)) {
  FUNC_6(&VAR_10->slock, VAR_13);
  FUNC_9(VAR_10, VAR_11);
  FUNC_7(&VAR_10->slock, VAR_13);

  FUNC_5(VAR_10, &VAR_9[VAR_14]);

  FUNC_6(&VAR_10->slock, VAR_13);
  FUNC_8(VAR_10, VAR_11);
  FUNC_7(&VAR_10->slock, VAR_13);
 } else
  FUNC_5(VAR_10, &VAR_9[VAR_14]);

 FUNC_4(VAR_10);
 FUNC_1(&VAR_10->lock);
 return 0;
}
