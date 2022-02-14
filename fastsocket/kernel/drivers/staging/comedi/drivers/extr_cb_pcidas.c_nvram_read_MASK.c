
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned long s5933_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_8, unsigned int VAR_9,
        uint8_t * VAR_10)
{
 unsigned long VAR_11 = VAR_7->s5933_config;

 if (FUNC_2(VAR_11) < 0)
  return -VAR_2;

 FUNC_1(VAR_3 | VAR_5,
      VAR_11 + VAR_0);
 FUNC_1(VAR_9 & 0xff, VAR_11 + VAR_1);
 FUNC_1(VAR_3 | VAR_4,
      VAR_11 + VAR_0);
 FUNC_1((VAR_9 >> 8) & 0xff, VAR_11 + VAR_1);
 FUNC_1(VAR_3 | VAR_6, VAR_11 + VAR_0);

 if (FUNC_2(VAR_11) < 0)
  return -VAR_2;

 *VAR_10 = FUNC_0(VAR_11 + VAR_1);

 return 0;
}
