
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct hfsplus_unistr {void* length; void** unicode; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*,char const*,int,scalar_t__*) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (scalar_t__,int*) ;

int FUNC_4(struct super_block *VAR_3, struct hfsplus_unistr *VAR_4,
      const char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u16 *VAR_10, VAR_11 = 0;
 wchar_t VAR_12;

 VAR_9 = !(FUNC_0(VAR_3).flags & VAR_2);
 while (VAR_11 < VAR_1 && VAR_6 > 0) {
  VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6, &VAR_12);

  if (VAR_9 && (VAR_10 = FUNC_3(VAR_12, &VAR_8))) {
   if (VAR_11 + VAR_8 > VAR_1)
    break;
   do {
    VAR_4->unicode[VAR_11++] = FUNC_2(*VAR_10++);
   } while (--VAR_8 > 0);
  } else
   VAR_4->unicode[VAR_11++] = FUNC_2(VAR_12);

  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }
 VAR_4->length = FUNC_2(VAR_11);
 if (VAR_6 > 0)
  return -VAR_0;
 return 0;
}
