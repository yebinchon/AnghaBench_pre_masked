
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ar9170 {int needs_full_reset; TYPE_2__* hw; } ;
typedef size_t ssize_t ;
struct TYPE_6__ {int chan; } ;
struct TYPE_4__ {TYPE_3__ chandef; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*,int ) ;
 int FUNC_3 (struct ar9170*,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static ssize_t FUNC_5(struct ar9170 *VAR_3, const char *VAR_4,
       size_t VAR_5)
{
 int VAR_6;

 if (VAR_5 < 1)
  return -VAR_2;

 switch (VAR_4[0]) {
 case 'F':
  VAR_3->needs_full_reset = 1;
  break;

 case 'R':
  if (!FUNC_0(VAR_3)) {
   VAR_6 = -VAR_1;
   goto out;
  }

  VAR_3->needs_full_reset = 0;
  break;

 case 'M':
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 < 0)
   VAR_5 = VAR_6;

  goto out;

 case 'P':
  VAR_6 = FUNC_3(VAR_3, VAR_3->hw->conf.chandef.chan,
   FUNC_4(&VAR_3->hw->conf.chandef));
  if (VAR_6 < 0)
   VAR_5 = VAR_6;

  goto out;

 default:
  return -VAR_2;
 }

 FUNC_2(VAR_3, VAR_0);

out:
 return VAR_5;
}
