
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct m25p {TYPE_1__* spi; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct m25p *VAR_1)
{
 ssize_t VAR_2;
 u8 VAR_3 = VAR_0;
 u8 VAR_4;

 VAR_2 = FUNC_1(VAR_1->spi, &VAR_3, 1, &VAR_4, 1);

 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->spi->dev, "error %d reading SR\n",
    (int) VAR_2);
  return VAR_2;
 }

 return VAR_4;
}
