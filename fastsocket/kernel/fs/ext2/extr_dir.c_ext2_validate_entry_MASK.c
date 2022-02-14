
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rec_len; } ;
typedef TYPE_1__ ext2_dirent ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline unsigned
FUNC_1(char *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 ext2_dirent *VAR_3 = (ext2_dirent*)(VAR_0 + VAR_1);
 ext2_dirent *VAR_4 = (ext2_dirent*)(VAR_0 + (VAR_1&VAR_2));
 while ((char*)VAR_4 < (char*)VAR_3) {
  if (VAR_4->rec_len == 0)
   break;
  VAR_4 = FUNC_0(VAR_4);
 }
 return (char *)VAR_4 - VAR_0;
}
