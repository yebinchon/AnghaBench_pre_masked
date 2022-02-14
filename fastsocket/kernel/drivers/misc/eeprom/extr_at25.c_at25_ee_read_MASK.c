
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; char* rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct TYPE_3__ {unsigned int size; } ;
struct at25_data {int addrlen; int lock; TYPE_2__* spi; TYPE_1__ bin; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,size_t,unsigned int,int) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 size_t FUNC_6 (TYPE_2__*,struct spi_message*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static ssize_t
FUNC_8(
 struct at25_data *VAR_2,
 char *VAR_3,
 unsigned VAR_4,
 size_t VAR_5
)
{
 u8 VAR_6[VAR_1 + 1];
 u8 *VAR_7;
 ssize_t VAR_8;
 struct spi_transfer VAR_9[2];
 struct spi_message VAR_10;

 if (FUNC_7(VAR_4 >= VAR_2->bin.size))
  return 0;
 if ((VAR_4 + VAR_5) > VAR_2->bin.size)
  VAR_5 = VAR_2->bin.size - VAR_4;
 if (FUNC_7(!VAR_5))
  return VAR_5;

 VAR_7 = VAR_6;
 *VAR_7++ = VAR_0;


 switch (VAR_2->addrlen) {
 default:
  *VAR_7++ = VAR_4 >> 16;
 case 2:
  *VAR_7++ = VAR_4 >> 8;
 case 1:
 case 0:
  *VAR_7++ = VAR_4 >> 0;
 }

 FUNC_5(&VAR_10);
 FUNC_1(VAR_9, 0, sizeof VAR_9);

 VAR_9[0].tx_buf = VAR_6;
 VAR_9[0].len = VAR_2->addrlen + 1;
 FUNC_4(&VAR_9[0], &VAR_10);

 VAR_9[1].rx_buf = VAR_3;
 VAR_9[1].len = VAR_5;
 FUNC_4(&VAR_9[1], &VAR_10);

 FUNC_2(&VAR_2->lock);







 VAR_8 = FUNC_6(VAR_2->spi, &VAR_10);
 FUNC_0(&VAR_2->spi->dev,
  "read %Zd bytes at %d --> %d\n",
  VAR_5, VAR_4, (int) VAR_8);

 FUNC_3(&VAR_2->lock);
 return VAR_8 ? VAR_8 : VAR_5;
}
