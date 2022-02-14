
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {struct adapter* adapter; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct port_info* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,...) ;
 unsigned int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,unsigned int) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
       char *VAR_4, int VAR_5)
{
 struct port_info *VAR_6 = FUNC_0(FUNC_6(VAR_3));
 struct adapter *VAR_7 = VAR_6->adapter;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 ssize_t VAR_12;

 VAR_9 = VAR_2 - VAR_5 / 2;
 FUNC_1();
 FUNC_5(VAR_7, VAR_0, VAR_9);
 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_5 & 1)
  VAR_8 >>= 16;
 VAR_10 = (VAR_8 >> 8) & 0xff;
 VAR_11 = VAR_8 & 0xff;
 if (!VAR_11)
  VAR_12 = FUNC_3(VAR_4, "disabled\n");
 else {
  VAR_8 = (VAR_7->params.vpd.cclk * 1000) / VAR_11;
  VAR_12 = FUNC_3(VAR_4, "%u Kbps\n", (VAR_8 * VAR_10) / 125);
 }
 FUNC_2();
 return VAR_12;
}
