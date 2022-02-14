
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {int flags; unsigned long next_match_value; } ;
struct clock_event_device {scalar_t__ mode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sh_cmt_priv* FUNC_1 (struct clock_event_device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sh_cmt_priv*,unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2,
       struct clock_event_device *VAR_3)
{
 struct sh_cmt_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3->mode != VAR_0);
 if (FUNC_2(VAR_4->flags & VAR_1))
  VAR_4->next_match_value = VAR_2;
 else
  FUNC_3(VAR_4, VAR_2);

 return 0;
}
