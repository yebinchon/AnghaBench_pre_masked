
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mISDNdevice {int nrbchan; int channelmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mISDNdevice* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct mISDNdevice *VAR_3 = FUNC_0(VAR_0);
 char *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_3->nrbchan; VAR_5++)
  *VAR_4++ = FUNC_1(VAR_5, VAR_3->channelmap) ? '1' : '0';

 return VAR_4 - VAR_2;
}
