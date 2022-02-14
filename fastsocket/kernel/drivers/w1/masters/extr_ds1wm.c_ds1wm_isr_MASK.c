
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1wm_data {int slave_present; scalar_t__ read_complete; void* read_byte; scalar_t__ write_complete; scalar_t__ reset_complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (struct ds1wm_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_7, void *VAR_8)
{
 struct ds1wm_data *VAR_9 = VAR_8;
 u8 VAR_10 = FUNC_1(VAR_9, VAR_1);

 VAR_9->slave_present = (VAR_10 & VAR_3) ? 0 : 1;

 if ((VAR_10 & VAR_2) && VAR_9->reset_complete)
  FUNC_0(VAR_9->reset_complete);

 if ((VAR_10 & VAR_5) && VAR_9->write_complete)
  FUNC_0(VAR_9->write_complete);

 if (VAR_10 & VAR_4) {
  VAR_9->read_byte = FUNC_1(VAR_9,
           VAR_0);
  if (VAR_9->read_complete)
   FUNC_0(VAR_9->read_complete);
 }

 return VAR_6;
}
