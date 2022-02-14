
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int queue; int status; scalar_t__ actual_length; } ;
struct spi_device {int max_speed_hz; int master; } ;
struct spi_bitbang {int lock; int work; int workqueue; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 struct spi_bitbang* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct spi_device *VAR_2, struct spi_message *VAR_3)
{
 struct spi_bitbang *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_3->actual_length = 0;
 VAR_3->status = -VAR_0;

 VAR_4 = FUNC_2(VAR_2->master);

 FUNC_3(&VAR_4->lock, VAR_5);
 if (!VAR_2->max_speed_hz)
  VAR_6 = -VAR_1;
 else {
  FUNC_0(&VAR_3->queue, &VAR_4->queue);
  FUNC_1(VAR_4->workqueue, &VAR_4->work);
 }
 FUNC_4(&VAR_4->lock, VAR_5);

 return VAR_6;
}
