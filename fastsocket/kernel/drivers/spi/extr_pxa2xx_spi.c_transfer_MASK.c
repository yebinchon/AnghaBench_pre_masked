
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int queue; int state; int status; scalar_t__ actual_length; } ;
struct spi_device {int master; } ;
struct driver_data {scalar_t__ run; int lock; int pump_messages; int workqueue; int busy; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 struct driver_data* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_5, struct spi_message *VAR_6)
{
 struct driver_data *VAR_7 = FUNC_2(VAR_5->master);
 unsigned long VAR_8;

 FUNC_3(&VAR_7->lock, VAR_8);

 if (VAR_7->run == VAR_3) {
  FUNC_4(&VAR_7->lock, VAR_8);
  return -VAR_1;
 }

 VAR_6->actual_length = 0;
 VAR_6->status = -VAR_0;
 VAR_6->state = VAR_4;

 FUNC_0(&VAR_6->queue, &VAR_7->queue);

 if (VAR_7->run == VAR_2 && !VAR_7->busy)
  FUNC_1(VAR_7->workqueue, &VAR_7->pump_messages);

 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
