
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lis3l02dq_state {TYPE_2__* us; TYPE_1__* indio_dev; } ;
struct TYPE_4__ {int dev; int mode; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct lis3l02dq_state *VAR_8)
{
 int VAR_9;
 u8 VAR_10, VAR_11;

 VAR_8->us->mode = VAR_7;

 FUNC_3(VAR_8->us);

 VAR_10 = VAR_1;

 VAR_9 = FUNC_2(&VAR_8->indio_dev->dev,
     VAR_3,
     &VAR_10);
 if (VAR_9) {
  FUNC_0(&VAR_8->us->dev, "problem with setup control register 1");
  goto err_ret;
 }

 VAR_9 = FUNC_2(&VAR_8->indio_dev->dev,
     VAR_3,
     &VAR_10);
 if (VAR_9) {
  FUNC_0(&VAR_8->us->dev, "problem with setup control register 1");
  goto err_ret;
 }



 VAR_9 = FUNC_1(&VAR_8->indio_dev->dev,
           VAR_3,
           &VAR_11);
 if (VAR_9 || (VAR_11 != VAR_10)) {
  FUNC_0(&VAR_8->indio_dev->dev, "device not playing ball");
  VAR_9 = -VAR_0;
  goto err_ret;
 }

 VAR_10 = VAR_2;
 VAR_9 = FUNC_2(&VAR_8->indio_dev->dev,
     VAR_4,
     &VAR_10);
 if (VAR_9) {
  FUNC_0(&VAR_8->us->dev, "problem with setup control register 2");
  goto err_ret;
 }

 VAR_10 = VAR_6;
 VAR_9 = FUNC_2(&VAR_8->indio_dev->dev,
     VAR_5,
     &VAR_10);
 if (VAR_9)
  FUNC_0(&VAR_8->us->dev, "problem with interrupt cfg register");
err_ret:

 return VAR_9;
}
