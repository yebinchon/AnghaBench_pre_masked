
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int shift; void* min_delta_ns; void* max_delta_ns; int mult; } ;
struct sh_cmt_priv {int rate; int max_match_value; struct clock_event_device ced; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,struct clock_event_device*) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct sh_cmt_priv*,int) ;
 int FUNC_3 (struct sh_cmt_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct sh_cmt_priv *VAR_3, int VAR_4)
{
 struct clock_event_device *VAR_5 = &VAR_3->ced;

 FUNC_3(VAR_3, VAR_0);



 VAR_5->shift = 32;
 VAR_5->mult = FUNC_1(VAR_3->rate, VAR_2, VAR_5->shift);
 VAR_5->max_delta_ns = FUNC_0(VAR_3->max_match_value, VAR_5);
 VAR_5->min_delta_ns = FUNC_0(0x1f, VAR_5);

 if (VAR_4)
  FUNC_2(VAR_3, (VAR_3->rate + VAR_1/2) / VAR_1);
 else
  FUNC_2(VAR_3, VAR_3->max_match_value);
}
