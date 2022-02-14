
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00lib_conf {TYPE_1__* conf; int rf; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_2__ {int power_level; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_1 (struct rt2x00_dev*,struct rt2x00lib_conf*) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_3,
        struct rt2x00lib_conf *VAR_4,
        const unsigned int VAR_5)
{
 if (VAR_5 & VAR_0)
  FUNC_0(VAR_3, &VAR_4->rf,
      VAR_4->conf->power_level);
 if ((VAR_5 & VAR_1) &&
     !(VAR_5 & VAR_0))
  FUNC_2(VAR_3,
      VAR_4->conf->power_level);
 if (VAR_5 & VAR_2)
  FUNC_1(VAR_3, VAR_4);
}
