
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ili9320_spi {unsigned char* buffer_addr; unsigned char* buffer_data; unsigned char id; int message; int dev; } ;
struct TYPE_2__ {struct ili9320_spi spi; } ;
struct ili9320 {TYPE_1__ access; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct ili9320 *VAR_3,
        unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct ili9320_spi *VAR_6 = &VAR_3->access.spi;
 unsigned char *VAR_7 = VAR_6->buffer_addr;
 unsigned char *VAR_8 = VAR_6->buffer_data;





 VAR_7[0] = VAR_6->id | VAR_1 | VAR_2;
 VAR_7[1] = VAR_4 >> 8;
 VAR_7[2] = VAR_4;



 VAR_8[0] = VAR_6->id | VAR_0 | VAR_2;
  VAR_8[1] = VAR_5 >> 8;
 VAR_8[2] = VAR_5;

 return FUNC_0(VAR_6->dev, &VAR_6->message);
}
