
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct srp_event_struct {scalar_t__ cmnd; } ;
struct srp_cmd {int buf_fmt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct srp_cmd *VAR_1,
      struct srp_event_struct *VAR_2,
      struct device *VAR_3)
{
 u8 VAR_4, VAR_5;

 VAR_4 = VAR_1->buf_fmt >> 4;
 VAR_5 = VAR_1->buf_fmt & ((1U << 4) - 1);

 if (VAR_4 == VAR_0 && VAR_5 == VAR_0)
  return;

 if (VAR_2->cmnd)
  FUNC_0(VAR_2->cmnd);
}
