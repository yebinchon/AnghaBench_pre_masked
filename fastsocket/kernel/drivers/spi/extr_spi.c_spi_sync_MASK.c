
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int status; int * context; int complete; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct spi_device*,struct spi_message*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct spi_device *VAR_2, struct spi_message *VAR_3)
{
 FUNC_0(VAR_0);
 int VAR_4;

 VAR_3->complete = VAR_1;
 VAR_3->context = &VAR_0;
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 == 0) {
  FUNC_2(&VAR_0);
  VAR_4 = VAR_3->status;
 }
 VAR_3->context = ((void*)0);
 return VAR_4;
}
