
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6,
    irq_handler_t VAR_7, void *VAR_8)
{
 int VAR_9;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);

 VAR_9 = FUNC_4(VAR_4, "MMC detect");
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_5, "MMC w/p");
 if (VAR_9)
  goto exit_free_det;

 FUNC_2(VAR_4);
 FUNC_2(VAR_5);

 VAR_9 = FUNC_5(FUNC_1(VAR_2), VAR_7,
     VAR_0 | VAR_1,
     "MMC detect", VAR_8);
 if (VAR_9)
  goto exit_free_wp;

 return 0;

exit_free_wp:
 FUNC_3(VAR_5);

exit_free_det:
 FUNC_3(VAR_4);

 return VAR_9;
}
