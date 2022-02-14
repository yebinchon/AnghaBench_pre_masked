
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adsp_info {int send_irq; int read_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct adsp_info*,void*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct adsp_info *VAR_13)
{
 uint32_t VAR_14;
 uint32_t VAR_15;
 void *VAR_16;
 uint32_t VAR_17;
 int VAR_18;
 unsigned long VAR_19;
 int VAR_20 = 0;

 FUNC_4(&VAR_12, VAR_19);
 for (VAR_18 = 0; VAR_18 < 10; VAR_18++) {
  VAR_14 = FUNC_3(VAR_13->read_ctrl);

  if ((VAR_14 & VAR_4) ==
      VAR_5)
   goto ready;

  FUNC_6(10);
 }
 FUNC_2("adsp: not ready after 100uS\n");
 VAR_20 = -VAR_9;
 goto done;

ready:




 VAR_15 = VAR_14 & VAR_6;
 if ((VAR_15 != VAR_7) &&
     (VAR_15 != VAR_2)) {
  VAR_20 = -VAR_8;
  goto done;
 }




 VAR_17 = VAR_14 & VAR_1;


 VAR_16 = (void *)((VAR_14 &
        VAR_3) +
       (uint32_t)VAR_11);


 if (VAR_17 != VAR_0) {
  FUNC_1("adsp: unknown dsp cmd_type %d\n", VAR_17);
  VAR_20 = -VAR_10;
  goto done;
 }

 FUNC_0(VAR_13, VAR_16);

 VAR_14 = FUNC_3(VAR_13->read_ctrl);
 VAR_14 &= ~VAR_6;


 FUNC_7(VAR_14, VAR_13->read_ctrl);


 FUNC_7(1, VAR_13->send_irq);

done:
 FUNC_5(&VAR_12, VAR_19);
 return VAR_20;
}
