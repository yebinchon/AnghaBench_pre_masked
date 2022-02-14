
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info_flags; } ;
struct edd_info {TYPE_1__ params; } ;
struct edd_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct edd_info* FUNC_0 (struct edd_device*) ;
 int VAR_9 ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct edd_device *VAR_10, char *VAR_11)
{
 struct edd_info *VAR_12;
 char *VAR_13 = VAR_11;
 if (!VAR_10)
  return -VAR_8;
 VAR_12 = FUNC_0(VAR_10);
 if (!VAR_12 || !VAR_11)
  return -VAR_8;

 if (VAR_12->params.info_flags & VAR_0)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "DMA boundary error transparent\n");
 if (VAR_12->params.info_flags & VAR_1)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "geometry valid\n");
 if (VAR_12->params.info_flags & VAR_5)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "removable\n");
 if (VAR_12->params.info_flags & VAR_7)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "write verify\n");
 if (VAR_12->params.info_flags & VAR_3)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "media change notification\n");
 if (VAR_12->params.info_flags & VAR_2)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "lockable\n");
 if (VAR_12->params.info_flags & VAR_4)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "no media present\n");
 if (VAR_12->params.info_flags & VAR_6)
  VAR_13 += FUNC_1(VAR_13, VAR_9, "use int13 fn50\n");
 return (VAR_13 - VAR_11);
}
