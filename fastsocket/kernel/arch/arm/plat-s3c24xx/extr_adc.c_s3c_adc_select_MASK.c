
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_adc_client {int channel; int is_ts; int (* select_cb ) (struct s3c_adc_client*,int) ;} ;
struct adc_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct s3c_adc_client*,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct adc_device *VAR_4,
      struct s3c_adc_client *VAR_5)
{
 unsigned VAR_6 = FUNC_1(VAR_4->regs + VAR_0);

 VAR_5->select_cb(VAR_5, 1);

 VAR_6 &= ~VAR_1;
 VAR_6 &= ~VAR_3;
 VAR_6 &= ~VAR_2;

 if (!VAR_5->is_ts)
  VAR_6 |= FUNC_0(VAR_5->channel);

 FUNC_3(VAR_6, VAR_4->regs + VAR_0);
}
