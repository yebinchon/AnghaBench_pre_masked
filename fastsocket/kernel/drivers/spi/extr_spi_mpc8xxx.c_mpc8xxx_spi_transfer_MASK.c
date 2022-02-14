
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int queue; int status; scalar_t__ actual_length; } ;
struct spi_device {int master; } ;
struct mpc8xxx_spi {int lock; int work; int workqueue; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 struct mpc8xxx_spi* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_1,
    struct spi_message *VAR_2)
{
 struct mpc8xxx_spi *VAR_3 = FUNC_2(VAR_1->master);
 unsigned long VAR_4;

 VAR_2->actual_length = 0;
 VAR_2->status = -VAR_0;

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_0(&VAR_2->queue, &VAR_3->queue);
 FUNC_1(VAR_3->workqueue, &VAR_3->work);
 FUNC_4(&VAR_3->lock, VAR_4);

 return 0;
}
