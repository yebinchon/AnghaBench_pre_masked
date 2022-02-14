
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {size_t size_buf; int kern_buf; int resource; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,unsigned long) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static ssize_t FUNC_3(unsigned int VAR_2, const char *VAR_3,
 size_t VAR_4, loff_t *VAR_5)
{
 ssize_t VAR_6;
 ssize_t VAR_7 = 0;

 if (VAR_4 <= VAR_1[VAR_2].size_buf) {
  VAR_6 = FUNC_0(VAR_1[VAR_2].kern_buf, VAR_3,
   (unsigned long)VAR_4);
  if (VAR_6 != 0)
   VAR_7 = (VAR_7 - VAR_6);
  else
   VAR_7 = VAR_4;

  VAR_7 = FUNC_2(VAR_1[VAR_2].resource,
   VAR_1[VAR_2].kern_buf, VAR_7, *VAR_5);
 } else {

  FUNC_1("Currently don't support large transfers\n");



  return -VAR_0;
 }

 return VAR_7;
}
