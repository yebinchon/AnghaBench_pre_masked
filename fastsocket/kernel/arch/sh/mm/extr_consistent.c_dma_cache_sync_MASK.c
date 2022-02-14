
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 () ;



 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (void*,size_t) ;

void FUNC_5(struct device *VAR_0, void *VAR_1, size_t VAR_2,
      enum dma_data_direction VAR_3)
{



 void *VAR_4 = (void*) FUNC_1((unsigned long)VAR_1);


 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_4, VAR_2);
  break;
 case 128:
  FUNC_4(VAR_4, VAR_2);
  break;
 case 130:
  FUNC_3(VAR_4, VAR_2);
  break;
 default:
  FUNC_0();
 }
}
