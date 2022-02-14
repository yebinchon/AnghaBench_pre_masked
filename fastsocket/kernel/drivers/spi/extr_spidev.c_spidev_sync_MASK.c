
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spidev_data {int spi_lock; int * spi; } ;
struct spi_message {int status; int actual_length; int * context; int complete; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct spi_message*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct spidev_data *VAR_3, struct spi_message *VAR_4)
{
 FUNC_0(VAR_1);
 int VAR_5;

 VAR_4->complete = VAR_2;
 VAR_4->context = &VAR_1;

 FUNC_2(&VAR_3->spi_lock);
 if (VAR_3->spi == ((void*)0))
  VAR_5 = -VAR_0;
 else
  VAR_5 = FUNC_1(VAR_3->spi, VAR_4);
 FUNC_3(&VAR_3->spi_lock);

 if (VAR_5 == 0) {
  FUNC_4(&VAR_1);
  VAR_5 = VAR_4->status;
  if (VAR_5 == 0)
   VAR_5 = VAR_4->actual_length;
 }
 return VAR_5;
}
