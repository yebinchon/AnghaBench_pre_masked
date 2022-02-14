
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; int mode; } ;
struct mipid_device {int panel; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct mipid_device*) ;
 struct mipid_device* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mipid_device*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_4)
{
 struct mipid_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "out of memory\n");
  return -VAR_0;
 }

 VAR_4->mode = VAR_2;
 VAR_5->spi = VAR_4;
 FUNC_1(&VAR_4->dev, VAR_5);
 VAR_5->panel = VAR_3;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_4(&VAR_5->panel);

 return 0;
}
