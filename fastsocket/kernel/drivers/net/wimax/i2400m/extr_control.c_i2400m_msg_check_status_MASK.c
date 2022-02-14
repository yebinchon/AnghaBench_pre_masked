
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2400m_l3l4_hdr {int status; } ;
typedef enum i2400m_ms { ____Placeholder_i2400m_ms } i2400m_ms ;
struct TYPE_3__ {char* msg; int errno; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,size_t,char*,char const*,int) ;

int FUNC_3(const struct i2400m_l3l4_hdr *VAR_2,
       char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 enum i2400m_ms VAR_6 = FUNC_1(VAR_2->status);
 const char *VAR_7;

 if (VAR_6 == 0)
  return 0;
 if (VAR_6 > FUNC_0(VAR_1)) {
  VAR_7 = "unknown status code";
  VAR_5 = -VAR_0;
 } else {
  VAR_7 = VAR_1[VAR_6].msg;
  VAR_5 = VAR_1[VAR_6].errno;
 }
 if (VAR_3)
  FUNC_2(VAR_3, VAR_4, "%s (%d)", VAR_7, VAR_6);
 return VAR_5;
}
